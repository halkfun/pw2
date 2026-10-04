#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1, n2;
    scanf ("%d %d", &n1, &n2);

    bool ready = n1;
    bool state = n2;

    printf ("MODULE READY: %d\n", ready);
    printf ("FAULT_STATE: %d\n", state);
    printf ("BOOL_SIZE: %zu\n", sizeof(bool)); //цел. тип size_t из-за sizeof (без знак-й тип для выраж-я размеров объектов в памяти). z - тип size_t, 
    //u - без знак-е целое число
    printf ("FLAGS_SUM: %d\n", ready + state);

    return 0;
}

//false считается только чистый 0, что не нуль является истиной (1)