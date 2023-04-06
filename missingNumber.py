class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        C = list(set([i for i in range(0, len(nums)+1)])-set(nums))
        return C[0]
