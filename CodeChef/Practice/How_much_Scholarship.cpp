#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0 && n<51)
        cout<<100;
    else if(n>50 && n<101)
        cout<<50;
    else{
        cout<<0;
    }
}