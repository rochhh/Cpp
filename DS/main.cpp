//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
using namespace std;

template< class T>
class Maths {
private:
    T a;
    T b;
    
public:
    Maths( T a ,T b );
    T add();
    T sub();
    
};
    template< class T>
    Maths<T>::Maths( T a , T b ){
        this->a = a;
        this->b = b;
    }
    template< class T>
    T Maths<T>::add(){
        int c;
        c= a+b;
        return c;
    }
    template< class T>
    T Maths<T>::sub(){
        int c;
        c = a-b;
        return c;
    }

int main(int argc, const char * argv[]) {
    Maths m = { 6, 1 };
    
    cout << m.add() << endl << m.sub() << endl;
   
    return 0;
    
    cout << sizeof(int) << endl;
}
