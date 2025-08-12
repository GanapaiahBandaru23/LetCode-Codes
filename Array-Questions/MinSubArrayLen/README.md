# Minimum Size Subarray Sum

## Problem Statement
Given an array of positive integers `nums` and an integer `target`, find the minimal length of a contiguous subarray of which the sum is at least `target`. If no such subarray exists, return 0.


### example-1 
   Input: target = 7, nums = [2,3,1,2,4,3]
   Output: 2
   Explanation: The subarray [4,3] has the minimal length under the problem constraint.
### exmple-2
   Input: target = 4, nums = [1,4,4]
   Output: 1
### example-3
   Input: target = 11, nums = [1,1,1,1,1,1,1,1]
   Output: 0
 

This problem is a classic example of the **sliding window technique** used to efficiently find the smallest subarray satisfying a sum constraint.

## Solution Approach

- **Sliding Window Algorithm:**  
  We maintain two pointers (`i` and `j`) to represent the current window. We expand the window by moving `j` forward and adding elements to a running sum. Once the sum is greater than or equal to `target`, we shrink the window from the left (`i` moves forward) to try and find a smaller valid window.

- **Time Complexity:** O(n) — Each element is visited at most twice (once when expanding and once when shrinking the window).  
- **Space Complexity:** O(1) — Uses constant extra space.

