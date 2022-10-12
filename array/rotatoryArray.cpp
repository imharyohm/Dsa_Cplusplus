#include<iostream>
#include<vector>
using namespace std;
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size());
        for(int i =0;i<nums.size();i++){
            arr[(i+k)%nums.size()]=nums[i];//to find the modulus of the number we use % operator and here suppose in 3/4 , 3 is samller then 4 then easy way to find out the modulus is to subtract 3 from 4 and then add 4 to it and then divide it by 4 and then we get the modulus as 1
                                            //is find the lowest number which is divisible by 4 and subtract it with 3.
        }
        //to copy the same value
        nums= arr;
    }
int getPovit(vector<int>& arr,int n){
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
int binarySearch(vector<int>& arr,int s,int e,int key){
    int start=s;
    int end =e;
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
       mid= start+(end-start)/2;
    }
    return -1;

}
int findPosition(vector<int>& arr, int n, int k)
{
    int povit = getPovit(arr,n);
    cout<<povit;
   if(k>=arr[povit] && k<=arr[n-1]){
       return binarySearch(arr,povit,n-1,k);
   }
    else{
        return binarySearch(arr,0,povit-1,k);
    }
}
int main(){
    //we didn't get desried answer because we havenot rotated array yet
    vector<int> arr(4);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    
    cout<<findPosition(arr,4,3);

}
