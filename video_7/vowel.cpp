#include<iostream>
using namespace std;
int main(){
    char name='a';
    cout<<"Enter character: ";
    cin>>name;
    if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u'){
        cout<<"vowel";
    }
    else
    {
        cout<<"consonant";
    }
}