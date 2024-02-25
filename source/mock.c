#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include "mock.h"

#define MAX_FIELD 6
#define MAX_LINE_SIZE 100

int flag_in = 0, flag_out = 0;

module_t module[MAX_LINE_SIZE];
int num_module = 0;
int RES_num;

// get each field of each line and count
field_detect_t parse_lines(char *line, char *sep)
{
    field_detect_t str;

    char *field = strtok(line, sep);
    while (field != NULL && str.field_count < MAX_FIELD)
    {
        str.field_of_[str.field_count] = field;
        field = strtok(NULL, sep);
        str.field_count++;
    }

    return str;
}

//assign access into registers
module_t assign_access(module_t module, char *field)
{
    int len = strlen(field);

    if (field[0] == '-')
    {
        strcpy(field, "RO");
    }
    else
    {
        field[len - 1] = '\0';
    }

    strcpy(module.registers[module.num_register].field[module.registers[module.num_register].num_field].Access, field); // access
    return module;
}

//assign field name into registers
module_t assign_field_name(module_t module, char *field)
{
    int len = strlen(field);
    if (field[0] == '-')
    {
        sprintf(field, "RES%d", RES_num);
        ++RES_num;
    }
    else
    {
        // do nothing
    }

    strcpy(module.registers[module.num_register].field[module.registers[module.num_register].num_field].field_name, field); // field_name
    return module;

}

module_t *read_file(char *file_in)
{
    FILE *in_file = fopen(file_in, "r");
    if (in_file == NULL)
    {
        printf("Input file error\n");
        flag_in = 0;
        return 0;
    }
    else
    {
        flag_in = 1;
        char flag = 0;
        field_detect_t field;
        char line[MAX_LINE_SIZE];
        char sep[] = ",";
        fgets(line, MAX_LINE_SIZE, in_file); // Skip the header line

        while (fgets(line, sizeof(line), in_file))
        {
            field = parse_lines(line, sep); // get each field
            switch (field.field_count)
            {
            case 6: // module + first register
                ++num_module;
                strcpy(module[num_module].module_name, field.field_of_[1]);                                              // module_name
                strcpy(module[num_module].base_address, field.field_of_[0]);                                             // base address
                strcpy(module[num_module].registers[module[num_module].num_register].register_name, field.field_of_[3]); // the first register_name

                module[num_module].registers[module[num_module].num_register].offset = strtol(field.field_of_[2], NULL, 16); // the first_ofsfset
                flag = 1;
                break;

            case 4: // register
                RES_num = 0;
                ++module[num_module].num_register;
                strcpy(module[num_module].registers[module[num_module].num_register].register_name, field.field_of_[1]); // register_name
                module[num_module].registers[module[num_module].num_register].offset = strtol(field.field_of_[0], NULL, 16);
                break;

            case 3: // fields
                if (flag == 1) // The first register of module
                {
                    RES_num = 0;
                    strcpy(module[num_module].registers[module[num_module].num_register].field[module[num_module].registers[module[num_module].num_register].num_field].width, field.field_of_[1]); // width_field

                    module[num_module] = assign_access(module[num_module], field.field_of_[2]);     // the first access
                    module[num_module] = assign_field_name(module[num_module], field.field_of_[0]); // the first field_name

                    ++module[num_module].registers[module[num_module].num_register].num_field;
                    flag = 0;
                }
                else
                {
                    strcpy(module[num_module].registers[module[num_module].num_register].field[module[num_module].registers[module[num_module].num_register].num_field].width, field.field_of_[1]); // width_field
                    module[num_module] = assign_access(module[num_module], field.field_of_[2]);                                                                                                     // access
                    module[num_module] = assign_field_name(module[num_module], field.field_of_[0]);                                                                                                 // field_name
                    ++module[num_module].registers[module[num_module].num_register].num_field;
                }

                break;

            default:
                break;
            }
        }
    }
    fclose(in_file);  
    return module;
}

int main(int args, char *argv[])
{
    // declare variable
    int selection;

    char file_out[50];
    char file_in[50];

    while (1)
    {
        printf("Enter your selection::\n");
        scanf(" %d", &selection);
        if (selection == 0)
        {
            break;
        }
        switch (selection)
        {
        case 1:
            // requirement 1 implementation
            printf("Enter the input file location::\n");
            scanf(" %s", file_in);
            module_t *module_test = read_file(file_in);
            break;

        case 2:
            // requirement 2 implementation
            printf("Enter the output file location::\n");
            scanf(" %s", file_out);
            flag_out = 1;
            break;

        case 3:
            // requirement 3 implementation
            if ((flag_in == 0) || (flag_out == 0))
            {
                printf("Missing input or output path\n");
            }
            else
            {
                for (int i = 1; i <= num_module; ++i)
                {
                    create_header_file(module_test[i], file_out);
                }
            }

            break;
        case 4:
            // requirement 4 implementation
            print_n_line();
            break;

        default:
            printf("selection: %d is not valid\n", selection);
            exit(1);
            break;            
        }
    }
    return 0;
}
