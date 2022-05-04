#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

void makeingZero(vector<vector<int>> arr,int i,int j){
    for(int k=0;k<arr.size(),k++){
        arr[i][k]=0;
    }
    for(int k=0;k<arr[0].size(), k++){
        arr[k][j]=0;
    }
}

int main(){
    vector<vector<int>> arr;
    arr = {{1,1,1},{1,0,1},{1,1,1}};

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==0);
                makeingZero(arr,i, j);
        }
    }

    for(int i=0;i<arr.size(),i++){
        for(int j=0;j<arr[i].size();j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    

    return 0;
}