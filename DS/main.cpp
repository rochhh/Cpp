//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;

double optimizedE( int x , int n ){   // x is pow(e) and n is how many terms to add , more terms more precision
    static double result = 1;
    
    if ( n==0 ) return result;
    result = 1 + x*result / n;
    
    return optimizedE( x , n-1 );
}

double iterOptimizedE( int x  , int n ){
    double result = 1;
    for ( ; n > 0 ; n-- ){
        result = 1 + x*result/n;
    }
    return result;
}


int main(int argc, const char * argv[]) {
    cout << iterOptimizedE(1,10) <<endl;
    return 0;
    
}
