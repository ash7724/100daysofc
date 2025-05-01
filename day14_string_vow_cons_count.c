//C Program to Count the Number of Vowels, Consonants and so on
//C Program to Remove all Characters in a String Except Alphabets

#include <stdio.h>
void char_count ( const char *s);

int main() {
    // Write C code here
    char str[100]={};
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    printf("The String is %s",str);
    char_count ( str);

    return 0;
}

void char_count ( const char *s){
    int vowels=0;
    int conson=0;
    int digit=0;
    int white_spaces=0;
    int i=0;
    int len=0;
    while(*(s+i)!='\0'){
        if((*(s+i) >='A' && *(s+i) <='Z') || (*(s+i) >='a' && *(s+i) <='z')){
            if( ( (*(s+i) =='A' || *(s+i) =='E') || (*(s+i) =='I' || *(s+i) =='O') || *(s+i) =='U' || *(s+i) =='a' || *(s+i) =='e') || (*(s+i) =='i' || *(s+i) =='o') || *(s+i) =='u')
               vowels++;
            else
               conson++;
        }
        else if (*(s+i) >='0' && *(s+i) <='9'){
            digit++;
        }
        else if(*(s+i)==' ')
            white_spaces++;
               
        len++;
        i++;
    }
     printf("\n The String len is %d",len);
     printf("\n The Vowel count is  %d",vowels);
     printf("\n The Consonent count is  %d",conson);
     printf("\n The digit count is  %d",digit);
     printf("\n The white spaces count is  %d",white_spaces);
   //int vowels=0;

}
