// Program to print 
/*

*
* *
* * *
* * * *
* * * * *

*/
#include <stdio.h>

int main() {
    // Write C code here
    int len,i,j,front,back;
    char c;

    printf("\n Enter the length of the diagram ");
    scanf("%d",&len);
    

    for (i=0;i<=len-1;i++) //for rows
    {
        for (j=0;j<=len-1;j++)
        {
            if (j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
}    
