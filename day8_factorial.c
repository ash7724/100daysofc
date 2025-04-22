// Factrial using recursion
#include <stdio.h>
int fact_rec (int n);

int main() {
    int num,fact;
    printf("Enter a number for factorial");
    scanf("%d",&num);
    fact=fact_rec(num);
    printf("Factorial of a number is %d",fact);

    return 0;
}

int fact_rec (int n){
    while(n>1){
    return (n*fact_rec(n-1));
    n--;
    }
}
