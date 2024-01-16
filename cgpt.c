#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0) {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
