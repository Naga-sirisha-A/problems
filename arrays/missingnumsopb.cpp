class Solution {
public:
    int missingNumber(vector<int>& nums) 
    { 
      for(int i=0;i<=nums.size();i++)
      {
         int flag=0;
         for(int j=0;j<nums.size();j++){
             if(i==nums[j]){
                 flag=1;
                 break;
             }
         }
             if(flag==0){
                 return i;
             }
         
      }
      return -1;
         
    }
 };
     
     
     
     
 class Solution {
public:
    int missingNumber(vector<int>& nums) 
  {     
    int missingNumber(vector<int>& nums) 
    {
      int n=nums.size();
      int total_sum=n*(n+1)/2;
      int arr_sum=0;
      for(int i=0;i<n;i++){
        arr_sum+=nums[i];
      }
      return total_sum-arr_sum;
    }
    return -1;
  }
};