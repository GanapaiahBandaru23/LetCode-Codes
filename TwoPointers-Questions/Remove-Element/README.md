
📝 Problem Statement
Given an integer array nums and an integer val, remove all occurrences of val in-place.
The relative order of the elements may be changed.

After removing the elements, return the number of elements k such that the first k elements of nums do not contain val.

Note: It does not matter what values are left beyond index k.


✅ Constraints
0 <= nums.length <= 100

0 <= nums[i] <= 50

0 <= val <= 100


📥 Input
nums = [3,2,2,3], val = 3
📤 Output
2
📄 Explanation
We need to remove all occurrences of 3 from the array.

Original array: [3,2,2,3]

After removal: [2,2,_,_] (we don’t care about elements after index k)

The function should return k = 2, and the first k elements should be [2,2].



🧪 Example 2
Input:
nums = [0,1,2,2,3,0,4,2], val = 2
Output:
5
Explanation:
After removing all 2s, array becomes [0,1,3,0,4,_,_,_], and k = 5.


