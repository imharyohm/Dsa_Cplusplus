 #include<iostream>
 using namespace std;
 void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
 }

void sortZeroOne(int arr[],int n){
    int i=0, j=n-1;         //2 pointer approach
    while(i<j){
        while(arr[i]==0&&i<j){
            i++;
        }
        while (arr[j]==1&&i<j)
        {
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }
}

 int main(){
    int arr[8]={1,0,0,0,1,1,1,1};
    sortZeroOne(arr,8);
    printArray(arr,8);

 }