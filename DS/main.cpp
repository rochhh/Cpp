//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Stack {
    int size;
    int top;
    int *s;
};

void push( Stack *st , int value ){
    if ( st->top == st->size-1 ) {
        cout << "Stack overflow" << endl;
    }
    else{
        st->top++;
        st->s[st->top]=value;
    }
}

void create( Stack *st ){
    printf( "Enter Size" );
    scanf("%d\n",st->size);
    
    st->top=-1;
    st->s = (int *)malloc(st->size*sizeof(int));
    
}

void display ( Stack *st ){
    int i;
    
    for ( i = st->top ; i >=0 ; i-- ){
        cout << st->s[i];
    }
    
}

        
int pop( Stack *st){
    int x = 0;
    if ( st->top == -1 ) cout << "Stack is empty" << endl;
    x = st->s[st->top];
    st->top--;
    
    return x;
}

int stackTop( Stack *st ){
    if ( st->top == -1 ) return -1;
    
    return st->s[st->top];
}

int isEmpty( Stack *st ){
    if ( st->top == -1 ) return 1;
    return 0;
}

int isFull( Stack *st ){
    if ( st->top == st->size-1 ) return 1;
    return 0;
}

int peek( Stack st , int pos ){
    int x = -1;
    
    if ( st.top-pos+1 < 0 ) cout << "no you're doing it wrong fam";
    
    x = st.s[st.top-pos+1];
    
    return x;
}

int main(){
    
    return 0;
}
