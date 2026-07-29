# 1. Two Sum

**Difficulty**: Easy  
**Topics**: Array, Hash Table  

## Problem Description
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

## Complexity Analysis
- **Time Complexity**: $O(N)$ — Single pass through the array.
- **Space Complexity**: $O(N)$ — Storing elements in `unordered_map`.

## Solution Explanation
Using a hash map allows us to check if the complement (`target - current_number`) exists in $O(1)$ constant time instead of $O(N^2)$ brute-force searching.
