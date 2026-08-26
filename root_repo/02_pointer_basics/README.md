# Task 2: Pointing at Something (Pointers)

### Variable vs. Pointer Memory Role
* **Variable:** Stores an actual value directly in memory (e.g., the literal integer `50`).
* **Pointer:** Stores a memory address that tells the program where another variable is located in the computer's RAM.

### Terminal Output
```text
Initial State
Variable value:50
Pointer holds address:0x7ffe7f275898
Dereferenced pointer: 50

 After changing variable directly
Variable value:100
Dereferenced pointer:100

 After changing via pointer
Variable value:200
Dereferenced pointer:200

 After switching pointer to secondNumber
Pointer holds address:0x7ffe7f27589c
Dereferenced pointer: 777
```
### Proof of Shared Memory
By using the dereference operator (`*`), modifying the data through the pointer instantly changes the original variable value. This proves that both the variable name and the pointer reference the exact same underlying memory slot.
