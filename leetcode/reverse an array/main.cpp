//program  on Reverse an array
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the limit of an array:";
  cin>>n;
  int arr[n];
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"original array:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int start=0,end=n-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  };
  cout<<endl<<"After Reversing the array:"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
  return 0;
}