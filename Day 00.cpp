// Question 1) https://leetcode.com/problems/concatenation-of-array/
// Concatenation of array
// TC: O(n)  SC: O(n)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr2(2 * n);
    for(int i= 0; i<n; i++){
        arr2[i] = nums[i];
        arr2[i+n] = nums[i];
    }
    return arr2 ;
    }
};


// Question 2) https://leetcode.com/problems/contains-duplicate/description/
// Duplicate elements in array
// TC: O(n)  SC:O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
                break;
            }
        }
        return false;
    }
};
 
