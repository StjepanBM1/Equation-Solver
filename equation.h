#ifndef _EQUATION_H
#define _EQUATION_H

#define VERSION "0.0.4"

float equation(char op, float x, float y, float z)
{
    float n = 0;

    if (x == n)
    {
        switch (op)
        {
            case '+':
                return (z - y);
                break;
            
            case '-':
                return (z + y);
                break;

            case '*':
                return (z / y);
                break;

            case '/':
                return (z * y);
                break;

            default:
                return 1;
                break;
        }
    }

    if (y == n)
    {
        switch (op)
        {
            case '+':
                return (x - z);
                break;
            
            case '-':
                return (x + z);
                break;

            case '*':
                return (x / z);
                break;

            case '/':
                return (x / z);
                break;

            default:
                return 1;
                break;
        }
    }

    if (z == n && x != n && y != n)
    {
        return 2;
    }

    return 0;
}

#endif