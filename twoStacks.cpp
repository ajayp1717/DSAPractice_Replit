#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  
class twoStacks {
    int* arr;
    int size;
    int top1, top2;
  
public:
    twoStacks(int n) 
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

//Methods:
    void push1(int x){
        if(top2-top1>1){
            top1++;
            arr[top1]=x;
        }
        else{
            cout<<"StackOverflow"<<endl;
            exit(1);
        }
    }
    void push2(int x){
        if(top2-top1>1){
            top2--;
            arr[top2]=x;
        }
        else{
            cout<<"StackOverflow"<<endl;
            exit(1);
        }
    }
    void pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top--;
            return ans;
        }
        else{
            cout<<"StackUnderflow"<<endl;
            exit(1);    
        }
    }
    void pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            cout<<"StackUnderflow"<<endl;
            exit(1);    
        }
    }
};