#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> InsertionSort(vector <int>arr,int n){
    vector<int>ans(n);
    ans.push_back(arr[0]);

    for(int i=1;i<n;i++){

        for(int j=0;j<ans.size();j++){
            if(arr[i]<=ans[j]){
                ans[j+1]=ans[j];
                ans[j]=arr[i];
                break;
            }
            
        }

        
        
    }
    
}