// Day3 
#include <stdio.h>

int main() {
    //Check if character is alphabet, digit, or special character
    char ch;
    printf("Enter a character");
    //ch=getchar();
    scanf("%c",&ch);

    if ((ch >='A' && ch<='Z') || (ch >='a' && ch<='z')){
        printf("%c is a Alphabet ",ch);
        if((ch=='a' || ch=='e' ||ch=='i' || ch=='o'|| ch=='u') || (ch=='A' || ch=='E' ||ch=='I' || ch=='O'|| ch=='U')  )
           printf(" %c is a Vowel  ",ch);
        else 
           printf(" %c is a consonent  ",ch);

    }

    else if (ch >='0' && ch<='9') 
        printf("%c is a Digit ",ch);
    else     
        printf(" %c is a Special Character ",ch);
    return 0;
}
