# include <stdio.h>

int main()
{
    char a = 'b';
    int b = 12;
    float c = 12.34;
    double d = 12.34;
    unsigned int e = -12;
    short int f = 12;

    printf("char a value: %c and size: %lu bytes\n", a, sizeof(a));
    printf("int b value: %d and size: %lu bytes\n", b, sizeof(b));
    printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));
    printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));
    printf("unsigned int e value: %d and size: %lu bytes\n", e, sizeof(e));
    printf("short int f value: %d and size: %lu bytes\n", f, sizeof(f));
}
