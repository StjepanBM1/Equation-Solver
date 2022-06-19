#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equation.h"

int main (int argc, const char** argv)
{
    if (argc != 5)
    {
        printf("Number of argument/arguments is: %d\n", argc);
        printf("<first number> <operator> <second number> <third number (result)>\n");
        printf("If number is unknown, value need to be zero (0)!\nExiting and returning 1...\n");
        return 3;
    }

    printf("Version %s\n", VERSION);

    #define EQUATION equation(argv[2][0], atof(argv[1]), atof(argv[3]), atof(argv[4]))
 
    if (EQUATION == 1)
    {
        printf("Invalid operator %c!\n", argv[2][0]);
        return 1;
    }

    else if (EQUATION == 2)
    {
        printf("Can't solve equation because all numbers are equal to zero (0)!\n");
        return 2;
    }

    else
    {
        printf("%f\n", EQUATION);
    }

    return 0;
}
