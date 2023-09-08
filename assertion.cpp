
/*!
\file
\brief File with function that print information about assert
*/

#include "assertion.h"
#include "TXLib.h"
#include "set_colour.h"
#include <stdio.h>
#include <assert.h>

ERRORS call_errors(ERRORS errors)
    {
    cooler_assert(!isfinite(errors), NAN_ERROR, NAN_ERROR);

    set_colour(FOREGROUND_RED);

    switch (errors)
        {

        case NAN_ERROR:
            fprintf(stderr, "The value of the variable is not defined! (NAN variable)\n");
            break;
        case NULL_ERROR:
            fprintf(stderr,"The pointer is not defined! (NULL pointer)\n");
            break;
        case POINTER_MATCHING:
            fprintf(stderr,"Matching addresses! (pointer = pointer)\n");
            break;
        case FILE_NOT_FOUND:
            fprintf(stderr,"File not found! (NULL file pointer)\n");
            break;
        case NOT_ERROR:
            fprintf(stderr, "Correct program\n");
            break;
        default:
            break;
        }
    fprintf(stderr, "\n");
    set_colour(FOREGROUND_GREY);
    return NOT_ERROR;
    }
