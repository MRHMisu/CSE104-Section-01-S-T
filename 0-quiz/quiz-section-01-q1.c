#include <stdio.h>

int main()
{

    char input;
    scanf("%c", &input);
    if (input >= '0' && input <= '9')
        printf("Digit\n");
    else if ((input >= 'a' && input <= 'z')|| (input >= 'A' && input <= 'Z') )
        printf("Alphabet\n");
    else
        printf("Non-Digit/Non-Alphabet\n");

    return 0;
}
