#include <stdio.h>

int valueAt(int r, int c, int n) {
    int d = r - c;                  // diagonal index
    int used = d * n - d * (d - 1) / 2;
    int N = n * (n + 1) / 2;
    int start = N - used;
    int pos;

    if (d % 2 == 0)
        pos = r - d;                // downward
    else
        pos = n - r + 1;            // upward

    return start - (pos - 1);
}

int main() {
    int n = 5;
    for (int r = 1; r <= n; r++) {
        // for (int s = n; s > r; s--) printf("   ");
        for (int c = 1; c <= r; c++)
            printf("%4d ", valueAt(r, c, n));
        printf("\n");
    }
    return 0;
}