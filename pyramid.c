//Program to print * pyramid
#include <stdio.h>

int main() {
    // Write C code here
    int len,i,j,front,back;
    char c;

    printf("\n Enter the length of the pyramid ");
    scanf("%d",&len);
    
    front=back=len-1;
    for (i=0;i<=len-1;i++) //for rows
    {
        for (j=0;j<=(2*len)-1;j++)
        {
            if(j>=front  && j<= back)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        back++;
        front--;
        
    }

}
