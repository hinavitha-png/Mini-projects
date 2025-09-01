#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int user, computer;

    printf("Enter 0 for Rock, 1 for Paper, 2 for Scissors: ");
    scanf("%d", &user);

    srand(time(0));
    computer = rand() % 3;

    printf("You chose: %s\n", choices[user]);
    printf("Computer chose: %s\n", choices[computer]);

    if (user == computer)
        printf("It's a tie!\n");
    else if ((user == 0 && computer == 2) || 
             (user == 1 && computer == 0) || 
             (user == 2 && computer == 1))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
