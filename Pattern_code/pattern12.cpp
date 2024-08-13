#include<iostream>
using namespace std;
int main(){
    // char i,j
    // for(i='a';i<='e';i++){
    //     for(j='a';j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;

    // {
    for(int i=1;i<=5;i++){
      
        for(int j=1;j<=i;j++){
              char name ='a'+(i-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}