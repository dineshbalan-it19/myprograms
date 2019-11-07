#include <stdio.h>
int main()
{
int m, n, i, j, first[m][n], second[m][n],sum[i][j],sub[i][j];

 printf("Enter the number of rows and columns of matrix\n");
 scanf("%d%d", &m, &n);
 printf("Enter the elements of first matrix\n");

  for (i= 0; i < m; i++){
     for (j= 0; j < n; j++){
        scanf("%d", &first[i][j]);}
}
  printf("Enter the elements of second matrix\n");

  for (i= 0; i < m; i++)
{      for (j = 0 ; j < n; j++)
{        scanf("%d", &second[i][j]);
 }
} printf("Sum of entered matrices:\n");

  for (i = 0; i < m; i++) {
     for (j = 0 ; j < n; j++) {
        sum[i][j] = first[i][j] + second[i][j];
        printf("%d\t", sum[i][j]);
     }
     printf("\n");
  } printf("subtraction of entered matrices:\n");

  for (i = 0; i < m; i++) {
     for (j = 0 ; j < n; j++) {
        sub[i][j] = first[i][j] - second[i][j];
        printf("%d\t", sub[i][j]);
}
printf("\n");
}

  return 0;
}
