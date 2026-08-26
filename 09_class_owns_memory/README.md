# Task 9: Class Owns Memory

### Core Concept
This task shows how a class can handle its own dynamic heap memory automatically using constructors and destructors.

### Terminal Output
```text
Opening a code block
Memory allocated on the heap!
Value inside heap: 100
Memory freed safely to prevent leaks!
Closed code block
```
### Summary
* **Constructor (`new`):** Automatically grabs memory from the heap when the object is created.
* **Destructor (`delete`):** Automatically cleans up and frees that memory the moment the object goes out of scope, preventing memory leaks.
