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