#include <stdio.h>
#include <stdlib.h>

int GetSet( int [] ,int size ) ; 

int main() {
    int *data ,num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d" ,&num ) ;
    data = ( int* )malloc( num * sizeof( int ) ) ;
    num = GetSet( data ,num ) ; 


    if( num == -1 ){
        printf( "Error\n" );

    }else{
        printf( "\n" ) ;
        printf( "Number of elements: %d\n" ,num ) ;

        for( int i = 0 ; i < num ; i++ ) {
            printf( "%d " ,data[ i ] ) ;

        }//end for

    }//end else

    
    
    return 0 ;


}//end function



int GetSet( int arr[], int size ) {
    for( int i = 0 ; i < size; i++ ) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1; 
        }//end if
    }//end for

    return size ;
    
}//end function