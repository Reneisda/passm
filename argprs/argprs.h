#ifndef PASSM_ARGPRS_H
#define PASSM_ARGPRS_H
#endif //PASSM_ARGPRS_H
#include <stdint.h>


typedef struct {
    char* short_option;
    char** long_option;
    char** description;
    uint8_t* parameters;
    const char* PROGRAM_NAME;
    const char* VERSION;
    int size;
}
arguments_t[1];


void arg_init(arguments_t arg, const char* program_name, const char* version, int size);
void arg_add(arguments_t arg, char short_opt, char* long_opt, char* desc, uint8_t parameters);
void arg_print_help(arguments_t arg);
void arg_print_version(arguments_t arg);
void arg_print_program_version(arguments_t arg);
void arg_parse(arguments_t arg, int argc, char** argv);

