//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


int sum( int num ){
    if (num == 0) return 0;
    return sum( num - 1 ) + num ;
}


int main(int argc, const char * argv[]) {
    cout << sum(5);
    
    
    return 0;
    
}
