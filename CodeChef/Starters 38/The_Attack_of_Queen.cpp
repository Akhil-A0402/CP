#include <iostream>
#include <iomanip>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;

    int n, x, y;
    while(t--){
        cin>>n>>x>>y;
        ll count=0;
        count+=(2*(n-1));
        int value=0;
        if(x!=0 || y!=0)
            (min(x-1, y-1)>-1)?count+=(min(x-1, y-1)):0;
        if(x!=n || y!=0)
            (min(n-x,y-1)>-1)?count+=(min(n-x,y-1)):0;
        if(x!=n || y!=n)
            (min(n-x,n-y)>-1)?count+=(min(n-x,n-y)):0;
        if(x!=n || y!=0)
            (min(x-1, n-y)>-1)?count+=(min(x-1, n-y)):0;
        cout<<fixed<<setprecision(0);
        cout<<count<<"\n";
    }
    return 0;
}