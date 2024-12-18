#include <stdio.h>
#include <stdlib.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;


    printf( "\n" ) ;
    if( data == NULL && ( m == 0 && n == 0 ) ) { 
        printf( "Enter number of rows and columns: %d %d" , m, n ) ;
    }//end if
    else if( data != NULL ) {
        printf( "Enter number of rows and columns: %d %d\n" , m, n ) ;
        printf( "Enter matrix elements:\n" ) ;
        for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                printf( "%d " , data[ i *n + j ] ) ;
            }//end for

            printf( "\n" ) ;
        }//end for
    }//end if
    

    


    free( data ) ;
    return 0 ;
}//end function



int *GetMatrix( int *row, int *col ) {
    scanf( "%d %d" , row, col ) ;
    if( *row == 0 && *col == 0 ) {
        return NULL ;
    }//end if
    int *data = ( int* )malloc( ( *row) * ( *col ) * sizeof( int ) ) ;
    for ( int i = 0 ; i < *row; i++ ) {
        for ( int j = 0 ; j < *col; j++ ) {
            scanf( "%d", &data[ i * *col + j ] ) ;
            char c = getchar() ;
            if ( c == '\n' &&  i == *row - 1 && j == *col - 2 ) {   //case user input last row?
                printf( "Error: Invalid matrix input" ) ;
                return NULL ;
            }//end if
        }//end for
    }//end for


   

    return data ;
    
}//end function