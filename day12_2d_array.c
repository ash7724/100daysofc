// 2d ARRAY USING Malloc    
#include <stdio.h>
#include <stdlib.h>

int main() {
    int row=3, col=4;
    
    int * arr= malloc((row*col) * sizeof(int));
    
    // Loading 2D Array
    for (int i=0;i< row*col;i++){
        arr[i]=i;
    }    
    
    printf("\n Array elemets are \n");
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",arr[i*col+j]);
        }
        printf("\n");
    }
   
   free(arr);
    return 0;
}
