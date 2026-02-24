#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s,e,m;
        s=0;
        e=arr.size()-1;
        while( s < e ){ //no s eqaul to e condition are the mid is varied
            m=int(s+(e-s)/2);
            if(arr[m]<arr[m+1]){ 
                s=m+1;
            }
            else{
                e=m;//may be we are at peak element (e=mid-1) we lose elements
            }
        }
        return e;
    }
};

int main(){
    Solution obj;
    vector<int> arr ={0,2,5,3,1};
    cout<<obj.peakIndexInMountainArray(arr);

    return 0;

}