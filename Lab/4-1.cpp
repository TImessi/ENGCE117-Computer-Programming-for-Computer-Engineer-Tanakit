#include <stdio.h>

void go( int **p, int *z ) {
    *p = z ;  // Make *p point to z
}

int main() {
    int *a, b = 10 , c = 20 ;
    
    go( &a, &b ) ;
    printf( "%d %p %p\n" , *a, a, &a ) ;

    go( &a, &c );
    printf( "%d %p %p\n" , *a, a, &a ) ;
    
    return 0;
}