# 347. Top K Frequent Elements

**Difficulty**: Medium  
**Topics**: Array, Hash Table, Divide and Conquer, Bucket Sort, Counting, Quickselect, Heap (Priority Queue)  

## Problem Description
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in **any order**.

## Complexity Analysis
- **Time Complexity**: $O(N)$ — Linear time using Bucket Sort where index represents frequency.
- **Space Complexity**: $O(N)$ — For Hash Map and Bucket Array storage.

## Solution Explanation
1. Count the frequency of each number using `unordered_map`.
2. Use an array of buckets `buckets[freq]` where the index represents frequency count.
3. Traverse the buckets from right to left (highest frequency to lowest) to collect the `k` most frequent elements.
