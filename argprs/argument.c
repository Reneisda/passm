#include <malloc.h>
#include <string.h>
#include "argument.h"

void arg_add(argument_t argument, char short_opt) {
    argument->argument = short_opt;
}
void add_paramter(argument_t argument, char* par, int index) {
    argument->parameters = (char**) realloc(argument->parameters, sizeof(char*) * (index + 1));
    argument->parameters[index] = malloc(sizeof(char) * strlen(par));
    strcpy(argument->parameters[index], par);
}