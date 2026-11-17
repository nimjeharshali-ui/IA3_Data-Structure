# Debugging Log
PRN: 202501100029

## Commit 1 – Personalized Dataset
I created the personalized dataset using the given PRN-based formula. I compiled and executed the program. The dataset displayed all 20 values correctly along with the total number of values and hash table size. No compilation or runtime error occurred.

## Commit 2 – Mid-Square Hash Function
I implemented the Mid-Square hash function by squaring each key, extracting the middle two digits and applying modulo 17. I tested the program with the personalized dataset. The calculated hash indices matched the expected calculations. No compilation or runtime error occurred.

## Commit 3 – Hash Table Structure
Created the hash table structure using an array of vectors. Each index represents a bucket that can store multiple values, supporting the separate chaining collision resolution technique. Added a display function to show all 17 buckets. Compiled and tested the program successfully.

## Commit 4 – Insertion Using Separate Chaining
Implemented the insertion operation using the mid-square hash function. Each student mark was assigned to its calculated bucket. When multiple values mapped to the same index, they were stored together using a vector, preserving the insertion order. Tested the program with all 20 values.

## Commit 5 – Collision Detection
Added collision detection to the insertion function. Before inserting a value, the program checks whether the calculated bucket is already occupied. If occupied, it records and displays a collision. The program successfully identified collisions while preserving all values using separate chaining.

## Commit 6 – Search and Verification
Implemented a search function using the mid-square hash function. The search operation calculates the bucket index and searches for the required key within that bucket. Tested all 20 personalized values and successfully verified that every value was found.

## Commit 7 – Final Testing and Validation

Performed final testing of the hash table program. Verified that all 20 personalized dataset values were successfully found using the search function. Also tested the search function with 9999, a value not present in the dataset. The program correctly reported that the value was not found. Both search tests passed successfully.

## Failed Approach – Incorrect Mid-Square Digit Extraction

I initially tried using substr(0, 2) to extract two digits from the squared key. However, this extracted the first two digits instead of the middle two digits. For example, for key 29, the square was 0841, and the incorrect extraction gave 08 instead of 84. This produced incorrect hash table positions. I rejected this approach and restored substr(1, 2), which correctly extracts the middle two digits. After restoring it, the program worked with the intended hash function.