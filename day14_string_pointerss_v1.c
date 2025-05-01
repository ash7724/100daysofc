//C Program to Count the Number of Vowels, Consonants and so on
#include <stdio.h>

int main() {

 char *names[] = {"Miller","Jones","Anderson"};
 printf("%c\n",*(*(names+1)+2));
 printf("%c\n",names[1][2]);
 
 printf("%c\n",*(*(names+0)+2));
 printf("%c\n",names[0][2]);
 
 char *titles[] = {"A Tale of Two Cities",
 "Wuthering Heights","Don Quixote",
 "Odyssey","Moby-Dick","Hamlet",
 "Gulliver's Travels"};
 
 char **bestBooks[3];
 char **englishBooks[4];
 printf("\n %s titles",*(titles+1));    // Wuthering Heights titles
 printf("\n %s titles",*(titles+1)+1);  // uthering Heights titles
 printf("\n %s titles",*(titles+1)+2);  // thering Heights titles
 printf("\n %s titles",*(titles));      //  A Tale of Two Cities titles
 printf("\n %s titles",*(titles)+1);    // Tale of Two Cities titles
 printf("\n %s titles",*(titles)+2);    // Tale of Two Cities titles
 printf("\n %s titles",*(titles)+3);    // ale of Two Cities titles



 bestBooks[0] = &titles[0];
 englishBooks[0] = &titles[4];
 bestBooks[1] = &titles[1];
 
 printf("\n %s bestBooks",**bestBooks);
 printf("\n %s englishBooks",**englishBooks);
    return 0;
}
