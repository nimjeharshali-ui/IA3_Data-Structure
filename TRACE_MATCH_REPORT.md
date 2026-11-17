PRN : 202501100029
DataSet: Student marks
Hash Method : Mid-square
collision handling : Separate chaining
Table Size : 17

predicated hash table

Index             Predicated value
   0                   Empty
   1                     72
   2                    55->37
   3                   Empty
   4                     7
   5                   81->85
   6                   20->24
   7                   Empty
   8                    42->33
   9                    98->76
   10                  Empty
   11                 68->46->63
   12                     11
   13                  Empty
   14                   59 
   15                   94
   16                29->50


   ## Prediction Method

I calculated the square of each key, extracted the middle two digits, and applied modulo 17 to obtain the hash index. When multiple keys produced the same index, I placed them in the same linked chain using separate chaining.

## Actual Program Output

After compiling and running the final corrected C++ program, the following hash table was obtained:

 Index  Actual values 

 0         Empty 
 1          72 
 2        55 → 37 
 3         Empty 
 4           7 
 5        81 → 85  
 6        20 → 24 
 7         Empty 
 8        42 → 33 
 9        98 → 76 
 10        Empty 
 11     68 → 46 → 63 
 12          11 
 13         Empty 
 14          59   
 15          94 
 16        29 → 50 

## Prediction vs Actual Comparison

The predicted hash table matched the actual output of the program at every index. No mismatch was observed.

All 20 personalized values were inserted successfully. The program reported 20/20 values found and detected 8 collisions.

## Conclusion

The hash table implementation successfully demonstrated the mid-square hashing technique with separate chaining. The prediction and actual execution results matched, confirming the correctness of the implementation.