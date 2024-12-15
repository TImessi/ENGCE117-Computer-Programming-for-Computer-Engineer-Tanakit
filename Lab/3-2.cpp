#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
}; //end struct

void upgrade( struct student *child ) {

    if ( child -> sex == 'M' ) {
        child -> gpa *= 1.10 ;
    } //end if
    else if ( child -> sex == 'F' ) {
        child -> gpa *= 1.20 ;
    } //end elseif
    else {
        child -> gpa ;
    } //end else

    if ( child -> gpa > 4.00 ) {
        child -> gpa = 4.00 ;
    } //end if

}

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 4.00 ;

    upgrade( &aboy );
    printf( "%.2f\n" ,aboy.gpa ) ;

    return 0 ;
} //end main
