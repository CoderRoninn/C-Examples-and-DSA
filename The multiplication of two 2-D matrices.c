#include <stdio.h>

int main(){
    
    int i , j , k , row1 , column1 , row2 , column2 ,total=0;
    printf("Enter the sizes of first matrix: \n");
    scanf("%d%d" , &row1 , &column1);
    printf("Enter the sizes of second matrix: \n");
    scanf("%d%d" , &row2 , &column2);

    int matrix1[row1][column1];
    int matrix2[row2][column2];
    int result[row1][column2];

    if( column1 != row2 )
      {
       printf("Error:");
      }

    else{

    for(i=0;i<row1;i++)
       {
        for(j=0;j<column1;j++)
           {
            printf("Enter the element in %d. row %d. column in first array: \n" , i+1 , j+1);
            scanf("%d" , &matrix1[i][j]);
           }
       }

    for(i=0;i<row2;i++)
       {
        for(j=0;j<column2;j++)
           {
            printf("Enter the element in %d. row %d. column in second array: \n" , i+1 , j+1);
            scanf("%d" , &matrix2[i][j]);
           }
       }

    for(i=0;i<row1;i++)
       {
        for(j=0;j<column2;j++)
           {
            for(k=0;k<row2;k++)
               {
                total += matrix1[i][k] * matrix2[k][j];
               }
            result[i][j] = total;
            total = 0;   
           }
       }

    printf("The multiplication of two 2-D arrays is: \n");

    for(i=0;i<row1;i++)
       {
        for(j=0;j<column2;j++)
           {
            printf("%d " , result[i][j]);
           }
        printf("\n");   
       }     
    }  

return 0;}