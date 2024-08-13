#include<iostream>
using namespace std;

int main()
{
    int arr[5]={9,2,7,3,5};
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl; 
    // cout<<sizeof(arr)<<" "; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
            ans=arr[i];
       
    }
     cout<<ans<<" ";
    
    return 0;

}