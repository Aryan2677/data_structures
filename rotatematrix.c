#include<stdio.h>  
void rotatematrix(int m, int n, int mat[m][n]) 
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
  
 
    for (int i=0; i<R; i++) 
    { 
        for (int j=0; j<C; j++) 
          printf("%d", mat[i][j]); 
       printf("\n"); 
    }
printf("\n"); 
} 
  

int main() 
{ 
 int R=0,C=0;
    scanf("%d",&R);
    int a[R][R] ; 
  for(int i=0;i<R;i++){
for(int j=0;j<R;j++){
scanf("%d",&a[i][j]);
}
}
int k=0;
printf("Enter the no. of rotations");
scanf("%d",&k);
for(int i=0;i<k;i++){
  rotatematrix(R, R, a);
} 
    return 0; 
} 


