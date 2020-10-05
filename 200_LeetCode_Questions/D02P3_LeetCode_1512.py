# Problem :  Number of Good Pairs
 
# Given an array of integers nums.
# A pair (i,j) is called good if nums[i] == nums[j] and i < j.
# Return the number of good pairs.

# Example 1:
# Input: nums = [1,2,3,1,1,3]
# Output: 4
# Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
  
# Solution:

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        d = {}
        res = 0
        for i in nums:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        for i in d:
            res += (d[i]*(d[i]-1))//2
        return res
