
#include <stdio.h>
#include <stdlib.h> // Include this to use exit()

int main() {
    int numTomatoes;
    int avgWeight;

    printf("How many tomatoes do you have in the bag?: ");
    if (scanf("%d", &numTomatoes) != 1) {
        printf("Invalid input. Please enter a number.\n");
        exit(1);
    }

    if (numTomatoes > 6) {
        printf("You have more tomatoes than expected.\n");
        exit(1);
    } else {
        printf("You have %d tomatoes in the bag.\n", numTomatoes);
    }

    printf("What's the average weight of a tomato in grams?: ");
    if (scanf("%d", &avgWeight) != 1) {
        printf("Invalid input. Please enter a number.\n");
        exit(1);
    }

    int totalWeight = avgWeight * numTomatoes;

    if (totalWeight < 450 || totalWeight > 900) {
        printf("Error! Total weight of tomatoes is out of the expected range.\n");
        exit(1);
    } else {
        printf("The total weight of the tomatoes is %d grams.\n", totalWeight);
    }

    // If you are on Windows and you want to pause the execution, use this:
    // system("PAUSE");

    return 0; // Indicate successful completion.
}
