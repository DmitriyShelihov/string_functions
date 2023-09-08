#ifndef ASSERTION_H
#define ASSERTION_H

#include "TXLib.h"
#include "set_colour.h"
#include <stdio.h>
#include <assert.h>


/*!
\file
\brief Header file with assert define
*/

#define POSITION_IN_CODE __FILE__, __PRETTY_FUNCTION__, __LINE__  ///< a define that combines three position macros in the code

enum ERRORS
    {
    NAN_ERROR = 1,
    NULL_ERROR = -1,
    POINTER_MATCHING = 2,
    FILE_NOT_FOUND = 3,
    NOT_ERROR = 0
    } ;

/*!
\brief a define that checks a variable for an error.
*/

#define COOLER_ASSERT1
#define COOLER_ASSERT
#ifdef COOLER_ASSERT

    #define cooler_assert(condition, error_code, returned_value)                                                                              \
        if (condition)                                                                                                        \
            {                                                                                                                 \
            set_colour(FOREGROUND_RED);                                                                                       \
            fprintf (stderr, "Assert %s in file %s in %s:%d failed\n", #condition, POSITION_IN_CODE);                         \
            set_colour(FOREGROUND_GREY);                                                                                      \
            call_errors(error_code);                                                                                          \
            return returned_value;                                                                                                \
            }
#else
    #define cooler_assert(condition, error_code, returned_value) \
        ;
#endif




ERRORS call_errors(ERRORS);


#endif
