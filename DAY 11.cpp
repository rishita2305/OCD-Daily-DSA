//Question 1) 48. Rotate Image
//Approach: First we create a new matrix called result and by 2 loops we assign the new values in result matrix.
// TC: O(O(n^2)  SC: O(n^2) 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
       
        int rowsize= matrix[0].size();
        vector<vector<int>> result(n, vector<int>(rowsize));
        for(int i=0; i < n; i++){
            for(int j=0; j<rowsize; j++){
                result[i][j]= matrix[n-1-j][i];
            }
        }
        matrix=result;
    }
};
//Question 2) 54. Spiral Matrix
//Approach: 
// TC: O()  SC: O() 

//Question 3) 118. Pascal's Triangle
//Approach: Directly constructs Pascal’s Triangle in-place by initializing boundary values to 1 and filling inner elements using the sum of two elements from the previous row.
// TC: O(n^2)  SC: O(n^2) 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);

        for(int i=0;i<numRows;i++){
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans ;
    }
};
