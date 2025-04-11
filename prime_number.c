// Online C compiler to run C program online
//Write a program in C to check given number is prime or nt 
 #include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    int num,flag=0;
    printf("\n Enter a number to check");
    scanf("%d",&num);
    printf("\n The number is a=%d",num);
    for (int i=2; i<num;i++) 
    {   if( num%i ==0) {
          flag++;
          break;
    }
    }
     printf("\n The number flag=%d ",flag);
    if (flag !=0) 
      printf("\n The number %d is not prime",num);
    else 
      printf("\n The number %d is a prime number",num);


    return 0;
}
