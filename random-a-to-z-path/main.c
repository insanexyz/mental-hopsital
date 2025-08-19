#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

int main(void)
{
    char walk_arr[ROWS][COLS];
    int row = 0, col = 0;
    char fill = 'A';
    int direction;
    int num_of_steps = 0;


    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            walk_arr[i][j] = '.';
        }
    }
    
    srand(time(NULL));
    int next_row = row;
    int next_col = col;

    while (fill <= 'Z')
    {
        // Fill the path if its empty
        if (walk_arr[row][col] == '.')
        {

            walk_arr[row][col] = fill;
            fill++;
            num_of_steps++;
        }

        // Generate randomly 0-3
        direction = rand() % 4;
        if (direction == 0 && row > 0) next_row--;
        else if (direction == 1 && col < COLS-1) next_col++;
        else if (direction == 2 && row < ROWS-1) next_row++;
        else if (direction == 3 && col > 0) next_col--;
        
        // Check if next_row and next_col is empty
        if (walk_arr[next_row][next_col] == '.')
        {
            row = next_row;
            col = next_col;
        } 
        // Check if any surrounding possition is available, if not then break 
        else if ((row == 0      || walk_arr[row-1][col] != '.') && 
                 (col == COLS-1 || walk_arr[row][col+1] != '.') &&
                 (row == ROWS-1 || walk_arr[row+1][col] != '.') &&
                 (col == 0      || walk_arr[row][col-1] != '.')) break;
        else
        // If a surrounding pos is available but next_row and next_pos doesnt point to it, then revert back to prev value and check for new pos
        {
            next_row = row;
            next_col = col;
        }

    }

    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%c ", walk_arr[i][j]);
        }
        printf("\n");
    }
    printf("Steps: %d\n", num_of_steps);

}
