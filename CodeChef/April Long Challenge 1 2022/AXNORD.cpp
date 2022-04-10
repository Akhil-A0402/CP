#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;
	    int b=1;
        if(n%2==0){
            if(n%4==0){
                cout<<3*(n/4+1)+n/4<<"\n";
            }else{
                cout<<3<<"\n";
            }
        }else{
            if(n%4==1){
                cout<<3*(n/4)+(n/4)+1<<"\n";
            }else{
                cout<<3<<"\n";
            }
        }
	}
	return 0;
}
