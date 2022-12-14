#ifndef __useful_functions_h_
#define __useful_functions_h_
#include <stdio.h>
#include <math.h>

const char MY_RED_OUTPUT[] = "\033[1m\033[40;31m";
const char MY_NORMAL_OUTPUT[] = "\033[0m";

#ifndef NDEBUG
#define ASSERT(x)                                           \
    if (!(x))                                               \
    {                                                       \
        printf("%s", MY_RED_OUTPUT);                        \
        printf("ERROR: %s; ", #x);                          \
        printf("in file: %s; ", __FILE__);                  \
        printf("in function: %s; ", __PRETTY_FUNCTION__);   \
        printf("on line: %d", __LINE__);                    \
        printf("%s", MY_NORMAL_OUTPUT);                     \
        printf("\n");                                       \
        abort();                                            \
    }
#else
#define ASSERT(x)
#endif

//! @param [in] left left operand
//! @param [in] right right operand
//! @return 1 if left and right are equal else 0
int are_equal(double left, double right);

//! @param [in] d number to check
//! @return 1 if d not (+-)infinity and not NaN else 0
int is_finite(double d);

//! @param [in] ptr_1 pointer to double, which will become lesser or equal
//! @param [in] ptr_2 pointer to double, which will become higher or equal
//! @return 1 if *ptr_2 was lesser than *ptr_1 else 0
int sort(double *ptr_1, double *ptr_2);

#endif
