#include <stdio.h>
#include <string.h>

struct student {
    char name[ 50 ] ;
    int age ;
} ; //end struct


void GetStudent( struct student child[][ 10 ] , int *room ) {

    scanf( "%d" , room ) ;
    for ( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n" , i + 1 ) ;

        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: " , j + 1 ) ;
            scanf( "%s" ,child[ i ][ j ].name ) ;
            printf( ",Age: " ) ;
            scanf( "%d" ,&child[i][j].age ) ;
        } //for loop get student and age

        
        printf( "Room %d: 10 students entered.\n" ,i + 1 ) ;
    } //for loop get room and student
}

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;

    
    GetStudent( children , &group ) ;

    return 0 ;
}//end main
