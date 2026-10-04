#include <stdio.h>

int main(){
    int dec = 10;
    int oct = 010;
    int hex = 0x10;

    printf ("DEC_10: %d\n", dec);
    printf ("OCT_10: %d\n", oct);
    printf ("HEX_10: %d\n", hex);

    printf ("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf ("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf ("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char ch = 'A'; // char - тип данных для хранения 1 символа (занимает в памяти ровно 1 байт)
    printf ("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf ("CHAR_LIT_VAR_STR: %zu %zu %zu", sizeof('A'), sizeof(ch), sizeof("A"));

    return 0;


}