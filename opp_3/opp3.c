#include <stdio.h>
#include <math.h>

int main(){
    float numb = 3.98;
    int roundedNumb = ceil(numb); /* ceil - до найбільшого цілого число */
    int roundedNumb2 = floor(numb); /* floor - до найменшого цілого числа */

    printf("%d\n", roundedNumb); /* 4 */
    printf("%d", roundedNumb2); /* 3 */
    return 0;
}
