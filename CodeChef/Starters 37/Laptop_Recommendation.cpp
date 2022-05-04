#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[11]={0};
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            arr[a]=arr[a]+1;
        }
        
        int temp=0;
        for(int i=1;i<11;i++){
            if(arr[temp]<arr[i]){
                temp=i;
            }
        }
        int status=0;
        for(int i=0;i<11;i++){
            if(arr[temp]==arr[i] && temp!=i){
                status=1;
            }
        }
        if(status){
            cout<<"CONFUSED\n";
        }else{
            cout<<temp<<"\n";
        }
    }
    return 0;
}