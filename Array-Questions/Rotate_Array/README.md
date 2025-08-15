# Right Array Rotation

## Problem
Rotate an array of size n to the right by k steps.

### Example 1:

Input: [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

# Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]




### Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
# Explanation: 
   rotate 1 steps to the right: [99,-1,-100,3]
   rotate 2 steps to the right: [3,99,-1,-100]

## Approach
Used 3-step reverse method:
1. Reverse the entire array
2. Reverse first k elements
3. Reverse remaining n-k elements


## Time Complexity
O(n)

## Space Complexity
O(1)

## Reference
LeetCode 189: [Rotate Array](https://leetcode.com/problems/rotate-array/)