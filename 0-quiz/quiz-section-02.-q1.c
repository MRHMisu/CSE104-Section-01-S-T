#include <stdio.h>

int main()
{
    char input;
    scanf("%c", &input);
    if(input=='a'|| input=='A'||input=='e'|| input=='E'
    ||input=='i'|| input=='I'||input=='o'|| input=='O'||input=='u'|| input=='U'){
        printf("Requires Article An");

    }else{
        printf("Requires Article A");
    }
   
    return 0;
}
