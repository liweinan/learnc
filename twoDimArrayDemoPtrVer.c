/* Program: twoDimArrayDemoPtrVer.c */
#include <stdio.h>
#define ROWS 4
#define COLS 3

void array_of_arrays_ver(int arr[][COLS]); /* prototype */
void ptr_to_array_ver(int (*arr)[COLS]); /* prototype */

int main ()
{
    // declare 4x3 array
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9},
                              {10, 11, 12}};
    printf("Printing Array Elements by Array of Arrays Version Function: \n");
    array_of_arrays_ver(matrix);
    printf("Printing Array Elements by Pointer to Array Version Function: \n");
    ptr_to_array_ver(matrix);
    return 0;
}

void array_of_arrays_ver(int arr[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}


void ptr_to_array_ver(int (*arr)[COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d\t", (*arr)[j]);
        }
        arr++;
        printf("\n");
    }
}