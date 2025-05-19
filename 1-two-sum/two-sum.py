class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        ## O(N2) SOLUTION
        # n = len(nums)
        # for i in range(0,n):
        #     for j in range(1,n):
        #         if(nums[i] + nums[j] == target):
        #             return [i,j]

        n = len(nums)
        dict = {}
        for i in range(0,n):
            diff = target - nums[i]
            if diff in dict:
                return [i,dict[diff]]
            dict[nums[i]] = i
