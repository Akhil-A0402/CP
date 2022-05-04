#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x, y;
        cin>>x>>y;

        if((x*10)==(y*5)){
            cout<<"ANY\n";
        }else if((x*10) > (y*5)){
            cout<<"FIRST\n";
        }else{
            cout<<"SECOND\n";
        }
    }
    return 0;
}