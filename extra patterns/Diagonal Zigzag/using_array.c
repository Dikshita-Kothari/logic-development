#include <stdio.h>

int main() {
    int n = 5;
    int arr[10][10] = {0};
    int val = n*(n+1)/2; // 15

    // Fill main diagonal
    for (int i = 1; i <= n; i++)
        arr[i][i] = val--;

    // Fill the rest of diagonals
    for (int d = 1; d < n; d++) {
        if (d % 2 == 1) {
            // odd offset → bottom to top
            for (int r = n; r > d; r--)
                arr[r][r - d] = val--;
        } else {
            // even offset → top to bottom
            for (int r = d + 1; r <= n; r++)
                arr[r][r - d] = val--;
        }
    }

    // print pattern
    for (int i = 1; i <= n; i++) {
        for (int s = n; s > i; s--)
            printf("   ");
        for (int j = 1; j <= i; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}