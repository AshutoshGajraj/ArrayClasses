#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows:");
    scanf("%d", &n);

    printf("Enter number of columns:");
    scanf("%d", &m);


    int a[n][m], transpose[m][n];

    printf("Enter elements of the matrix:\n");
    for(int i =0; i<n; ++i)
        for(int j = 0; j<m; ++j){
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    //Displaying the matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i<n; ++i){
        for(int j =0; j<m; ++j){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }



    // Transpose of the matrix
    for(int i = 0 ; i <m; ++i)
        for( int j = 0; j< n; ++j){
            transpose[i][j]= a[j][i];
        }


    // Displaying transpose of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i = 0; i<m; ++i){
        for(int j = 0; j<n; ++j){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
        

    return 0;
}