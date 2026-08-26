# Task 5: Const References (Explanation)

### The Compiler Error
When trying to change `r.batteryPercent = 100;` inside the `const` function, the compiler stops building and throws an error like:
* `"error: assignment of member 'Robot::batteryPercent' in read-only object"`

### Terminal Output
```text
Size of Robot struct: 84 bytes

Robot Info (Const Reference)
Name: RoboOne
Battery: 85%
Speeds: 1.5, 1.5

[Inside Function] Changed copy battery to: 50%
[In Main] Original robot battery is still: 85%
```
### Why Pass-by-Value Left the Original Unchanged
When we pass `myRobot` to `modifyRobotByValue`, the computer duplicates all 84 bytes of the structure into a new workspace. The function only edits this temporary copy. Once the function finishes, that copy disappears, leaving the original in `main()` untouched.

### What `const` Buys You Here
Using a **plain reference** (`Robot& r`) passes the original object quickly without making a copy, but it allows the function to accidentally change your data. 

Adding **`const`** gives you the best of both worlds:
1. **Speed:** It passes the original object instantly without wasting memory on a copy.
2. **Safety:** It locks the data down as read-only so the function cannot modify it.
