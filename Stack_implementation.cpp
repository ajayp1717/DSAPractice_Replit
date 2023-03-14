#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{
    //properties:
    public:
        int top,*arr,size;

    //behaviour:
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int num){
        if(!isFull()){
            top++;
            arr[top]=num;
        }
        else{
            cout<<"Stack Overflow";
        }    
    }
    void pop(){
        if(!isEmpty()){
            top--;    
        }
        else{
            cout<<"Stack Underflow";    
        }    
    }
    int peek(int num){
        return arr[top];
        
    }
    bool isFull(){
        return top>=size;
    }
    bool isEmpty(){
        return top==-1;
    }
};

int main(){
    
    Stack st(5);
    st.push(1);
    st.push(2);
    st.pop();
    st.peek(4);
    st.push(5);

    st.isEmpty();
    return 0;
    
    
}
