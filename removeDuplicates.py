import numpy as np
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = nums[0]
        for num in nums[1:]:
            if index == num:
                nums.remove(num)
            else:
                index = num
        return len(nums)
