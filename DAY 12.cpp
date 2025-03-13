//Question 1) 704. Binary Search
//Approach: Finding the target in a sorted array by comparing the middle element with target.
// TC: O(log n)  SC: O(1) 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right= nums.size()-1;
        while(left<=right){
            int mid= left+((right-left)/2);
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};
//Question 2) 34. Find First and Last Position of Element in Sorted Array
//Approach: Uses binary search twice—first to find the first occurrence of target, then to find the last occurrence.
// TC: O(log n)  SC: O(1) 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();
        if (n == 0) return ans;
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) { 
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }
      
        if (left < n && nums[left] == target){
             ans[0] = left;
        }
        else {
            return ans; 
        }
        right = n - 1; 
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        ans[1] = right;

        return ans;
    }
};

//Question 3) 35. Search Insert Position
//Approach: Uses binary search to find the target's position; if not found, returns the left pointer as the correct insertion index.
// TC: O(log n)  SC: O(1) 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size()-1;
        int left = 0;
        while(left<=right){
            int mid = left+ ((right-left)/2);
            if(nums[mid]== target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid - 1;
            }
        }
        return left;
    }
};
