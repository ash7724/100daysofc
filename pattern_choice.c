//Day 4: Patterns - Part 1
#include <stdio.h>

int main() {
    // Write C code here
    int len;
    char choice;
    
    printf("1  Print a square of stars \n");
    printf("2. Print a Right-angled triangle pattern \n");
    printf("3. Print a Inverted triangle pattern \n");
    printf("4. Print a Left half -Pyramid Pattern \n");
    printf("5. Print a Left half -Pyramid Pattern \n");
    printf("6. Print a Inverted Left half -Pyramid Pattern \n");

    printf("Enter your choice  \n");
    choice=getchar();
    printf(" Your choice is %c \n",choice);
    switch(choice) {

        case '1'://1. Print a square of stars
         printf("1  Print a square of stars \n");
         printf("Enter size of square of stars \n");
         scanf("%d",&len);
         printf("size of square of stars %d\n",len);
         
         for(int i=0;i<len;i++){  //For rows
             for(int j=0;j<len;j++){ //Fr columns
                 printf("* ");
             }
             printf("\n");
         }
         break;
      
        case '2': 
        //2. Right-angled triangle pattern
        printf("Enter size of lenth of triangle of stars \n");
        scanf("%d",&len);
        printf("size of square of stars %d\n",len);
        for(int i=0;i<len;i++){  //For rows
            for(int j=0;j<=i;j++){ //Fr columns
                printf("* ");
            }
            printf("\n");
        }
        break;
 
        case '3': 
        //2. Right-angled triangle pattern
        printf("Enter size of lenth of triangle of stars \n");
        scanf("%d",&len);
        printf("size of square of stars %d\n",len);
        for(int i=0;i<len;i++){  //For rows
            for(int j=0;j<len-i;j++){ //Fr columns
                printf("* ");
            }
            printf("\n");
        }
        break;        

        case '4': 
        //4. Pyramid Pattern
        printf("Enter odd number as size of height of pyramid of stars \n");
        scanf("%d",&len);
        printf("size of square of stars %d\n",len);
        for(int i=len-1;i>=0;i--){  //For rows
            for(int j=0 ;j<len;j++){ //Fr columns
                if(j=(i/2))
                  printf("*");
                else
                  printf(" ");

            }
            printf("\n");
        }
        break;  
 

        case '5': 
        //5. Left half -Pyramid Pattern
        printf("Enter size of lenth of pyramid of stars \n");
        scanf("%d",&len);
        printf("size of square of stars %d\n",len);
        for(int i=len-1;i>=0;i--){  //For rows
            for(int j=0;j<len;j++){ //Fr columns
                if(j>=i )
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");
        }
        break;  

        case '6': 
        //Print a Inverted Left half -Pyramid Pattern
        printf("Enter size of lenth of pyramid of stars \n");
        scanf("%d",&len);
        printf("size of square of stars %d\n",len);
        for(int i=0;i<len;i++){  //For rows
            for(int j=0;j<len;j++){ //Fr columns
                if(j>=i )
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");
        }
        break;      
    }
    return 0;
}
