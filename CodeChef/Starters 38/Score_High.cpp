#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[4]={0};
        for(int i=0;i<4;i++)
            cin>>arr[i];
        int value=0;
        for(int i=0;i<4;i++){
            int b=floor(n/2);
            if(arr[i]>=floor(n/2))
                value+=arr[i];
        }
        cout<<value<<"\n";
    }
    return 0;
}