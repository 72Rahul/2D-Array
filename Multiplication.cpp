//Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to multiply these matrices and output the multiplied matrix.

#include<iostream>
using namespace std;

int main(){
    int n1,n2, n3;
    cout<<"Enter the row of A : ";
    cin>>n1;
    cout<<"Enter the column of A: ";
    cin>>n2;
    cout<<"Enter the column of B: ";
    cin>>n3;
    cout<<"Enter the element : "<<endl;

    //input array

    int A[n1][n2];
    cout<<"Enter the matrix A"<<endl;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            cin>>A[i][j];
        }
    }

    int B[n2][n3];
    cout<<"Enter the matrix B"<<endl;
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<n3; j++){
            cin>>B[i][j];
        }
    }


int C[n1][n3];
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n3; j++){
            C[i][j] =0;
        }
    }
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n3; j++){
            for(int k = 0; k<n2; k++){
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }
// output
    cout<<"Multiply of matrix A and B"<<endl;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}