#include <stdio.h>

int main() {
    int vertical, horizontal;


    printf("Enter the size of table vertically: ");
    scanf("%d", &vertical);
    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontal);


    if (vertical <= 0 || horizontal <= 0) {
        printf("Invalid input! Sizes must be positive integers.\n");
        return 1;
    }

    printf("\nMultiplication Table (%d x %d):\n", vertical, horizontal);


    for (int i = 1; i <= vertical; i++) {
        for (int j = 1; j <= horizontal; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
