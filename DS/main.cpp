//
//  main.cpp
//  DS
//
//  Created by Rochishnu Paliwal on 2/10/23.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue( struct Queue q , int x ){
    
    if ( q.rear ==q.size-1 ) cout << "queue is full" <<endl;
    
    q.rear++;
    q.Q[ q.rear ] = x;
    
}

void dequeue ( struct Queue q ){
    if ( q.front == q.rear ) cout  << "queue is empty" <<endl;
    
}

int main(){
    
    struct Queue q;
    cout << "enter size" <<endl;
    scanf( "%d\n" , &q.size );
    q.Q = new int[ q.size ];
    q.front = q.rear = -1;
    return 0;
}
