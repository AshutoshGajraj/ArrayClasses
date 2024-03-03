#include <stdio.h>
main(){
    int c[2][3] = {{1,2,3},{34,23,12}};

    for(int i = 0; i < 2; ++i){
            for( int j = 0; j < 3; ++j){

                printf("%d\n", c[i][j]);
            }
    }
}



// Program to create a two dimensional array with elements input by user
#include <stdio.h>
main(){
    int c[2][3];

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("c %d %d: ", i+1, j+1);
            scanf("%d", &c[i][j]);
        }
    }
    
    printf("The 2d array's elements are :\n");
    
    for(int i = 0; i< 2 ; ++i){
        for(int j =0; j< 3; ++j){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}


// Program to add two matrices using two dimensional array
#include <stdio.h>
main(){
    int a[2][4];
    int b[2][4];
    int result[2][4];

    // Creating first matrix
    for(int i = 0; i<2; ++i){
        for(int j =0; j<4; ++j){
            printf("Enter a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }


    // Creating second matrix
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<4 ; ++j){
            printf("Enter b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }


    // Adding matrices A and B
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<4; ++j){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    
    printf("The sum of the matrices are:\n");

    // Displaying the sum of the matrices
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<4; ++j){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
