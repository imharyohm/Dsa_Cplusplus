#include<iostream>
using namespace std;
bool linearSearch(int arr[],int key,int size){
    if(size==0)
    return false;

    if(key==arr[0])
    return true;

    else{
        return linearSearch(arr+1,key,size-1);
    }
}
int main(){
    int arr[5]={1,2,4,5,7};
    int size=5,key;
    cin>>key;
    int ans=linearSearch(arr,key,size);
    if(ans)
    cout<<"present";
    else
    cout<<"absent";
}