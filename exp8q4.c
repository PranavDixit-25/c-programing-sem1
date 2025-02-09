#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("pranav 590014418\n");
    
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    int matrix1[m][n];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Error! Number of columns of the first matrix should be equal to the number of rows of the second matrix.\n");
        return -1;
    }
    int matrix2[p][q];

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int result[m][q];
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resulting matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

