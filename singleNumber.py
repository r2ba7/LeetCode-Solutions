class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        if len(nums)==1:
            return nums[0]
        i = 1
        while i < len(nums):
            if nums[i] == nums[i-1]:
                nums.pop(i)
                nums.pop(i-1)
                i -= 1
            i += 1
        return nums[0]
