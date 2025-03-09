//Question 1) 283. Move Zeroes
//Approach: Firstly moving all the non zero numbers at the beginning of the array and then adding zeros in the leftover indices at the end.
// TC: O(n)  SC: O(1) where n is size of the array
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[index]= nums[i];
                index++;
            }
        }
        while(index < nums.size()){
            nums[index]=0;
            index++;
        }
        
    }
};
//Question 2) 189. Rotate Array
//Approach 1: making a new vector result and storing the last k elements first and then the rest of the elements after that in result array, at the end copying the result array in nums array.
// TC: O(n) SC: O(n) 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> result(n);
       if(n<k){
        k = k%n;
       }
       for (int i = 0; i < k; i++) {
        result[i] = nums[n - k + i];
        }
       for(int i = 0; i < n-k ; i++){
        result[k+i] = nums[i];
       }
    nums = result;
    }
};
//Approach 2: reversing the entire array first and then reversing the first k elements then the n-k elements.
// TC: O(n) SC:O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       k=k%n;
       reverse(nums.begin(),nums.begin()+(n-k));
       reverse(nums.begin()+(n-k),nums.end());
       reverse(nums.begin(),nums.end());
    }
};
