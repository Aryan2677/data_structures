#include <stdio.h>
int rotatematrix(int m, int n, int mat[m][n])
{
    int row = 0, col = 0;
    int prev, curr;

    int R=m,C=n;
    while (row < m && col < n)
    {

        if (row + 1 == m || col + 1 == n)
            break;


        prev = mat[row + 1][col];


        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;


        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;


        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;


        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }

    return mat;
}
int main()
{
        int n;
        scanf("%d",&n);
    int arr[n][n];
  for(int i=0;i<n;i++)
  {

          for(int j=0;j<n;j++)
          {
                  scanf("%d",&arr[i][j]);
          }
  }
  int *ptr;
  ptr=arr;
  int rot;
  scanf("%d",&rot);
 for(int k=0;k<rot;k++)
    ptr= rotatematrix(n, n, arr);
for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++){
                printf("%d ",arr[i][j]);
        }
        printf("\n");
}
    return 0;
}
