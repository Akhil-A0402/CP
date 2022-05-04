#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int pos=0;
        int neg=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
                pos++;
            else
                neg++;
        }

        if(abs(pos-neg)>2){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    
    return 0;
}