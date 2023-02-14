//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


int nCr( int n , int r ){
    if ( r==0 || n==r ) return 1;
    return nCr( n-1 , r-1 ) + nCr( n-1 , r );
}

int fac( int n ){
    if ( n==0 ) return 1;
    return fac(n-1)*n;
}

int facNcr( int n , int r ){
    int numerator ,denominator;
    numerator = fac(n);
    denominator = fac(r)*fac(n-r);
    
    return numerator/denominator;
}

int main(int argc, const char * argv[]) {
    
   
    
    cout << facNcr(4,2)<<endl;
    
    return 0;
    
}
