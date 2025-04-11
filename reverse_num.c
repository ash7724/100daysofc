// Online C compiler to run C program online
//Progeram to revese an  integrer in C
#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    int a,num,rev_num,rem;
    printf("\n Enter a nuber to reverse it ");
    scanf("%d",&num);
    printf("\n The number is a=%d",num);
    rev_num=0;
    rem=0;
    a=num;
    while (num!=0) 
    {   rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    printf("\n The Reverse of number %d is a=%d",a,rev_num);

    return 0;
}
