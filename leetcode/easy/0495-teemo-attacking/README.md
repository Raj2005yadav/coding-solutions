# Teemo Attacking

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Our hero Teemo is attacking an enemy Ashe with poison attacks! When Teemo attacks Ashe, Ashe gets poisoned for a exactly `duration` seconds. More formally, an attack at second `t` will mean Ashe is poisoned during the  **inclusive**  time interval `[t, t + duration - 1]`. If Teemo attacks again  **before**  the poison effect ends, the timer for it is  **reset**, and the poison effect will end `duration` seconds after the new attack.

You are given a  **non-decreasing**  integer array `timeSeries`, where `timeSeries[i]` denotes that Teemo attacks Ashe at second `timeSeries[i]`, and an integer `duration`.

Return  *the  **total**  number of seconds that Ashe is poisoned*.

 

Original
C++
 **Example 1:** 

```
Input: timeSeries = [1,4], duration = 2
Output: 4
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.

```

 **Example 2:** 

```
Input: timeSeries = [1,2], duration = 2
Output: 3
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.
```

 

 **Constraints:** 

- 1 <= timeSeries.length <= 104
- 0 <= timeSeries[i], duration <= 107
- timeSeries is sorted in non-decreasing order.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 29.6 MB (beats 79.75%)  
**Submitted:** 2026-11-17T16:57:27.595Z  

```cpp
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=0;

        for(int i=0;i<timeSeries.size();i++){
            if(i==timeSeries.size()-1){
                total+=duration;
            }
            else{
                int gap=timeSeries[i+1]-timeSeries[i];
                total+=min(gap,duration);
            }
        }
        return total;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/teemo-attacking/)