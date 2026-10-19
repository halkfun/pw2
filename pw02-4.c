#include <stdio.h>
#include <limits.h>

int main() {
    printf ("INT_MIN: %d\n", INT_MIN);
    printf ("INT_MAX: %d\n", INT_MAX);
    printf ("UINT_MAX: %d\n", UINT_MAX);

    int range_ok = ((unsigned int) INT_MAX * 2u + 1u == UINT_MAX); //unsigned int - от знакового переполнения (мы же ещё умножаем на 2, 
    //а у int макс значение меньше умноженного на 2)
    printf ("RANGE OK: %d\n", range_ok);

    return 0;
}