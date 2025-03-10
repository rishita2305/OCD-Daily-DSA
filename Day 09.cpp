//Question 1) 1. Two Sum
//Approach:  Uses a hash map (unordered_map) to store previously seen numbers and their indices, checking for the complement 
// TC: O(n)  SC: O(n) 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; 
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {map[complement], i}; 
            }
            else{
            map[nums[i]] = i; 
            }
        }
        return {}; 
    }
};

//Question 2) 75. Sort Colors
//Approach: Iterating through entire array to keep a count of zeros, ones and twos and then adding them to the nums array.
// TC: O(n)  SC: O(1) 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0; 
        int one=0; 
        int two=0;
        for(int i =0; i< nums.size() ; i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        for(int i = 0; i<zero; i++){
            nums[i]=0;
        }
        for(int i = 0 ; i < one; i++){
            nums[i+zero] = 1;
        }
        for(int i=0; i < two ; i++){
            nums[i+zero+one]=2;
        }
    }
};

//Question 3) Maximum Score from Subarray Minimums
//Approach: Iterating through entire array and adding every pairs to check for maximum sum
// TC: O(n)  SC: O(1) 
class Solution {
  public:
    
    int pairWithMaxSum(vector<int> &arr) {
        int maxsum=INT_MIN;
        for(int i=0;i<arr.size()-1;i++){
            maxsum=max(maxsum,(arr[i]+arr[i+1]));
        }
        return maxsum;
    }
};
