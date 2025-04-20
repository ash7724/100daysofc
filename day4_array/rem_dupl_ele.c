// Prgram to delete duplicate element in the array
#include <stdio.h>
int dupl_array (int *arr, int len);
int main() {
    // Write C code here
    int var[]={1,3,5,5,7,989,7,3,2};
    int *var2=&var[0];
    int len_of_arr=sizeof(var)/sizeof(var[0]);
    printf("\n len of array %d",len_of_arr);
    int len= dupl_array(var2,len_of_arr);
    printf("\n len of modified array %d",len);

    return 0;
}

int dupl_array (int *arr, int len) {
    for (int i=0; i<len ; i++ ){
        for(int j=i+1;j<len+1;j++) {
            if(*(arr+i) ==*(arr+j)) {
                //printf("\n Duplicate Array elements%d  %d",arr[i],arr[j]);
                *(arr+j)=*(arr+j+1);
            }
        }
    }
    //i=0;
    for(int i=0; i<(sizeof(&arr[0]-arr));i++ ){
    //while(*arr!=0){
        printf("\n Modified   Array elements %d",*arr);
        *arr++;
    }
    
    return (sizeof(&arr[0]-arr));
}
