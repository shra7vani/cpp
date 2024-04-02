#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    // cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for( int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

