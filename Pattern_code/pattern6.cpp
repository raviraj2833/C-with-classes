#include<iostream>
using namespace std;
int main(){
    // int i;
    //  char j;
    // for(i='a';i<='e';i++){
    //     for(j='a';j<='e';j++){
    //    cout<<j;
    //     }
    //         cout<<endl;
    //     }

    int i,j;
    for(i=1;i<=5;i++){
      
        for(j=1;j<=5;j++){
              char name='a'+j-1;
            cout<<name<<" ";

        } 
        cout<<endl;
    }
}
