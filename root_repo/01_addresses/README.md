# Task 1: Where Things Live (Addresses)

### 1. Distance Between Consecutive Variables
The consecutive local variables are allocated very close together in memory because they reside on the stack. The distance between their hex memory addresses corresponds directly to their data type sizes:
* An `int` takes 4 bytes.
* A `double` takes 8 bytes.
* A `char` takes 1 byte.

### Terminal Output
```text
Variable Details 
age: Value=21, Address=0x7fff5abe3b68, Size=4 bytes
price: Value=19.99, Address=0x7fff5abe3b70, Size=8 bytes
grade: Value=A, Address=0x7fff5abe3b67, Size=1 bytes

 Consecutive Variables 
Address of age:   0x7fff5abe3b68
Address of price: 0x7fff5abe3b70
Address of grade: 0x7fff5abe3b67

 Array Details 
Array name address:  0x7fff5abe3b7c
First element ([0]): 0x7fff5abe3b7c
Last element ([2]):  0x7fff5abe3b84

 After declaring brandNewVar 
Address of age still is: 0x7fff5abe3b68
```
### 2. Array Memory Layout
* The memory address of the array name itself is exactly identical to the address of its first element (`&numbers[0]`).
* The gap between each element in the array is exactly 4 bytes. This confirms that the system allocates memory sequentially for integer elements.

### 3. Before and After Check
Declaring a new local variable partway through the execution does not alter or shift the memory addresses of previously declared variables. Their positions on the stack remain static.
