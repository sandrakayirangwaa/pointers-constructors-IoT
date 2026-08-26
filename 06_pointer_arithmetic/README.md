# Task 6: Pointer Arithmetic (Explanation)

### Why the outputs match
The outputs match exactly because `arr[i]` and `*(arr + i)` mean the exact same thing to the computer. An index loop explicitly looks up a slot number, while pointer math shifts the memory tracking needle forward element by element.

### Terminal Output
```text
Loop 1: Index Loop
10 20 30 40 50 60 

Loop 2: Pointer Loop
10 20 30 40 50 60 

Address Comparison
Index &arr[0]: 0x7fff76513210  |  Pointer Math (arr + 0): 0x7fff76513210
Index &arr[1]: 0x7fff76513214  |  Pointer Math (arr + 1): 0x7fff76513214
Index &arr[2]: 0x7fff76513218  |  Pointer Math (arr + 2): 0x7fff76513218
Index &arr[3]: 0x7fff7651321c  |  Pointer Math (arr + 3): 0x7fff7651321c
Index &arr[4]: 0x7fff76513220  |  Pointer Math (arr + 4): 0x7fff76513220
Index &arr[5]: 0x7fff76513224  |  Pointer Math (arr + 5): 0x7fff76513224

Size Differences
Size of array in main: 24 bytes
Size of pointer inside function: 8 bytes
```
### Why the `sizeof` numbers differ
* **In main():** `sizeof(arr)` prints **24 bytes** (6 integers × 4 bytes each) because `main` knows the exact allocation size of the complete array block.
* **In the function:** `sizeof(ptr)` prints **8 bytes** (or 4 bytes depending on system architecture). This happens because when you pass an array to a function, it "decays" into a basic pointer. The function doesn't know how big the array is; it only sees the size of the single memory address variable.
