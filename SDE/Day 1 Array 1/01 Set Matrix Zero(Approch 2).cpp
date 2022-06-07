#include<iostream>
#include<vector>
using namespace std;

void setZero(vector<vector<int>> &matrix){
    vector<int> dummy1(matrix.size(), -1), dummy2(matrix[0].size(), -1);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                dummy1[i] = 0;
                dummy2[j] = 0;
            }
        }
    }

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(dummy1[i]==0 || dummy2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
}

int main(){
    vector<vector<int>> matrix;
    matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZero(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++)
            cout<<matrix[i][j]<<"\t";
        cout<<"\n";
    }
    return 0;
}