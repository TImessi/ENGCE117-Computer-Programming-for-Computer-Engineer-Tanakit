#include <stdio.h>
#include <stdlib.h>

void GetSet( int [], int * ) ;

int main() {

    int *data, num ;
    scanf( "%d", &num ) ;
    data = (int*)malloc( num * sizeof( int ) ) ;
    GetSet( data, &num ) ;
    free( data ) ;

    return 0 ;

}//end function


void GetSet( int data[], int *num ) {
    for( int i = 0 ; i < *num;i++ ){
        scanf("%d", &data[ i ] ) ;
        
    }//end for
}//end function GetSet