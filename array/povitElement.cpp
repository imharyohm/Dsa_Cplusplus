//minimum element in array
#include<iostream>
using namespace std;
int getPovit(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid +1;
        }
        else{
            e= mid;
        }
        mid=s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={3,4,7,8,12};
    cout<<"povit is :"<<getPovit(arr,5);

}