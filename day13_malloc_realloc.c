#include <stdio.h>
#include <stdlib.h>

int main() {
    static int a[10]={1,4,2,1,4,5,4};
    int c;
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);    
    
    int * arr1;
    char * arr2;
    /* 
    Using malloc to allot 10 elements of int type
    */
    arr1=malloc(10* sizeof (int));
    for (int i=0;i<10;i++){
        printf("Enter %dth element ",i);    
        scanf("%d",arr1+i);
    }
    for (int i=0;i<10;i++){
        printf("%d ",*(arr1+i));
    }    
    /* 
    Using realloc to increase the size by 10 elements of int type
    */
    arr1=realloc(arr1,20* sizeof (int));
    for (int i=10;i<20;i++){
        printf("Enter %dth element ",i);    
        scanf("%d",arr1+i);
    }
    for (int i=0;i<20;i++){
        printf("%d ",*(arr1+i));
    }    
    /* 
    Using free to de-allot memory
    */    
    free(arr1);
    
    return 0;
}
