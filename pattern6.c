// Program to print 
/*
******************************* 
*                             *
*                             *  
*                             *
*******************************

*/
#include <stdio.h>

int main() {
    // Write C code here
    int len,i,j;
    char c;

    printf("\n Enter the length of the diagram ");
    scanf("%d",&len);
    
    for (i=1;i<=5;i++) //for rows
    {
        for (j=1;j<=len;j++)
        {
            if (i==1 || i==5)
                printf("*");
            else if (j==1 || j==len)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        
    }
} 
