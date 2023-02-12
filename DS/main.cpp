//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;


int fun( int num ){
    static int x = 0;
    if ( num > 0){
        x++;
//        cout << num << endl;
        return fun( num -1 ) + x;
//        cout << num << endl;
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    
    cout << fun( 5 ) <<endl;
    
    return 0;
    
}
