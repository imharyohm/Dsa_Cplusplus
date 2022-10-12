#include<iostream>
using namespace std;
bool liSearch(int arr[],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
int main(){
    int arr[10] = {1,5,3,2,6,-98,-6,4,7,8};
    cout<<"Enter the key which you are searching:";
    int key;
    cin>>key;
    cout<<endl;
     bool found = liSearch(arr,10,key);

     if(found)
     cout<<"The key is present";
     else{
        cout<<"Not present!!";
     }

}