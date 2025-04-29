//C Program to Calculate Average Using Arrays
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code her
    int arr[15];
    //int *array= malloc ( num * sizeof(int));
    int sum=0;
    int *ptr =arr;
    int num;
    printf("\n Enter number of elements to array");
    scanf(" %d", &num);
    
    for (int i=0;i<num;i++){
        printf("\n Enter %dth  Elements of the array  ",i+1);
        scanf("%d",ptr);
        sum+=*ptr;
        *ptr++;
    }

    printf("\n Sum of  Elements of the array %d ",sum);

    return 0;
}
