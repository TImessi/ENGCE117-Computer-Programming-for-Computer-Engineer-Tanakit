#include <stdio.h>
#include <string.h>


void reverse( char str1[], char str2[] ) ; //fix code



int main() {
    char text[ 50 ] = "I Love You" ;  //fix code
    char out[ 50 ] ; //fix code 
    
    fgets( text, sizeof( text ), stdin ) ;
    reverse( text, out ) ; //fix code


    return 0 ;
}//end function




void reverse( char str1[], char str2[] ) {

   int len = strlen( str1 );
   for ( int i = 0 ; i < len; i++ ) {
        str2[ i ] = str1[ len - 1 - i ] ;
    }//end for


    for( int i = 0 ; i < len ; i++ ) {
    	printf( "%c", str2[ i ] ) ;
    }//end for

}//end function reverse()