#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter the limit: ";
    cin>>n;
    for(row=1;row<=n;row++){
        //Print space
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        // print star
        for(col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}