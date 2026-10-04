#include <stdio.h>

int main() {
    int id;
    int version;
    int status;

    scanf ("%d %x %o", &id, &version, &status);

    int sum = id + version + status;

    printf ("UNIT ID: %d\n", id);
    printf ("UNIT VERSION: %d\n", version);
    printf ("UNIT STATUS: %d\n", status);
    printf ("SUM: %d\n", sum);

    return 0;
}