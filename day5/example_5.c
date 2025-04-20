
// Part f Excercise on https://www.programiz.com/c-programming/examples
#include<stdio.h>

void menu(char choice);
void display();

int main() 
{ 
  char ch,choice;
  float reml;
  
  display();
  printf("\n Enter you Choice");
  choice=getchar();
  if( (choice <'5' && choice >'9') && (choice !='A' || choice !='B' || choice !='C')){
    printf("\n Incorrect Choice enter again");
  }
  else{
    menu(choice);
 }
}
void display(){
  printf("\n5.  C Program to Find ASCII Value of a Character");
  printf("\n6.  C Program to Find the Size of int, float, double and char");
  printf("\n7.  C Program to Compute Quotient and Remainder");
  printf("\n8.  C Program to Demonstrate the Working of Keyword long");
  printf("\n9.  C Program to Swap Two Variables");
  printf("\nA. C Program to Check Whether a Number is Even or Odd ");
  printf("\nB. C Program to Check Whether a Character is a Vowel or Consonant ");    
}
void menu(char choice){
  int var1,var2,sum;
  char ch;
  int temp,rem,quo;
  switch(choice) {
    case '5':   
        //5. C Program to Find ASCII Value of a Character
        printf("\n Enter a caharacter  ");
        scanf(" %c",&ch);
        //printf("\n Entered character is %c  ",ch);
        printf("\n ASCII value of  character is %d  ",ch);
        break;
    case '6':
        //6. C Program to Find the Size of int, float, double and char
        printf("\n Size of Integer=%d ",sizeof(int));
        printf("\n Size of float=%d ",sizeof(float));
        printf("\n Size of double=%d ",sizeof(double));
        printf("\n Size of char=%d ",sizeof(char));
        break;

    case '7':
        //7. C Program to Compute Quotient and Remainder
        printf("\n Enter a number  ");
        scanf("%d",&var1);
        printf("\n Enter second number  ");
        scanf("%d",&var2);
        printf("\n Taking these two numbers fr division %d/%d  ",var1,var2);
        rem=var1%var2;
        quo=var1/var2;
        printf("\n Reaminder=%d and Qutient= %d for  %d/%d ",rem,quo,var1,var2);
        break;
      //8. Program to Demonstrate the Working of Keyword long
    case '9': 
        //9. C Program to Swap Two Variables
        printf("\n Enter a number  ");
        scanf("%d",&var1);
        printf("\n Enter second number  ");
        scanf("%d",&var2);
        temp=var1;
        var1=var2;
        var2=temp;
        printf("\n Swapped numbers %d,%d  ",var1,var2);
    
    case 'A': 
        //10. C Program to Check Whether a Number is Even or Odd
        printf("\n Enter a number  ");
        scanf("%d",&var1);
        if(var1%2==0)
            printf("\n Number %d is Even",var1);
        else
            printf("\n Number %d is odd",var1);
        break;
   //C Program to Check Whether a Character is a Vowel or Consonant
    case 'B': 
        printf("\nEnter a character: ");
        scanf(" %c", &ch);  // Note the space before %c
    
        printf("\nEntered character is: %c\n", ch);
        //printf("\n ASCII value of  character is %d  ",ch);
        if((ch >='A' && ch<='Z') ||  (ch >='a' && ch<='z')){
            if (ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' ||  ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' )
                printf("\n character %c is Vowel",ch);
            else
                printf("\n character %c is Consonent",ch);
        }
        else
            printf("\n character %c is not an alphabet",ch);
        break;
    }
    printf("\n Enter you Choice");
    choice=getchar();
    menu(choice);    
  }
