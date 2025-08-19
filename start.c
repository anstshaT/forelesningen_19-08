#include <stdio.h>

int main(){
    int a = 5;  /* ціле число %d */
    float b = 10; /* число з комою після десятки %f*/

    char hilsen[] = "Hei"; /* масив символів %s*/
    char bokstav = 'a';  /* один символ %c */

    int tall = 10;
    float tall2 = (float)tall; /* змінити тип змінної, з цілого число в число з десятками */

    printf("%d, %f, %s, %c", a, b, hilsen, bokstav);

    return 0;
}

