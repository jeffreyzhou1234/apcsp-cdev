# include <stdio.h>

int main()
{
    int div = 3;
    printf("looking for numbers divisible by %d\n", div);

    for (int i = 1; i < 101; i++){
        if (i % div ==0){
             printf("%d is divisible\n", i);
        } else {
            continue;
        }
    }
}
