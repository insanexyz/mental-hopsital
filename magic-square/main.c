#include <stdio.h>

int main(void)
{
    int n = 0; 

    printf("This program creates a magic square of specified size.\n");
    printf("The size must be an odd number betwee 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    // Ensure size is odd and within valid range
    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Invalid input. Size must be an odd number between 1 and 99.\n");
        return 1;
    }

    int arr[n][n];
    // Initialize array with zeros
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            arr[i][j] = 0;
    
    // Starting positions
    int row = 0;
    int col = n / 2; // To fill 1 at middle of first row
    int next_row = row;
    int next_col = col;


    // Fill magic square array
    for (int i=0; i<n*n; i++)
    {
        
        arr[row][col] = i+1;

        next_row = row-1; // Move one row up
        next_col = col+1; // Move one col right

        // Boundary checking
        if (next_row < 0)
            next_row = n-1;
        if (next_col >= n)
            next_col = 0;

        // Check if new pos is empty or not
        if (arr[next_row][next_col] != 0)
        {
            // Insert below the previous pos
            next_row = row+1;
            if (next_row >= n)
                next_row = 0;
            next_col = col;
        }

        // Update row and col
        row = next_row;
        col = next_col;

    }

    
    // Print magic square array
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }


    return 0;
}
