//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
#include <cmath>
using namespace std;

/**
 is power of two Leetcode
 */

int main(int argc, const char * argv[]) {
    
    int *p;
    p = new int[2];
    p[0] = 33;
    p[1] = 45;
    p[2] = 89;
    int *q;
    q = new int[4];
    for ( int i = 0 ; i <=4 ; i++ ){
        q[i] = p[i];
    }
    free(p);
    p=q;
    q=NULL;
    
    for ( int i = 0 ; i <= 4  ; i ++ ){
        cout << p[i] << endl ;
    }
    return 0;
    
}
