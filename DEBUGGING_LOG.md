# Debugging Log
PRN: 202501100029

## Commit 1 – Personalized Dataset
I created the personalized dataset using the given PRN-based formula. I compiled and executed the program. The dataset displayed all 20 values correctly along with the total number of values and hash table size. No compilation or runtime error occurred.

## Commit 2 – Mid-Square Hash Function
I implemented the Mid-Square hash function by squaring each key, extracting the middle two digits and applying modulo 17. I tested the program with the personalized dataset. The calculated hash indices matched the expected calculations. No compilation or runtime error occurred.

## Commit 3 – Hash Table Structure
Created the hash table structure using an array of vectors. Each index represents a bucket that can store multiple values, supporting the separate chaining collision resolution technique. Added a display function to show all 17 buckets. Compiled and tested the program successfully.