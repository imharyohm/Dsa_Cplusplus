#include<iostream>
using namespace std;

/*void swapAlter(int arr[],int n){
    int i=0;
    int start=i;
    
    int temp;
    for(i;i<n;i++){
        int end = start+1;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start=start+2;
     }
}*/
void swapAlter(int arr[],int  n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[5]= {1,2,3,4,5};
    swapAlter(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
        
    }
   
}