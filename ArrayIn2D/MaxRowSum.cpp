#include<iostream>
using namespace std;
int maxSum(int arr[][3], int row, int col){
    int maxi=INT8_MIN;
    int rowindex=0;  
        for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum>maxi)
        maxi=sum;
        rowindex=row;
        
    } 
    cout<<"Maximum sum is: "<<maxi<<endl;
    return rowindex;
}

int main()
{
  int arr[3][3];
    int i,j;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"printing the array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int num=maxSum(arr,3,3);
    cout<<"Row with maximum sum is: "<<num;

}