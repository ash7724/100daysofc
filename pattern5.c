// Program to print 
/*
     5 4 3 2 1
1 ||         *  
2 ||       * *
3 ||     * * *
4 ||   * * * *
5 || * * * * *

*/
#include <stdio.h>

int main() {
    // Write C code here
    int len,i,j;
    char c;

    printf("\n Enter the length of the diagram ");
    scanf("%d",&len);
    
    for (i=0;i<=len-1;i++) //for rows
    {
        for (j=len-1;j>=0;j--)
        {
            if (j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
} 
