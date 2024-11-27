#include <stdio.h>

int main() {
    // Declare variables for row and column indices
    int i, j;
    
    // Initialize a 5x5 matrix with characters
    char m[5][5] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'c', '9', '4', 'z', '8'},
        {'5', '6', 'p', 'n', '3'},
        {'2', '9', 't', 'm', 'k'}
    };

    // Print the entire matrix
    printf("La matrice est:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c\t", m[i][j]); // Print each element in the matrix
        }
        printf("\n"); // Newline after each row
    }

    // Print the matrix with elements from rows having even indices
    printf("\nLa matrice pair est:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            // Check if the row index 'i' is even
            if (i % 2 == 0) {
                printf("%c\t", m[i][j]); // Print the element if row index is even
            }
        }
        printf("\n"); // Newline after each row
    }

    // Print the matrix with elements from rows having odd indices
    printf("\nLa matrice impair est:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            // Check if the row index 'i' is odd
            if (i % 2 != 0) {
                printf("%c\t", m[i][j]); // Print the element if row index is odd
            }
        }
        printf("\n"); // Newline after each row
    }

    // Print the diagonals of the matrix
    printf("\nLes diagonales sont:\n");

    // Print the main diagonal (left-to-right diagonal)
    for (i = 0; i < 5; i++) {
        printf("\t%c\t", m[i][i]); // Main diagonal element
    }
    printf("\n");

    // Print the secondary diagonal (right-to-left diagonal)
    for (i = 0; i < 5; i++) {
        printf("\t%c\t", m[5 - 1 - i][i]); // Secondary diagonal element
    }
    printf("\n");

    return 0;
}
