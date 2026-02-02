# towers-of-hanoi
Recursive C++ solution to the classic Towers of Hanoi puzzle
# Towers of Hanoi - Recursive Solution

A C++ implementation of the classic Towers of Hanoi puzzle using recursive algorithms.

## About

This program solves the legendary Towers of Hanoi problem, where priests must move a stack of 64 disks from one peg to another following specific rules:
- Only one disk can be moved at a time
- A larger disk cannot be placed on top of a smaller disk
- Three pegs are available (source, destination, and temporary)

## Algorithm

The solution uses a recursive approach:
1. Move n-1 disks from source to temporary peg
2. Move the largest disk from source to destination
3. Move n-1 disks from temporary to destination peg

**Time Complexity:** O(2^n)  
**Space Complexity:** O(n) for recursion stack
