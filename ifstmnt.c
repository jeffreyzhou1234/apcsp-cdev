# include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;

    if (a == 0){
        printf("a is equal to 0\n");
    } else {
        printf("a is not equal to 0\n");
    }

    if (a != 0){
        printf("a is not equal to 0\n");
    } else {
        printf("a is equal to 0\n");
    }

    if (a > 0){
        printf("a is greater than 0\n");
    } else {
        printf("a is not greater than 0\n");
    }

    if (a >= 0){
        printf("a is greater than or equal to 0\n");
    } else {
        printf("a is not greater than or equal to 0\n");
    }

    if (a == 0 & b == 0){
        printf("a is equal to 0 and b is equal to 0\n");
    } else {
        printf("a is not equal to 0 and b is not equal to 0\n");
    }

    if (a == 0 || b == 0){
        printf("a is equal to 0 or b is equal to 0\n");
    } else {
        printf("a is not equal to 0 or b is not equal to 0\n");
    }

    if (!(a == 0)){
        printf("a is not equal to 0\n");
    } else {
        printf("a is equal to 0\n");
    }
}
