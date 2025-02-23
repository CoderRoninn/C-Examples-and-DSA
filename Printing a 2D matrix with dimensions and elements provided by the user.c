#include <stdio.h>

int main(){
    
    int i, j, row, column;

    printf("Enter the dimensions of the 2-D array:: \n");
    scanf("%d%d", &row, &column);

    int matrix[row][column];

    for(i=0; i<row; i++)
       {
        for(j=0; j<column; j++)
           {
            printf("Enter the element int %d. row %d. column: \n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
           }
       }

    printf("The elements are: \n");

    for(i=0; i<row; i++)
       {
        for(j=0; j<column; j++)
           {
            printf("%d ", matrix[i][j]);
           }
        printf("\n"); 
       }
 
return 0;}