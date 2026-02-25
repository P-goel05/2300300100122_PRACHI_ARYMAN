#include <iostream>
#include <vector>
using namespace std;

//main logic
int SearchInNearlySortedArray(vector<int>& arr, int target){
    int s, e, m,ans ;
    s=0;
    e=arr.size()-1;
    while(s<=e){
        m=int(s+(e-s)/2);
        if(arr[m]==target){
            ans=m;
        }
        if(arr[m+1]==target){
            ans=m+1;
        }
        if(arr[m-1]==target){
            ans=m-1;
        }
        if(arr[m]>target){ //left subarray
            e=m-2;
        }
        else{  //right subarray
            s=m+2;
        }
    }
    return ans;
}