#include <stdio.h>
#include <string.h>

int main()
{

    char present_address[80];
    char parmanenet_address[80];

    printf("Give your parmanent address: ");
    gets(parmanenet_address);

    int user_choice;
    printf("Is your present address same as parmanent address ?(If yes press 1 otherwise 0): ");
    scanf("%d", &user_choice);
    if (user_choice)
    {
        // copy parmanent address to present address
        strcpy(present_address, parmanenet_address);
    }
    else
    {
        printf("Give your present address: \n");
        gets(present_address);
    }

    printf(" Your given parmanent address: %s\n", parmanenet_address);
    printf("Your given present address: %s",present_address);

    return 0;
}
