//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


void toh( int n , int a , int b , int c ){
    
    if ( n > 0 ){
        
        toh( n-1 , a , c , b );
        cout << " from " << a << "to" << c << endl;
        toh( n-1 , b , a , c );
    }
}


int main(int argc, const char * argv[]) {
    
    
//    cout << toh( 6 ,1,2,3 ) <<endl;
    toh( 6,1,2,3 );
    return 0;
    
}
