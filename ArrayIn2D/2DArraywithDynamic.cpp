#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of arr:";
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    cout<<"Enter the elements of the arr:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
}