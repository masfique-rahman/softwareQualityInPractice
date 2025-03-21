#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("All prime numbers between 1 and 50:\n");
    for (int num = 2; num <= 50; num++){
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            printf("%d ", num);
        }
    }
    printf("\n");
return 0;
}
