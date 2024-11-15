#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the row of array : ";
    cin>>n;
    cout<<"Enter the column : ";
    cin>>m;
    cout<<"Enter the element : "<<endl;

int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    // spiral order print

    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
     // for row print
    while(row_start<=row_end && column_start<=column_end){

    for(int col = column_start; col<=column_end; col++)
        cout<<arr[row_start][col]<<" ";
    
    row_start++;

    //for column end print
    for(int row = row_start; row<=column_end; row++)
        cout<<arr[row][column_end]<<" ";
    
    column_end--;

    //for row end print

    for(int col = column_end; col>=column_start; col--)
        cout<<arr[row_end][col]<<" ";
    
    row_end--;

    //for column start

    for(int row = row_end; row>=row_start; row--)
        cout<<arr[row][column_start]<<" ";
    
    column_start++;
    
    }
    return 0;
}