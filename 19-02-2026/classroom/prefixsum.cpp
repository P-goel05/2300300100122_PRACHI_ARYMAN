#include <iostream>
using namespace std;

int main(){
    int n, i=0, a[10], prefix[10];
    cout<<"enter number of elements of array"<<endl;
    cin>>n;
    // reading the array 
    for(i=0;i<n;i++){
        cout<<"enter element:"<< endl;
        cin>>a[i];
    }
    // the prefix of first elemnet will be the element itself
    prefix[0]=a[0];
    // the prefix sum logic (preivous prefix value + current array element)
    for(i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    // printing the prefix sum array 
    cout<<"the prefix sum array is:";
    for(i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    return 0;
}