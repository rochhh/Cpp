//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
void fun2( int num );
using namespace std;


void fun1( int num ){ 
    if ( num > 0){
        cout << num << endl;
         fun2( num -1 );
//         fun( num-1);
    }
}

void fun2( int num ){
    if ( num > 0 ){
        cout << num << endl;
        fun1(num/2);
    }
}


int main(int argc, const char * argv[]) {
    
    fun1(20);
    return 0;
    
}
