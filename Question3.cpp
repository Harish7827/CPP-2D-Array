// Q3 - Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and column of that element to 0. Make the changes inplace and print the matrix.

#include<iostream>
#include <climits>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"\nEnter the size of matrix [row]][column]\n";
    cout<<"Row : ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter "<<i+1<<" Row(s)"<<" and "<<j+1<<" column(s) value: ";
            cin>>matrix[i][j];
            cout<<endl;
        }
    }
    
    vector<pair<int,int>> ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 0){
                ans.push_back({i,j});
            }
        }
    }

    for(int i = 0; i < ans.size(); i++){
        int x = ans[i].first;
        int y = ans[i].second;
        int row = 0, column = 0;
        while(row < m){
            matrix[row][y] = 0;
            row++;
        }
        while(column < n){
            matrix[column][x] = 0;
            column++;
        }
    }
    cout<<"\nUpdated Matrix\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}