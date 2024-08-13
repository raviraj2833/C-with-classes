#include<iostream>
using namespace std;

int main()
{
    int arr[5]={9,2,7,3,5};
    int index=-1;
   int ans=7;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
    if(arr[i]==ans)
    index=i;
   }
   cout<<index;
    return 0;

}