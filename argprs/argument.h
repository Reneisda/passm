#ifndef PASSM_ARGUMENT_H
#define PASSM_ARGUMENT_H

typedef struct {
    char argument;
    char** parameters;
}
argument_t[1];

void arg_add(argument_t argument, char short_opt);
void add_paramter(argument_t argument, char* par, int index);

#endif //PASSM_ARGUMENT_H
