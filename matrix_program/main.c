#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function  for generate a random real number between 0 and 1
double randomReal() {
    return (double)rand() / RAND_MAX;
}

// Function for  initialize the matrix M with random values
void initialize_matrix(int n, double M[][n]) {
    for (int i = 0; i < n; i++) {
        double sum = 0.0;
        for (int j = 0; j < n; j++) {
            M[i][j] = randomReal();
            sum += M[i][j];
        }
        // Normalize the row to ensure the sum is 1
        for (int j = 0; j < n; j++) {
            M[i][j] /= sum;
        }
    }
}

// Function to print a matrix
void print_matrix(int n, double matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform matrix multiplication: result = A * B
void matrix_multiplication(int n, double A[][n], double B[], double result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = 0.0;
        for (int j = 0; j < n; j++) {
            result[i] += A[i][j] * B[j];
        }
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int n, p;

    // Get the size of the matrix and input p
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter the value of p: ");
    scanf("%d", &p);

    // Check if the value of p is valid
    if (p < 0) {
        printf("Invalid value of p. Please enter a non-negative integer.\n");
        return 1;
    }

    //matrix M with random values
    double M[n][n];
    initialize_matrix(n, M);

    printf("Matrix M:\n");
    print_matrix(n, M);

    // Initializxing vector R with equal components
    double R[n];
    for (int i = 0; i < n; i++) {
        R[i] = 1.0 / n;
    }

    // Performing the matrix multiplication R'R = (MM^{pp})R'
    for (int i = 0; i < p; i++) {
        double temp[n];
        matrix_multiplication(n, M, R, temp);
        matrix_multiplication(n, M, temp, R);
    }

    // Print the final result R'
    printf("\nFinal Result R':\n");
    for (int i = 0; i < n; i++) {
        printf("%f\n", R[i]);
    }

    return 0;
}