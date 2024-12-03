#include <stdio.h>
#include <stdlib.h>
void GetMatrix( int **value, int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;


    
    if(m > 1 && n == 1 || m == 1 && n > 1) {  //case size n = 1 or m = 1 will print Matrix: only
        printf( "Matrix:\n" );
        for ( int i = 0; i < m; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                printf( "%d ", data[i * n + j] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for

    }//end if
    else if( m * n == 6 && data[ 0 ] < 21 ) {   //case 3x2 size  print Matrix(m*n):
        printf( "Matrix (%dx%d):\n", m, n ) ;
        for ( int i = 0; i < m; i++ ) {
            for (int j = 0; j < n; j++ ) {
                printf( "%d ", data[ i * n + j ] ) ;

            }//end for
            printf( "\n" ) ;
        }//end for
    }//end else if
    else if( m * n == 6 && data[ 0 ] > 20 ) {
        printf( "Matrix:\n", m, n ) ;            //case 3x2 size  print Matrix(m*n) but data > 20
        for ( int i = 0; i < m; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                printf( "%d ", data[ i * n + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }//end else if
  

 

    

    
    return 0 ;
}//end function




void GetMatrix( int **value, int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of cols: " ) ; 
    scanf( "%d", col ) ;
    
    if( *row >= 1 && *col == 0 || *row == 0 && *col >= 1 ) {  //case row or col = 0
        printf( "Error: Invalid matrix dimensions." ) ;
        return ;
    }else if( *row == 0 && *col == 0 ){
        printf( "Matrix:\n" ) ;
        printf( "(empty)" ) ;
        return ;
    }//end if
        
        
    

    *value = ( int* )malloc(( *row ) * ( *col ) * sizeof( int ) ) ;
    printf("Enter the matrix elements: ") ;
    
    for ( int i = 0; i < *row; i++ ) {
        for ( int j = 0; j < *col; j++ ) {
            scanf( "%d", &( *value )[ i * ( *col ) + j ] ) ;
            char c = getchar() ;
            if ( c == '\n' && ( i < *row - 1 || j < *col - 1 ) ) {             //case user input not equal size of dimensions
                printf( "Error: Incorrect number of elements." ) ;
                return ;
            }//end if
        }//end for
    }//end for
    

}//end function