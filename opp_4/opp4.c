#include <stdio.h>

int main()
{
    float a = 15;
    float b = 89;
    char operator = '+';

    if (operator == '-')
    {
        printf("%f", a - b);
    }
    else if (operator == '*')
    {
        printf("%f", a * b);
    }
    else if (operator == '+')
    {
        printf("%f", a + b);
    }
    else
    {
        char text[] = "Not valid operator";
        printf("%s", text);
    }

    return 0;
}
