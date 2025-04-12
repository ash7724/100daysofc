//Write a program in C to print the Fibonacci series using iteration. 
#include <stdio.h>

int main() {
    // Write C code here
    int a=0,b=1;
    int len;
    int next;
    printf("\n Enter length of the fibonacci series");
    scanf("%d",&len);
    printf("  %d  %d",a,b);
    next=a+b;
    a=b;
    b=next;
    printf("  %d",next);
    for (int i=2; i<len;i++) 
    {   next=a+b;
        a=b;
        b=next;   
        printf("  %d",next);
    }
    return 0;
}
