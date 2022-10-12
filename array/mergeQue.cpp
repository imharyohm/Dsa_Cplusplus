    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    
    
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]!=0){
                i++;
            }
            else{
                nums1[i]=nums2[j];
                i++;
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
    int main(){
        vector<int> nums1{1,2,3,0,0,0};
        vector<int> nums2{2,5,6};
        merge(nums1,3,nums2,3);
        for(int i =0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
        }
    } 