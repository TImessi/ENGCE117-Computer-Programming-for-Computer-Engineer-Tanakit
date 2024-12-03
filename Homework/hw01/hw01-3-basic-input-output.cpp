#include <stdio.h>
#include <string.h>

char fname[ 20 ] ,lname[ 20 ] ;

int main() {

    printf( "First Name: " ) ;
    scanf( "%s",fname ) ;
    printf( "Last Name: " ) ;
    scanf( "%s",lname ) ;
    
    int len = strlen( fname ) ;

    if( fname[ len - 1 ] == 'c' || fname[ len - 1 ] == 'C' ) {
        fname[ len - 1 ] = 'C' + 1 ;
    }//end if

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand" ,fname ,lname ) ;
        


    return 0 ;
} //end function