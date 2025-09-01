#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("Quiz Time!\n");

    printf("Q1: What is the capital of France?\n");
    printf("a) Paris\nb) London\nc) Rome\n");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') score++;

    printf("Q2: 5 + 3 = ?\n");
    printf("a) 6\nb) 8\nc) 10\n");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') score++;

    printf("Your Score: %d/2\n", score);

    return 0;
}
