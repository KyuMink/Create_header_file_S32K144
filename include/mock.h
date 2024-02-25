#ifndef __MOCK_H__
#define __MOCK_H__

#include <inttypes.h>
typedef struct
{
    char *field_of_[6];
    char field_count;
} field_detect_t;

typedef struct
{
    char field_name[50];
    char width[4];
    char Access[10];
} field_t;

typedef struct
{
    char register_name[50];
    uint32_t offset;
    int num_field;

    field_t field[50];
} register_t;

typedef struct
{
    char module_name[50];
    char base_address[15];
    int num_register;
    register_t registers[50];
} module_t;

void create_header_file(module_t module, char *file_out)
{
    char header_file_name[100];
    strcpy(header_file_name, file_out);
    strcat(header_file_name, "/");
    strcat(header_file_name, module.module_name);
    strcat(header_file_name, ".h");

    printf("%s\n", header_file_name);

    FILE *header_file = fopen(header_file_name, "w");

    if (header_file == NULL)
    {
        printf("Error open header file.\n");
        return;
    }
    else
    {
        fprintf(header_file, "/*\n");
        fprintf(header_file, "** ###################################################################\n");
        fprintf(header_file, "**     Processor:           S32K144\n");
        fprintf(header_file, "**     Compiler:            Keil ARM C/C++ Compiler\n");
        fprintf(header_file, "**     Version:             rev. 1.0, <GENERATION_TIME>\n");
        fprintf(header_file, "**\n");
        fprintf(header_file, "**     Abstract:\n");
        fprintf(header_file, "**         Peripheral Access Layer for S32K144\n");
        fprintf(header_file, "**\n");
        fprintf(header_file, "** ###################################################################\n");
        fprintf(header_file, "*/\n\n");

        fprintf(header_file, "#ifndef __S32K144_%s_H__\n", module.module_name);   // module name
        fprintf(header_file, "#define __S32K144_%s_H__\n\n", module.module_name); // module name

        fprintf(header_file, "#include <stdint.h> \n\n");
        fprintf(header_file, "#ifndef RO\n");
        fprintf(header_file, "#define RO const\n");
        fprintf(header_file, "#define RW\n\n");
        fprintf(header_file, "#define IO volatile\n");
        fprintf(header_file, "#define DM\n\n");
        fprintf(header_file, "#endif //! #ifndef RO\n\n");

        for (int i = 0; i <= module.num_register; ++i) // fprintf structs of registers
        {
            fprintf(header_file, "typedef struct %s_Type\n", module.registers[i].register_name); // register_name
            fprintf(header_file, "{\n");

            for (int j = 0; j < module.registers[i].num_field; ++j) // fprintf fields of registers
            {
                fprintf(header_file, "    %s uint32_t %s : %s;\n", module.registers[i].field[j].Access, module.registers[i].field[j].field_name, module.registers[i].field[j].width); //<Access> FIELD_1_NAME> <FIELD_1_WIDTH>
            }

            fprintf(header_file, "} %s_t;\n\n", module.registers[i].register_name); // register_name
        }

        fprintf(header_file, "typedef struct %s_Type\n", module.module_name); // module_name
        fprintf(header_file, "{\n");

        int RES_count = 0;
        for (int i = 0; i <= module.num_register; ++i)
        {
            if ((RES_count == 0) && (module.registers[0].offset!=0))
            {
                fprintf(header_file, "    DM uint8_t RES%d[%d];\n", RES_count, module.registers[i].offset - 4); // RES
                fprintf(header_file, "    IO %s_t %s;\n", module.registers[i].register_name, module.registers[i].register_name);                  // register name

                ++RES_count;
            }
            else if (((module.registers[i + 1].offset) - (module.registers[i].offset) > 4) && (i < module.num_register))
            {
                fprintf(header_file, "    IO %s_t %s;\n", module.registers[i].register_name, module.registers[i].register_name);                  // register name
                fprintf(header_file, "    DM uint8_t RES%d[%d];\n", RES_count, module.registers[i + 1].offset - module.registers[i].offset - 4); // RES
                ++RES_count;
            }
            else
            {
                fprintf(header_file, "    IO %s_t %s;\n", module.registers[i].register_name, module.registers[i].register_name); // register_name
            }
        }
        fprintf(header_file, "} %s_t;\n\n", module.module_name); // module_name
        fprintf(header_file, "#define %s_BASE_ADDRS (%s)\n", module.module_name, module.base_address);                               // module_name; base address
        fprintf(header_file, "#define %s ((%s_t *) %s_BASE_ADDRS)\n\n", module.module_name, module.module_name, module.module_name); // module_name

        fprintf(header_file, "#endif //! #ifndef __S32K144_%s_H__\n", module.module_name); // module_name
        fclose(header_file);
        return;
    }
}
void drop_endline(char *str)
{
    while (*str)
    {
        if (*str == '\n' || *str == '\r')
        {
            *str = 0;
        }
        str++;
    }
}

void print_n_line()
{
    char full_path[BUFSIZ];
    uint32_t number_of_line;
    FILE *file;
    char line[BUFSIZ];

    // get input file path and number of line to print
    printf("Enter file path::\n");
    scanf(" %s", full_path);
    printf("Enter number of line to print::\n");
    scanf(" %d", &number_of_line);

    // check if the file is valid
    file = fopen(full_path, "r");
    if (file == NULL)
    {
        printf("%s\n", "Input file error");
    }
    else
    {
        uint32_t printed_line = 0;
        while (fgets(line, BUFSIZ, file))
        {
            if (printed_line >= number_of_line)
            {
                // reset number of printed line
                printed_line = 0;
                number_of_line = 0;

                // get the new number of line to print
                printf("Enter number of line to print::\n");
                scanf(" %d", &number_of_line);
            }

            // drop ending line character, skip empty line as well
            drop_endline(line);
            if (strlen(line) != 0)
            {
                printf("%s\n", line);
                printed_line++;
            }
        }
    }
}

void foo(void);

#endif //!__MOCK_H__