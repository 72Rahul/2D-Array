
//Given a square matrix & its number of rows (or columns) n, return the transpose of the square matrix.

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

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
    return 0;
}