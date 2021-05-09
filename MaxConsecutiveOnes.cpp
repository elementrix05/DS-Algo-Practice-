// Max Consecutive Ones - Leetcode 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
    int i=0;
    while(i<nums.size())
    {
        int consecutiveOnes=0;
        while(i< nums.size() && nums[i]==1)
        {
            consecutiveOnes++;
            i++;
        }
        maximum=max(maximum,consecutiveOnes);
        i++;
    }
    return maximum; 

};
};
