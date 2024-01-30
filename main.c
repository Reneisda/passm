#include <stdio.h>
#include "user_interaction.h"
#include "argprs/argprs.h"
#include "argprs/arg_result_set.h"

#define PROGRAM_NAME "passm"
#define PROGRAM_VERSION "1.0.0"


int main(int argc, char** argv) {
    arguments_t args;
    result_set_t parsed_arguments;
    res_init(parsed_arguments);

    arg_init(args, PROGRAM_NAME, PROGRAM_VERSION, 4);
    arg_add(args, 'h', "help", "prints help", 0);
    arg_add(args, 'a', "add", "adds a password to the database", 1);
    arg_add(args, 'l', "list", "lists all saved passwords", 0);
    arg_add(args, 'd', "delete", "deletes saved password", 4);

    arg_print_help(args);
    arg_parse(args, parsed_arguments, argc, argv);

    res_print(parsed_arguments);

    if (argc > 1) {
        return 0;
    }
    // interaction mode


    return 0;
}
