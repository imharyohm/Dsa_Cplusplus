#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void reverseArray(int arr[],int n){
    
    int start =0;
    int end = n-1;
     
     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    
    printArray(arr,5);
    reverseArray(arr,5);
    cout<<endl<<"Reverse of the array is:";
    printArray(arr,5);

}