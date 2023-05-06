// Q1 - Given a 2D matrix with m rows and n columns containing integers, find and print the maximum value present in the array.

#include<iostream>
#include <climits>
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
    
    int minValue=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]>minValue){
                minValue=matrix[i][j];
            }
        }
    }
    cout<<"Maximum Value in this matrix is "<<minValue<<endl;
    return 0;
}