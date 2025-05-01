//C Program to Find the Frequency of Characters in a String
//C function to check string is pallindrome or not
//C Program to check  Occurence of a characterin string

#include <stdio.h>
void is_palindrome(const char *s) ;
void check_freq (const char *s,char ch) ;

int main() {
    char str[100]={};
    char ch,choice;
    int len=0,i=0;
    printf("\n Enter a string");
    fgets(str, sizeof(str),stdin);
    //printf("\n String is  %s ",str);
    printf("\n Enter 1 to check if String is palindrome or not");
    printf("\n Enter 2 to check  Occurence of a characterin string");
    printf("\n Enter 3 to Find the element that occurs an odd number of times in the array");
    printf("\n Enter your choice");
    scanf(" %c",&choice);

    if( choice !='1' && choice!='2'&& choice!='3') {
        printf("\n Invalid choice. Enter your choice");
        scanf("%c",&choice);
    }
  
    switch (choice) {
        case '1': 
                printf("\n Check palindrom ");
                is_palindrome( str);
                break;

        case '2': 
                printf("\n Enter a character whose frequency has to checked  ");
                scanf(" %c",&ch);
                printf("\n Character is  %c ",ch);
                check_freq(str,ch);
                break;

        default:     check_freq(str,ch);
                break; 
    }
    return 0;
}

void check_freq (const char *str,char ch) {
    int i,len=0;
    for (i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            len++;
        }
    }

    printf("\n Ccharacter %c frequency is  %d",ch,len);
}

void is_palindrome(const char *s) {
    int len=0;
    char flag=0;
    for (int i=0;s[i]!='\0';i++){
        len++;
    }
    for (int i=0;i<len/2;i++){
        if (*(s+i) != *(s+len-2-i)){
            flag=1;
            break;
        }
    }
    if (flag==0) 
        printf("\n String is palindrome  %s ",s);
    else
        printf("\n String is not palindrome  %s ",s);
    
    //return 1;
}
