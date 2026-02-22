#include <iostream>
using namespace std;

int main(){
    int n, i, arr[10], prefix[10],l,r,sum ,q;
    cout<<"enter the number of elements"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"enter element:"<<endl;
        cin>>arr[i];
    }

    prefix[0]=arr[0];
    for(i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    // printing the prefix sum array 
    cout<<"the prefix sum array is:";
    for(i=0;i<n;i++){
        cout<<prefix[i]<<" "<<endl;
    }
    cout<<"enter the number of queries:"<<endl;
    cin>>q;
    while(q>0){
        cout<<"enter the leftmost index of range:"<<endl;
        cin>>l;
        cout<<"enter the rightmost index of range:"<<endl;
        cin>>r;
        if(l>0){
            sum=prefix[r]-prefix[l-1];
        } 
        else{
            sum=prefix[r];
        }
        cout<<"the sum of elements of range l to r:"<<sum<<endl;
        q--;
    }
    return 0;
}