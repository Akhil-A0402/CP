#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin>>n>>q;
    vector<vector<int> > vect;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        vector<int> temp;
        for(int j=0;j<size;j++){
            int v;
            cin>>v;
            temp.push_back(v);
        }
        vect.push_back(temp);
        temp.clear();
    }
    int m,k;
    for(int i=0;i<q;i++){
        cin>>m>>k;
        cout<<vect[m][k]<<"\n";
    }
    return 0;
}