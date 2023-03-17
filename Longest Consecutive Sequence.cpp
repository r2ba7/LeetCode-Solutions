class Solution {
// [0,3,7,2,5,8,4,6,0,1] -> [0, 0, 1, 2, 3, 4, 5, 6, 7, 8]
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int counter = 1;
        int max_seq = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                if(nums[i-1]+1 == nums[i]) 
                    counter++;
                else{
                    max_seq = max(max_seq, counter);
                    counter = 1;
                }
            }
        }
        return max(max_seq, counter);
    }
};
