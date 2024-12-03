#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {

    char text[ 50 ] = " I Love You " ;
    fgets( text, sizeof( text ), stdin ) ;
    char *out ;
    out = reverse( text ) ;

    printf("%s", out);

}//end function


char* reverse( char str1[] ) {
   
    int len = strlen( str1 ) ;
    
    for ( int i = 0 ; i < len / 2 ; i++ ) {
        char temp = str1[ i ] ;
        str1[ i ] = str1[ len - i - 1 ] ;
        str1[ len - i - 1 ] = temp ;

    }//end for


    return str1;
}//end function reverse()