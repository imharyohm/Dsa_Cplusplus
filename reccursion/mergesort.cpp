 #include<iostream>
 using namespace std;
 void merge(int *arr,int s,int e){
    int mid =s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //copy values
    int arrindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[arrindex++];
    }
    arrindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[arrindex++];
    }
    //merge 2 sorted arry
    int index1=0;
    int index2=0;
    arrindex=s; 

    while(index1<len1 && index2<len2){
        if(first[index1]< second[index2])
        arr[arrindex++]=first[index1++];

        else
        arr[arrindex++]=second[index2++];
    }

    while(index1<len1)
     arr[arrindex++]=first[index1++];

     while(index2<len2) 
      arr[arrindex++]=second[index2++];
 }

 void mergesort(int *arr,int s,int e){

     int mid=s+(e-s)/2;
    if(s>=e)
    return;
    
    mergesort(arr,s,mid);

    mergesort(arr,mid+1,e);

    merge(arr,s,e);
 }

 int main(){
    int arr[5]={4,5,2,8,1};
    int n=5;

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
 }