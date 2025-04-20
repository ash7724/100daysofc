// Part f Excercise on https://www.programiz.com/c-programming/examples
#include<stdio.h>
int main() 
{ 
  int var1,var2,sum;
  float fn1,fn2;
  //1. To Print Hello World
  printf("\n Hello World");

 //2. C Program to Print an Integer (Entered by the User)
  printf("\n Enter a number ");
  scanf("%d",&var1);
  printf("\n Entered  number is %d",var1);

  printf("\n Enter a number ");
  scanf("%d",&var2);
  printf("\n Entered  number is %d",var2);  
  //3. C Program to Add Two Integers
  printf("\n Sum of two number entered is %d+%d=%d",var1,var2,(var1+var2));
  
  //4. C Program to Multiply Two Floating-Point Numbers
  printf("\n Enter a floating point number ");
  scanf("%f",&fn1);
  printf("\n Entered  number is %f",fn1);

  printf("\n Enter another floating point number ");
  scanf("%f",&fn2);
  printf("\n Entered  number is %f",fn2);   
  
  printf("\n Multiplication of two number entered is %f+%f=%f",fn1,fn2,(fn1*fn2));
}
