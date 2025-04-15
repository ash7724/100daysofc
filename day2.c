// Online C compiler to run C program online
//Day2 

#include <stdio.h>

int main() {
    // Write C code here
    signed int num;
    int year,num2;
    printf("Day2 Practise examples");
    //1 Check if number is positive, negative, or zero
    printf("\n Enter a number to check positive or negative ");
    scanf("%d",&num);
    printf("\n a number is %d",num);
    if(num>0)
        printf("\n a number  %d is positive",num);
    else if (num < 0)
        printf("\n a number  %d is negative",num);
    else
         printf("\n a number  %d is zero",num);
         
    //2. Check if year is a leap year
    printf("\n Enter a year to check");
    scanf("%d",&year);
    if(year%4==0) 
        printf("\n  year  %d is Leap Year",year);
    else 
        printf("\n year  %d is not a leap year",year);

    //Check if number is divisible by both 3 and 5
    printf("\n Enter a number to check");
    scanf("%d",&num2);
    if(num2%3==0  && num2%5==0)
        printf("\n a number  %d is divisible by both 5 and 3",num2);
    else if(num2%3==0)
        printf("\n a number  %d is divisible by 3",num2);
    else if(num2%5==0)
        printf("\n a number  %d is divisible by 5",num2);   
    else
        printf("\n a number  %d is nt divisible by both 5 and 3",num2); 
    return 0;
}
