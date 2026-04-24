#include <stdio.h>

#define MAX 10

void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int i, j, sum[MAX][MAX];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Result (Addition):\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int a[MAX][MAX], int r, int c) {
    int i, j, k, min, col, found = 0;

    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k = 0; k < r; k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point Found\n");
}

void multiplyMatrices(int a[MAX][MAX], int r, int c) {
    int i, j, k, result[MAX][MAX] = {0};

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            for(k = 0; k < c; k++) {
                result[i][j] += a[i][k] * a[k][j];
            }
        }
    }

    printf("Matrix Square:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int determinant(int a[MAX][MAX], int n) {
    int det = 0;
    if(n == 1)
        return a[0][0];

    int temp[MAX][MAX], sign = 1;

    for(int f = 0; f < n; f++) {
        int subi = 0;
        for(int i = 1; i < n; i++) {
            int subj = 0;
            for(int j = 0; j < n; j++) {
                if(j == f) continue;
                temp[subi][subj++] = a[i][j];
            }
            subi++;
        }
        det += sign * a[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int r, c, i, j, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nMenu:\n");
    printf("1. Addition\n2. Saddle Point\n3. Matrix Square\n4. Determinant (Square Matrix Only)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Matrix B:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &b[i][j]);
            addMatrices(a, b, r, c);
            break;

        case 2:
            saddlePoint(a, r, c);
            break;

        case 3:
            multiplyMatrices(a, r, c);
            break;

        case 4:
            if(r == c)
                printf("Determinant = %d\n", determinant(a, r));
            else
                printf("Matrix must be square!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
