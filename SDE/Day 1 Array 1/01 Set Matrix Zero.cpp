#include <iostream>
#include <vector>
using namespace std;

void setZero(vector<vector<int>> &matrix){
    int row=matrix.size(), col = matrix[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                int ind = i-1;
                while(ind>=0){
                    if(matrix[ind][j]!=0){
                        matrix[ind][j]=-1;
                    }
                    ind--;
                }
                ind=i+1;
                while(ind<row){
                    if(matrix[ind][j]!=0){
                        matrix[ind][j]=-1;
                    }
                    ind++;
                }
                ind=j-1;
                while(ind>=0){
                    if(matrix[i][ind]!=0){
                        matrix[i][ind]=-1;
                    }
                    ind--;
                }
                while(ind<col){
                    if(matrix[i][ind]!=0){
                        matrix[i][ind]=-1;
                    }
                    ind++;
                }
            }
        }
    }
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            if(matrix[i][j]==-1)
                matrix[i][j]=0;
}

int main(){
    vector<vector<int>> matrix;
    matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZero(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++)
            cout<<matrix[i][j]<<"\t";
        cout<<"\n";
    }
    return 0;
}