#include <stdio.h>

struct student {
    char name[ 50 ] ;
    int age ;
} ;

struct student ( *GetStudent( int *room ) ) [ 10 ] {
    static struct student rooms[ 10 ][ 10 ] ; 
    int i, j ;

    printf( "Room %d:\n" , *room ) ;
    for ( i = 0 ; i < 10 ; i++ ) {
        printf( "Student %d: " , i + 1 ) ;
        scanf( "%s" , rooms[ *room - 1 ][ i ].name ) ;
        printf( ", Age: " ) ;
        scanf( "%d" , rooms[ *room - 1 ][ i ].age ) ;
    }

    return &rooms[ *room - 1 ] ; 
}

int main() {
    struct student ( *children )[ 10 ] ;
    int group , i ;

    scanf( "%d" , &group ) ;

    for ( i = 1 ; i <= group ; i++ ) {
        children = GetStudent( &i ) ;
        printf( "Room %d: 10 students entered.\n" , i ) ;
    }

    return 0 ;
}
