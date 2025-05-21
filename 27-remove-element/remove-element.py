class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        nums.sort()
        c = 0
        for ele in nums:
            if ele != val:
                c+=1
        
        n= len(nums)
        for i in range(n):
            if (nums[i] == val):
                while (i + (n-c) < n):
                    nums[i] = nums[i + (n-c)]
                    i+=1

        return c
        