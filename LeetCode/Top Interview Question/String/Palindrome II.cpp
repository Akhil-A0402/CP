#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        if(s.length()<2){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                continue;
            }else{
                s.erase(i--,1);
            }
        }
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<floor((s.length())/2);i++){
            if(s[i]==s[s.length()-1-i]){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }

int main(){
    string str="race a car";
    cout<<isPalindrome(str);
    return 0;
}