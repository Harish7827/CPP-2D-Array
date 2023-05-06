// Q2 - You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in clockwise direction. You need to do it in-place i.e. you are not allowed to make a new matrix and allocate the elements to it. Make the changes in the same matrix and print it.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the matrix [n][n]: ";
    cin>>n;

    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter "<<i+1<<" Row(s)"<<" and "<<j+1<<" column(s) value: ";
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix in starting\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
    
    cout<<endl;
    cout<<"Matrix After Rotate\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
