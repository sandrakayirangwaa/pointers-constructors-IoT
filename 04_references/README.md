# Task 4: Functions with References (Explanation)

### What we observed about the Memory Addresses:
When printing the address of the variable in `main()` and comparing it to the address of `numRef` inside the function, **they are exactly the same.** 
This proves that a reference does not create a copy or a new pointer variable; it is simply a nickname or an "alias" for the original variable.

### Terminal Output
```text
Testing Double Reference
Address in main:         0x7ffe485905bc
Before double: 10
Address inside function: 0x7ffe485905bc
After double:  20

Testing Swap Reference
Before swap: x = 5, y = 99
After swap:  x = 99, y = 5
```
### Two practical differences between Pointers and References:

1. **No Cluttered Syntax:** 
   * With **pointers**, you have to pass addresses using `&myNum` and constantly use stars `*numPtr` to look inside them. 
   * With **references**, you just write the code exactly like normal variables without any extra symbols.

2. **Safety and Reliability:** 
   * A **pointer** can be created empty, set to point to nothing (`nullptr`), or changed to point to something else entirely later on.
   * A **reference** must be bound to a real, existing variable the exact second it is created, and it can never be switched to look at a different variable.
