Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 ---

## ✅ Approach

1. **Sort the array** to handle duplicates easily and use the two-pointer technique.
2. **Fix one element (`nums[i]`)** and use two pointers (`left` and `right`) to find pairs such that `nums[i] + nums[left] + nums[right] == 0`.
3. **Skip duplicates** to ensure unique triplets.
4. Move `left` and `right` accordingly:
   - If sum < 0, move `left` forward
   - If sum > 0, move `right` backward
   - If sum == 0, store the triplet and skip duplicates

---

## 💻 Time & Space Complexity

- **Time Complexity:** `O(n^2)` – due to nested loops (fixed `i` and two-pointer traversal)
- **Space Complexity:** `O(1)` – excluding the space for output list

---
