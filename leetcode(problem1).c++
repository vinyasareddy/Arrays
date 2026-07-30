class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j=1;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
            int sum =nums[i]+nums[j];
            if(sum==target){
                v.push_back(i);
                v.push_back(j);
                
            }
        }
        }
        
        return v;
        
    }
};