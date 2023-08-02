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
    int len,ht,i,j;
    char c;

    printf("\n Enter the length of the diagram & height ");
    scanf("%d %d",&len,&ht);
    printf("\n Length=%d and Height =%d \n",len,ht);

    for (i=1;i<=ht;i++) //for rows
    {
        for (j=1;j<=len;j++)
        {
            if (i==1 || i==len)
                printf("=");
            else if (j==1 || j==len)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
        
    }
} 
