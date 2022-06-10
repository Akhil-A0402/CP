#include<iostream>
#include<string>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        s='0'+s+'1';
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}