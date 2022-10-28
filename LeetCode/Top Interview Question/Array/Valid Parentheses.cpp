#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        stack<char> s2;
        // int i=0;
        // map<char, char> brackets={{'(',')'},{'[',']'},{'{','}'},{')','('},{'}','{'}
                                 // }
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                s1.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                char temp;
                while(s1.top()!=s[i]){
                    temp=s1.top();
                    s2.push(temp);
                    s1.pop();
                }
                s1.pop();
                while(!s2.empty()){
                    temp = s2.top();
                    s1.push(temp);
                    s2.pop();
                }
            }
        }
        return s1.empty();
    }
};

int main(){
    string s= "(]";
    Solution s1;
    cout<<s1.isValid(s);
    return 0;
}