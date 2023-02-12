//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


int pow( int m , int n ){
    if ( m==0) return 0;
    if ( n==0 ) return 1;
    return  pow ( m , n-1 )*m;
}

int powOptimized( int m ,int n ){
    if ( m == 0 ) return 0;
    if ( n==0 ) return 1;
    
    if ( n%2==0 ) return pow( m*m, n/2 ); // 2^6 -> 2^3 *2^ 3
    else return pow( m*m , (n-1)/2 )*m;
}


int main(int argc, const char * argv[]) {
    cout << powOptimized(5, 3)<<endl;
    return 0;
    
}
