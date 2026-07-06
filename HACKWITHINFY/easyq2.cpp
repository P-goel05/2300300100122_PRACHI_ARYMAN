#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int arr[11]={1,2,2,3,2,3,5,1,2,1,1};
    int n=11;
    int k=2;
    long long ans=INT8_MIN;
    
    for(int i=0;i<n;i++){
        unordered_map<int,int> freq;
        long long sum=0;
        for(int j=i;j<n;j++){
            freq[arr[j]]++;
            sum+=arr[j];
            if(freq.size()<=k){
                ans=max(ans,sum);
            }
        }
    }
    cout<<ans<<endl;
    

}