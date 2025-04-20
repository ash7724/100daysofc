#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    const int *p1 = &a;  //data is constant but pointer can be changed
    int * const p2 = &a; //pointer is constant but data can be changed
    const int * const p3 = &a; //pointer and data both are constant

    // Line A
    *p1 = 15;       // What happens here? --> error: assignment of read-only location '*p1'
    
    //Instead we can do this
    // Line B
    p1 = &b;        // What about this?



    // Line D
     p2 = &b;        // Any issue? error: assignment of read-only variable 'p2'

    // Instead we can do this 
    // Line C
    *p2 = 25;       // Is this okay?
    
    //p3 we cannot modify data or pointer 
    *p3 = 30;       // Legal?  //error: assignment of read-only location '*(const int *)p3'
    
    // Line F
    p3 = &b;        // Valid?  error: assignment of read-only variable 'p3'

    return 0;
}
