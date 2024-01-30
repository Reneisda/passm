#ifndef PASSM_ARG_RESULT_SET_H
#define PASSM_ARG_RESULT_SET_H

#include "argument.h"


typedef struct {
    argument_t* arguments;
    int size;
}
result_set_t[1];

#endif //PASSM_ARG_RESULT_SET_H
