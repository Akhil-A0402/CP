#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x, y;
        cin>>x>>y;
        if(x>y){
            cout<<x-y<<"\n";
        }else if(x==y){
            cout<<0<<"\n";
        }else{
            int count=0;
            while(x<=y){
                x+=2;
                y+=1;
                count++;
            }
            cout<<count<<"\n";
        }
    }
    
    return 0;
}