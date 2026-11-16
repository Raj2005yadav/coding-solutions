# FLOW002 - Rating 420

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Find Remainder

Write a program to find the remainder when an integer  **A**  is divided by an integer  **B**.

### Input

The first line contains an integer  **T**, the total number of test cases. Then  **T**  lines follow, each line contains two Integers  **A**  and  **B**.

### Output

For each test case, find the remainder when  **A**  is divided by  **B**, and display it in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ A,B ≤ 10000
### Sample 1:
Input
Output

```
3 
1 2
100 200
40 15
```

```
1
100
10
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T15:39:32.014Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (a % b) << "\n";
    }
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW002)