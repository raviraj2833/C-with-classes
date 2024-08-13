#include<iostream>
using namespace std;
int main(){
    int num;
    while(num >9){
    int rem,ans=0;
    cout<<"Enter the num : ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        ans=ans+rem;
    }
    num=ans;
  cout<<num;
    }

}