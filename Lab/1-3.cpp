#include <stdio.h>
#include <stdlib.h>
int *GetSet( int * ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;

    printf( "\n" ) ;
    printf( "Number of elements: %d\n", num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;

    }//endfor

    


    free( data ) ;
    return 0 ;
}//end function

int *GetSet( int *n ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d" , n ) ;
    int *arr = ( int* )malloc( *n * sizeof( int ) ) ;
    
    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < *n ; i++ ) {
        scanf( "%d" , &arr[ i ] ) ;
    }//end for


    return arr ;
}//end function