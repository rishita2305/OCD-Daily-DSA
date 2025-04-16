# Q1) Generate parenthesis
# TC=O(4^n/n^(1/2)) SC=O(n)
#Approach: generates all valid combinations of n pairs of parentheses using backtracking.
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res=[]
        stack=[]
        def backtrack(openN, closeN):
            if openN==closeN==n:
                res.append("".join(stack))
                return
            if openN < n:
                stack.append("(")
                backtrack(openN+1 ,  closeN)
                stack.pop()
            if closeN < openN:
                stack.append(")")
                backtrack(openN , closeN+1)
                stack.pop()
        backtrack(0,0)
        return res
# Q2) Subsets
# TC=O(2^n) SC=O(n)
# Approach: Use backtracking to explore all possible combinations starting from index start, building subsets incrementally.
class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def backtrack(start, path):
            res.append(path[:])  # append a copy of the current subset
            for i in range(start, len(nums)):
                path.append(nums[i])      # choose
                backtrack(i + 1, path)    # explore
                path.pop()                # un-choose

        backtrack(0, [])
        return res
