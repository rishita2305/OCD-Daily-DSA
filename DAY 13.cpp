//Question 1)  Ceil The Floor https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
//Approach: Perform two binary searches—one to find the largest element ≤ x (floor) and another to find the smallest element ≥ x (ceil) in a sorted array.
// TC: O(log n)  SC: O(1) 
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int left =0;
	int right = n-1;
	int ceil = -1;
	int floor = -1;
	
	//floor
	while(left<=right){
		int mid= left + ((right-left)/2);
		if(a[mid]<=x){
			floor = a[mid];
			left = mid +1;
		}
		else {
			right = mid -1;
		}
	}
	//ceil
	left = 0;
	right = n-1;
	while(left<=right){
		int mid= left + ((right-left)/2);
		if(a[mid]>=x){
			ceil = a[mid]; 
			right = mid -1;
		}
		else {
			left = mid +1;
		}
	}
	return {floor, ceil};
}
//Question 2) 153. Find Minimum in Rotated Sorted Array
//Approach: Binary search on a rotated sorted array by comparing the middle element with the rightmost element to find the minimum.
// TC: O(log n)  SC: O(1) 
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int right= n-1;
        while(left<right){
             int mid = left + (right-left)/2;
            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
        }
    };

//Question 3) 33. Search in Rotated Sorted Array
//Approach: Binary search on a rotated sorted array by determining the sorted half in each iteration.
// TC: O(log n)  SC: O(1) 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left=0;
        int right= n-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target && target<nums[mid]){
                    right= mid-1;
                }
                else{
                    left=mid+1;
                }}
            else{
                if(nums[mid]<target && target<=nums[right]){
                    left= mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
    
};
