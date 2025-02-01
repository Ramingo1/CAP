#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    
    printf("Mariam");
    printf("Speichergröße der Datentypen (in Bytes):\n");
    printf("char: %zu Byte\n", sizeof(char));
    printf("int: %zu Bytes\n", sizeof(int));
    printf("float: %zu Bytes\n", sizeof(float));
    printf("double: %zu Bytes\n", sizeof(double));
    printf("long: %zu Bytes\n", sizeof(long));
    printf("long long: %zu Bytes\n", sizeof(long long));
    printf("short: %zu Bytes\n", sizeof(short));

    printf("\nGrenzen der Ganzzahltypen:\n");
    printf("char: %d bis %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d bis %d\n", INT_MIN, INT_MAX);
    printf("short: %d bis %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld bis %ld\n", LONG_MIN, LONG_MAX);
    printf("long long: %lld bis %lld\n", LLONG_MIN, LLONG_MAX);

    printf("\nGrenzen der Fließkommazahlen:\n");
    printf("float: %e bis %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e bis %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le bis %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}

