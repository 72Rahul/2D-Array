//We have to find if value x is present in the 2D array.

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
    int x;
    cout<<"Enter the element to search : "<<endl;
    cin>>x;
bool flag=false;
    int r = 0, c = m-1;
    while(r<n && c>=0){
        if(arr[r][c]==x){
            flag = true;
        }
        if(arr[r][c]>x){
            c--;
        }
        else {
            r++;
        }
    }
    if(flag){
        cout<<"Searching successful"<<endl;
    }
    else {
        cout<<"Element is not found"<<endl;
    }
    // bool flag = false;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(arr[i][j]==x){
    //             cout<<"The element is found at "<<i<<" "<<j<<endl;
    //             flag = true;
    //         }
    //     }
    // }
    
    return 0;

}