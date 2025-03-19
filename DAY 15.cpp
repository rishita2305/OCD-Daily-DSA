//Question 1) K-th element of two Arrays
//Approach: Merge two sorted arrays using two-pointer technique and return the k-th element.
// TC: O(m+n) SC: O(m+n) where m and n are size of vector a and b 
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
    vector<int> ans;
    int j=0;
    int i=0;
    while(i<a.size() && j< b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
            ans.push_back(a[i]);
            i++;
        }
    while (j < b.size()) {
            ans.push_back(b[j]);
            j++;
        }
    return ans[k-1];
    }
};

//Question 2) 74. Search a 2D Matrix
//Approach: Uses binary search on a flattened 2D matrix, treating it as a 1D array (mid/n for row, mid%n for col).
// TC: O(log (m * n))  SC: O(1) 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 0;
        int end = m*n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            int row = mid/n;
            int col = mid%n;
            if(matrix[row][col] > target){
                end = mid-1;
            }
            else if(matrix[row][col] < target){
                start = mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
//Question 3) 240. Search a 2D Matrix II
//Approach: Binary search in every row of the matrix to find the target
// TC: O(m log n )  SC: O(1) 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size()-1;
        int n = matrix[0].size();
        while(m>=0){
            int start = 0;
            int end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(matrix[m][mid] > target){
                end = mid-1;
            }
            else if(matrix[m][mid] < target){
                start = mid+1;
            }
            else{
                return true;
            }
        }
        m--;
    }
        return false;
    }    
};
