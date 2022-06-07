#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;

    long long int c;
    while(t--){
        cin>>c;
        cout<<fixed<<setprecision(0);
        cout<<(c*50)*0.3<<"\n";
    }
    return 0;
}