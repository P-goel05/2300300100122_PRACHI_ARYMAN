#include <iostream>
using namespace std;

int main(){
    int arr[20],n,s,e,m=0,ans=0,sq;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        arr[i]=i+1; // creating a hypothetical array from 1 to the number 
    }
    s=0;
    e=n-1;
    //main binary search logic
    while(s<=e){
        m=int(s+(e-s)/2);
        sq=m*m;
        if(sq==n){
            ans=m;// we get the perfect sqaure
        }
        else if(sq<n){ //if the sqaure of the mid is less than the number we search the right(second)half 
            ans=m; // storing possible answers for the square root 
            s=m+1; //searching the second half 
        }
        else{
            e=m-1; // searching the first half when the sq is greater than the number
        }
    }
    cout<<"the square root of the number rounded to integer is:"<<ans<<endl;
}