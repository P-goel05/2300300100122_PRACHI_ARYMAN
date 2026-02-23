#include <iostream>
using namespace std;

int main(){
    int arr[20],n,s,e,m=0,ans=0,t;
    cout<<"enter number of elements:"<<endl;
    cin>>n;
    cout<<"enter a array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target element to be found for first occurencce:"<<endl;
    cin>>t;
    s=0;
    e=n-1;
    //main binary search logic
    while(s<=e){
        m=int(s+(e-s)/2);
        if(arr[m]==t){
            ans=m;
            e=m-1;
        }
        else if(arr[m]<t){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    cout<<"the index of first occurence of target is:"<<ans<<endl;
}
