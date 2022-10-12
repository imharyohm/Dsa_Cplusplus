#include<iostream>
using namespace std;
//binary search better hai linear search se just because linear search me time complexity hota hai O(n)
//but binary search me hota hai O(logn )
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end =size-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       // mid=(start+end)/2; //galti se koe value jo int ke value ko exceed karega yuke
       // lea aak aalg tarika se mid ko ko likna hoga
       mid= start+(end-start)/2;
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,2,3,4,5};

    int result= binarySearch(even,6,10);
    cout<<"position is: "<<result;
}