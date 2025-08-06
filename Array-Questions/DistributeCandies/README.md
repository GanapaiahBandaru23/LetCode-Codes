# Distribute Candies (LeetCode 575)

## Problem Statement
Alice has `n` candies, where the candies are represented by an integer array `candyType` of length `n`. Each candy type is represented by a unique integer.  
Alice wants to eat **n / 2** candies, but she wants to maximize the number of different types of candies she eats.  

Return the **maximum number of different types of candies Alice can eat**.

---

## Example
**Input:**
Example 1:

Input: candyType = [1,1,2,2,3,3]
Output: 3
Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.
Example 2:

Input: candyType = [1,1,2,3]
Output: 2
Explanation: Alice can only eat 4 / 2 = 2 candies. Whether she eats types [1,2], [1,3], or [2,3], she still can only eat 2 different types.
Example 3:

Input: candyType = [6,6,6,6]
Output: 1
Explanation: Alice can only eat 4 / 2 = 2 candies. Even though she can eat 2 candies, she only has 1 type.