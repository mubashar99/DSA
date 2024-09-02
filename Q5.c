/*Mr. John is playing the game Subway Surfers. The game has a
total of five treasures with different weights, that he needs to
collect. Write a C program to count the total number of weights
he collected from the treasures during the game.*/
#include <stdio.h>

int main() {
    // Assume the weights of the five treasures
    int weight1 = 10;
    int weight2 = 15;
    int weight3 = 8;
    int weight4 = 12;
    int weight5 = 20;

    // Calculate the total weight
    int totalWeight = weight1 + weight2 + weight3 + weight4 + weight5;

    printf("Total weight collected: %d\n", totalWeight);

    return 0;
}
