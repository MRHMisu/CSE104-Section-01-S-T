#include <stdio.h>
#include <string.h>
int main()
{  
    char given_text[1000];
    gets(given_text);
    int text_length= strlen(given_text);
     // word_count=number os space +1
    int word_count=1;
    for(int i=0; i< text_length; i++){
        if(given_text[i]==' '){
            word_count++;
        }
    }
    printf("%d Words", word_count);
   
    return 0;
}