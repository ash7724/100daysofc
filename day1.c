// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,rad;
    float area;
    char choice;
    //1. print Hello World
    printf("Hello World");

   //2. Take two input numbers and sum it print it
    printf("\n Enter Two number");
    scanf("%d %d",&a,&b);
    printf("\n Sum of two numbers %d+ %d = %d ",a,b,a+b);

    //3. Simple Calculator
    printf("\n Enter operation to perform ");
    scanf("%s",&choice);
    
    switch (choice){
        case'+':printf("\n Sum of two numbers %d+ %d = %d ",a,b,a+b);
        case '-':printf("\n Subsctraction of two numbers %d - %d = %d ",a,b,a-b);
        case '*':printf("\n Mult of two numbers %d * %d = %d ",a,b,a*b);
        case '/':printf("\n Division of two numbers %d / %d = %d ",a,b,a/b);
        
    }

    //4. Area of Circle
    printf("\n Enter radius of circle ");
    scanf("%d",&rad);
    printf("\n Area of Circle with Radius %d is %f ",rad,rad*rad*3.14);

   
    //5. Even or odd 
    if (a%2 ==0) {
     printf("\n The number %d is Even ",a);
    }
    else {
     printf("\n The number %d is Odd ",a);
    }
    return 0;
}
