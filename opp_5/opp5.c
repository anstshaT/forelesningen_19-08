#include <stdio.h>

int main()
{
    float a;
    float b;
    char operator;

    printf("Type a number for a: \n");
    scanf("%f", &a);

    printf("Type a number for b: \n");
    scanf("%f", &b);

    printf("Type a operator:\n");
    scanf("%s", &operator);

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
    else if (operator == '/')
    {
        printf("%f", a / b);
    }
    else
    {
        char text[] = "Not valid operator";
        printf("%s", text);
    }

    return 0;
}
