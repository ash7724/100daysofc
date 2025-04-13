//  use the formula oC=(5/9)(oF-32) to print the following table of Fahrenheit temperatures and their centigrade or Celsius equivalents
#include <stdio.h>

int main() {
    // Write C code here
    double degree;
    int fahr,limit;
    printf("Enter a Maximum  to convert Fahreinheit to Degrees: ");
    scanf("%d",&limit);
    for(fahr=0;fahr<=limit;fahr=fahr+20){
    printf("\nFahr= %d",fahr);
    degree= (double) 5/9 * fahr-32;
    printf("\nDegree of %d Fahreinheit is %f Degrees",fahr,degree);
    }
    return 0;
}
