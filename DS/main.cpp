//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


int fac( int num ){
    if (num==0) return 1;
    return fac( num-1 )*num;
}

int ifac( int num ){
    int prod=1;
    for ( int i = 1 ; i<=num ; i++ ){
        prod = prod * i;
    }
    return prod;
}


int main(int argc, const char * argv[]) {
    cout << ifac(5)<<endl;
    return 0;
    
}
