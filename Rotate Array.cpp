class Solution {
public:
    void right_rotate(vector<int>& nums) {
		int last_element = nums[nums.size()-1];
		for(int i = nums.size()-1; i > 0  ;i--)	nums[i] = nums[i - 1];
		nums[0] = last_element;
	}
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        while(k--) right_rotate(nums);
    }
};
