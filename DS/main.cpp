//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;

double e( int x , int n ){   // x is pow(e) and n is how many terms to add , more terms more precision
    static double numerator=1 , denominator=1;
    double result;
    
    if ( n == 0 ) return 1;
    
    result = e( x , n-1 );
    numerator = numerator*x;
    denominator = denominator*n;
    
    return result + numerator/denominator;
    
    
}


int main(int argc, const char * argv[]) {
    cout << e(1,10) <<endl;
    return 0;
    
}
