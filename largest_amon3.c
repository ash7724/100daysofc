//Find the largest number among the three numbers.
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("\n Enter First number");
    scanf("%d",&a);
    printf("\n Enter Second number");
    scanf("%d",&b);
    printf("\n Enter Third number");
    scanf("%d",&c);
    printf("\n a=%d  b=%d c=%d",a,b,c);
    
    if (a>b){
        if(a>c)
          printf("\n %d is the largest",a);
        else
          printf("\n %d is the largest",c);
    }
    else {
        if(b>c)
          printf("\n %d is the largest",b);
        else
          printf("\n %d is the largest",c);
    }
    return 0;
}
