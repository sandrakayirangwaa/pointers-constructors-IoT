# Pointers, Constructors, and IoT - Main Project

### Student Information
* **Full Name:** Sandra Kayirangwa
* **Drive Configuration:** 4WD
* **Onshape CAD Link:** 
* **Layout Option:** Option A (Separate Task Folders)

---

### Project Overview
This repository contains a series of lab exercises focused on how memory works in C++. Collectively, these tasks explore how data is stored in the computer's RAM, how to manipulate data directly using memory addresses (pointers) and aliases (references), and how to manually request or release memory using the Heap. These fundamental concepts are essential for optimizing performance on embedded systems and IoT devices.

---

### Task Index

1. [Task 1: Where Things Live (Addresses)](./01_addresses)
2. [Task 2: Pointing at Something (Pointers Basics)](./02_pointer_basics)
3. [Task 3: Making a Function Change the Caller](./03_pointers_functions)
4. [Task 4: The Same Job with References](./04_references)
5. [Task 5: Const References and What They Protect](./05_const_references)
6. [Task 6: Walking an Array with a Pointer](./06_pointer_arithmetic)
7. [Task 7: Asking for Memory and Giving it Back](./07_dynamic_memory)
8. [Task 8: Object Constructors (Folder](./08_constructors) 
9. [Task 9: IoT Control Logic (Folder](./09_iot_logic) 

---

### Personal Reflection
The most challenging part of these exercises was grasping the difference between the Stack and the Heap in Task 7. It was surprising to see how far apart their memory addresses sit in RAM, and it required extra attention to ensure the manually allocated heap memory was cleaned up properly using `delete[]` to avoid leaving dangerous dangling pointers.
# Pointers, Constructors, and IoT - Main Project
