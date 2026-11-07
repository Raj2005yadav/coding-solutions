# Island Perimeter

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given `row x col` `grid` representing a map where `grid[i][j] = 1` represents land and `grid[i][j] = 0` represents water.

Grid cells are connected  **horizontally/vertically**  (not diagonally). The `grid` is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

 

 **Example 1:** 

```
Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
Explanation: The perimeter is the 16 yellow stripes in the image above.

```

 **Example 2:** 

```
Input: grid = [[1]]
Output: 4

```

 **Example 3:** 

```
Input: grid = [[1,0]]
Output: 4

```

 

 **Constraints:** 

- row == grid.length
- col == grid[i].length
- 1 <= row, col <= 100
- grid[i][j] is 0 or 1.
- There is exactly one island in grid.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 41.44%)  
**Memory:** 102 MB (beats 57.94%)  
**Submitted:** 2026-11-07T18:42:22.507Z  

```cpp
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        // int rows = grid.size();
        // int cols = grid[0].size();
        // int perimeter = 0;

        // for (int i = 0; i < rows; ++i) {
        //     for (int j = 0; j < cols; ++j) {
        //         if (grid[i][j] == 1) {
        //             perimeter += 4;

        //             // If the upper neighbor is also land, subtract the shared boundary
        //             if (i > 0 && grid[i - 1][j] == 1) {
        //                 perimeter -= 2;
        //             }

        //             // If the left neighbor is also land, subtract the shared boundary
        //             if (j > 0 && grid[i][j - 1] == 1) {
        //                 perimeter -= 2;
        //             }
        //         }
        //     }
        // }

        // return perimeter;

        int m=grid.size();
        int n=grid[0].size();

        int perimeter=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){

                    // yeh jo 1st condition likha hai if mai woh bata raha hai ki agar grid k bahar ja rha hai toh 2nd conditon galat ho jayega or agar first true hai toh count kar lenge .
                    // first conditon bolna cha rha hai ki agar existance nahi hai toh usse as a boundry count karenge..
                    if(i==0 || grid[i-1][j]==0){
                        perimeter++;
                    }
                    if(i==m-1 || grid[i+1][j]==0){
                        perimeter++;
                    }
                    if(j==0 || grid[i][j-1]==0){
                        perimeter++;
                    }
                    if(j==n-1 || grid[i][j+1]==0){
                        perimeter++;
                    }
                }

            }
        }
        return perimeter;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/island-perimeter/)