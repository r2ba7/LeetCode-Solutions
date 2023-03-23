class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        unsigned long seq = 0;
        unsigned long tot_seq = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                seq++;
                tot_seq=tot_seq+seq;
            }else   seq=0;
        }
        return tot_seq;
    }
};
