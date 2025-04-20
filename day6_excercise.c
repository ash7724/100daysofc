
// Part f Excercise on https://www.programiz.com/c-programming/examples
#include<stdio.h>

void menu(int choice);
void display();
int factorial(int);
int main() 
{ 
  char ch;
  int choice;
  float reml;
  
  display();
  printf("\n Enter you Choice");
  scanf("%d",&choice);
  if( (choice <'5' && choice >'9') && (choice !='A' || choice !='B' || choice !='C')){
    printf("\n Incorrect Choice enter again");
  }
  else{
    menu(choice);
 }
}
void display(){
  printf("\n12. C Program to Find the Largest Number Among Three Numbers");
  printf("\n14. C Program to Check Leap Year");
  printf("\n13. C Program to Find the Roots of a Quadratic Equation");
  printf("\n15. C Program to Check Whether a Number is Positive or Negative");
  printf("\n16. C Program to Check Whether a Character is an Alphabet or not");
  printf("\n17. C Program to Calculate the Sum of Natural Numbers ");
  printf("\n18. C Program to Find Factorial of a Number ");    
}
void menu(int choice){
  int var1,var2,var3,sum;
  char ch;
  int facto;
  signed int num;
  int temp,rem,quo;
  switch(choice) {

    case 12: 
        //12 C Program to Find the Largest Number Among Three Numbers
        printf("\n Enter a number  ");
        scanf("%d",&var1);
        printf("\n Enter second number  ");
        scanf("%d",&var2);
        printf("\n Enter third number  ");
        scanf("%d",&var3);
        if(var1>var2 && var2>var3)
            printf("\n %d Is biggest among three %d,%d,%d  ",var1,var1,var2,var3);
        else  if(var2>var1  && var2>var3) 
            printf("\n %d Is biggest among three %d,%d,%d  ",var2,var1,var2,var3);
        else  if(var3>var1  && var3>var2) 
            printf("\n %d Is biggest among three %d,%d,%d  ",var3,var1,var2,var3);        
            
    case 14:   
        //5. C Program to Find ASCII Value of a Character
        printf("\n Enter a Year to check  ");
        scanf(" %d",&var1);
        if(var1%4==0)
            printf("\n Year %d is a Leap Year  ",var1);
        else
            printf("\n Year %d is not a Leap Year  ",var1);
        break;

    case 15:
        //7. C Program to Compute Quotient and Remainder
        printf("\n Enter a number  ");
        scanf("%d",&num);
        if(num>0)
            printf("\n Number %d is positive ",num);
        else  if(num<0)
            printf("\n Number %d is negative ",num);
        else 
            printf("\n Number %d is 0 ",num);
        break;

    case 16: 
        //C Program to Check Whether a Character is an Alphabet or not");
        printf("\nEnter a character: ");
        scanf(" %c", &ch);  // Note the space before %c
    
        printf("\nEntered character is: %c\n", ch);
        //printf("\n ASCII value of  character is %d  ",ch);
        if((ch >='A' && ch<='Z') ||  (ch >='a' && ch<='z'))
            printf("\n character %c is an Aphabet",ch);
        else
            printf("\n character %c is not an Aphabet",ch);
        break;

    case 17: 
    //C Program to Calculate the Sum of Natural Numbers
        printf("\n Enter a length of calculation of Natural number  ");
        scanf("%d",&var1);
        sum=0;
        for(int i=1;i<=var1;i++){
            sum +=i;
        }
        printf("\n Sum of first %d natural numbers are %d",sum );
        
    case 18: 
    //C Program to Find Factorial of a Number
        printf("\n Enter a number for factorial  ");
        scanf("%d",&var1);
        facto=factorial(var1);
        printf("\n Factorial of %d is %d ",facto);
        
    }
}

int factorial(int num) {
    int fact=1;
    for (int i=1;i<=num;i++){
        fact=fact*i;
    }
    //while(num>1){
    //  fact= factorial(num-1);
    //}
    return fact;
}
