#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                int temp=a[i];
                a[i]=b[i];
                b[i]=a[i];
            }
            sum+=(abs(a[i]-b[i]));
        }
        cout<<sum<<"\n";
    }
    return 0;
}
