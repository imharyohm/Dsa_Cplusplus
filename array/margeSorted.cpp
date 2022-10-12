 #include<iostream>
 #include<vector>
 using namespace std;
 void merge(int arr[],int n,int arr2[],int m,int arr3[]){
    int i =0,j=0,k=0;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            arr3[k] = arr[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    //copy kardo first array ke element ko
    while(i<n){
        arr3[k]=arr[i];
        k++;
        i++;
    }
    //copy kardo second array ke element ko
    while(j<m){
        arr3[k++]=arr2[j++];
        //k++;
        //j++;
    }

 }
 void print(int ans[],int m){
     for(int i =0;i<m;i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl;
 }

 int main(){
    int arr[5]={1,3,5,7,9};
    int arr2[6]={2,4,6,56,34,23};

    int arr3[11]={0};

    merge(arr,5,arr2,6,arr3);


    print(arr3,11); 
 }