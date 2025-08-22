#include <stdio.h>

int main()
{
    int matchsticks = 21;
    int user, computer;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules:\n");
    printf("1. There are 21 matchsticks.\n");
    printf("2. You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("3. The player forced to pick the last matchstick loses.\n");

    while (matchsticks > 1)
        {

        printf("Matchsticks left: %d\n", matchsticks);
        printf("Your turn: Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user);


        if (user< 1 || user > 4)
            {
            printf("Invalid input! You must pick between 1 and 4 matchsticks.\n");
            continue;
        }


        matchsticks -= user;


        if (matchsticks == 1)
            {
            printf("Only one matchstick left. You are forced to pick it.\n");
            printf("You lost! Computer wins.\n");
            break;
        }


        computer = 5 - user;
        printf("Computer picks %d matchstick.\n", computer);
        matchsticks -= computer;


        if (matchsticks == 1)
            {
            printf("Only one matchstick left. Computer is forced to pick it.\n");
            printf("Computer lost! You win.\n");
            break;
        }
    }

    return 0;
}
