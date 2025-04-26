// Bitwise operator
#include <stdio.h>

int main() {
    // Write C code here
    int a=254;
    int b=35;
    int dup=a;
    printf("\n Value of a in Hex is %p in binary %b and decimal %d",a,a,a);
    printf("\n Value of b in Hex is %p in binary %b and decimal %d",b,b,b);

    dup=dup>>1;
    printf("\n Value of a in Hex is %p in binary %b and decimal %d",dup,dup,dup);
    dup=a;
    dup=dup<<1;
    printf("\n Value of a in Hex is %p in binary %b and decimal %d",dup,dup,dup);

    //write a C program that uses bitwise operators to determine whether a number is even or odd.
    a=254;
    printf("\n Value of a in Hex is %p in binary %b and decimal %d a&1=%p a&1=%d \n",a,a,a,a&1,a&1);

    if( (a & 1) ==0)
        printf("%d is Even",a);
    else 
        printf("%d is Odd",a);

    //Q1: Write a C program that toggles the 3rd bit (from the right) of a given integer. Explain how the XOR (^) operator is used in your solution
    
    printf(" A is %b  ",a);
    printf("A after toggling third  bit %b ",(a ^ 0x4));
    
    //Q2: Given an integer x, write a C function that clears (sets to 0) the 4th bit from the right. Provide both the theoretical explanation and the code.
    printf("\nA is %b  ",a);
    printf("\nA after Clearing fourth bit  %b ",(a & 0xF7));
   
    //: How would you use bitwise operators to efficiently multiply a number by 4? Write the C code for this operation.   
    printf(" A is %b %d ",a,a);
    printf("A after multiply by 4 %b %d",(a <<2),(a <<2));

    return 0;
}
