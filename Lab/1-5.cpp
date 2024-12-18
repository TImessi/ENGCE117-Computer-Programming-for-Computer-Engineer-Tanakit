#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int **value, int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , col ) ;

    // Handle invalid dimensions
    if ( *row <= 0 || *col <= 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return ;
    }

    // Dynamically allocate memory for the matrix
    *value = (int*) malloc((*row) * (*col) * sizeof(int)) ;

    // Handle allocation failure
    if (*value == NULL) {
        printf("Memory allocation failed.\n") ;
        return ;
    }

    // Input the elements into the matrix
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d" , &( *value )[ i * (*col) + j ] );
        }
    }

    // Output the matrix
    printf( "Matrix (%dx%d):\n" , *row, *col );
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d " , ( *value )[ i * (*col) + j ]) ;
        }
        printf( "\n" ) ;
    }
}

int main() {
    int *data = NULL, m, n;
    GetMatrix( &data, &m, &n );

    // Check if memory was allocated and free it
    if ( data != NULL ) {
        free( data ) ;
    }

    return 0 ;
}
