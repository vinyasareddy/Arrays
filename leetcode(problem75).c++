class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else
            count2++;
        }
        int i=0;
        while(count>0){
            nums[i]=0;
            count--;
            i++;
        }
        while(count1>0){
            nums[i++]=1;
            count1--;
        }
        while(count2>0){
            nums[i++]=2;
            count2--;
        }
    }
};