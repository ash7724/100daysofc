/*Write a C program to perform bitwise operation on a number*/
#include <stdio.h>
int bit_toggle(int num) ;
int bit_clr(int num) ;
void div_by_2(int num) ;
void pov_of_2(int num) ;

int main()
{
    int num,num2;
    int result;
    printf("Enter a 8 bit number to perform operation");
    scanf("%d",&num);
    num2=num;
    num2=bit_toggle(num2);
    printf("\n 8 bit number after Toggle operation is %d",num2);
    num2=num;
    num2=bit_clr(num2);
    printf("\n 8 bit number after Clear operation is %d",num2);
    num2=num;
    div_by_2(num2);
    pov_of_2(num2);
    return 0;
}
//Q2: Given an integer x, write a C function that clears (sets to 0) the 4th bit from the right. Provide both the theoretical explanation and the code.
int bit_clr(int num) {
    return (num & 0xF7);
}


/*Write a C program that toggles the 3rd bit (from the right) of a given integer. 
Explain how the XOR (^) operator is used in your solution*/
int bit_toggle(int num) {
    return (num ^ 0x04);
}

/*Write a C program to check if a number is divisible by 2*/
void div_by_2(int num) {
    if (num>>1 ==0)
        printf("\n 8 bit number is %d divisible by 2",num);    
    else
        printf("\n 8 bit number is %d not divisible by 2",num);     
}

/*Write a C program to check if a number is of power of 2*/
void pov_of_2(int num) {
    int result;
    //printf("\n 8 bit number is %p  and not of it is %p",num , (~ num & 0xFFFF)) ;    
    //printf("\n num && (~ num & 0xFFFF)= %p",num && (~ num & 0xFFFF)) ;    
    if ((num && (~ num & 0xFFFF)) ==1)
        printf("\n 8 bit number is %d Power of 2",num);    
    else
        printf("\n 8 bit number is %d not Power of 2",num);     
}
