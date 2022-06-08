#include<iostream>
using namespace std;

int main(){
    int t, x, y;
    cin>>t;

    while (t--)
    {
        cin>>x>>y;
        if(!((x+y)%2))
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}