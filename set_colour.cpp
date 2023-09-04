#include "set_colour.h"
#include "TXLib.h"
#include <stdio.h>


void set_colour(short unsigned int wished_colour)
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wished_colour);
    }
