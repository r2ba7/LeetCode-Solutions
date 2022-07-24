class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        prev = -0.1
        for num in nums:
            if num == prev:
                return True
            prev = num
        # for j in range(1, len(nums)):
        #     if nums[j] == nums[j-1]:
        #         return True   
        # return False
        # if len(nums) != len(set(nums)):
        #     return True
        return False
