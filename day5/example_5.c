
// Part f Excercise on https://www.programiz.com/c-programming/examples
#include<stdio.h>
int main() 
{ 
  int var1,var2,sum;
  char ch;
  int temp,rem,quo;
  float reml;

  //5. C Program to Find ASCII Value of a Character
  printf("\n Enter a caharacter  ");
  scanf("%c",&ch);
  //printf("\n Entered character is %c  ",ch);
  printf("\n ASCII value of  character is %d  ",ch);

  //6. Python Program to Swap Two Variables
  printf("\n Enter a number  ");
  scanf("%d",&var1);
  printf("\n Enter second number  ");
  scanf("%d",&var2);
  temp=var1;
  var1=var2;
  var2=temp;
  printf("\n Swapped numbers %d,%d  ",var1,var2);

  //7. C Program to Compute Quotient and Remainder
  printf("\n Taking these two numbers fr division %d/%d  ",var1,var2);
  rem=var1%var2;
  quo=var1/var2;
  printf("\n Reaminder=%d and Qutient= %d for  %d/%d ",rem,quo,var1,var2);

  //8. C Program to Find the Size of int, float, double and char]
  printf("\n Size of Integer=%d ",sizeof(int));
  printf("\n Size of float=%d ",sizeof(float));
  printf("\n Size of double=%d ",sizeof(double));
  printf("\n Size of char=%d ",sizeof(char));
  
  // C Program to Demonstrate the Working of Keyword long  
}
