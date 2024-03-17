#include <stdio.h>
int main(){
    int m,n,p,q;

    printf("Enter the rows and column of 1st matrix:");
    scanf("%d %d", &m, &n);
    printf("Enter the rows and column of 2nd matrix:");
    scanf("%d%d", &p, &q);

    // Checking feasibility of matrix multiplication
    if (n!=p){
        printf("Multiplication of matrices not possible");
        return 0;
    }

    // Declaring the matrices
    int a[m][n], b[p][q], result[m][q];

    // Creating first matrix
    printf("Enter the elements of 1st matrix\n");
    for(int i = 0; i<m; ++i){
        for(int j = 0; j<n; ++j){
            printf("Enter a%d%d:", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Creating second matrix
    printf("Enter the elements of 2nd matrix\n");
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<q; ++j){
            printf("Enter b%d%d:", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying the matrices
    int r,l, c, sum;
    for(r = 0; r<m; ++r){
        l = 0;
        while(l<q){ 
            c = 0;
            sum = 0;
            while (c<p){
                sum = sum + (a[r][c])*(b[c][l]);
                c = c + 1;
            }
            result[r][l] = sum;
            l += 1;                        
        }
    }
    // Displaying the product of matrices
    printf("The product of the matrices is:\n");
    for(int i = 0; i<m; ++i){
        for(int j = 0; j<q; ++j){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }   


    return 0;


}