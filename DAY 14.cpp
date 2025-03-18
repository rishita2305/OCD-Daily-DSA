//Question 1) Square Root
//Approach: Uses binary search to find the floor value of the square root by narrowing the search space based on mid * mid comparisons.
// TC: O(log(n))  SC: O(1) 
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int left = 1;
        int right = n;
        int ans=0;
        while(left<=right){
            int mid = left + ((right - left)/2);
            if(mid*mid==n){
                return mid;
            }
            else if (mid*mid<n){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid -1;
            }
        }
        return ans;
    }
};
//Question 2) 875. Koko Eating Bananas
//Approach: Uses binary search on the possible eating speeds (1 to max(piles)) to find the minimum speed k such that all bananas are eaten within h hours.
// TC: O(n log m) where n is number of piles and m is maximum number of bananas in a pile SC: O(1) 
class Solution {
public:
    bool canEat(vector <int> piles ,int mid, int h){
        int hours=0;
        for (int i = 0; i < piles.size(); i++){
            hours+= piles[i]/mid;
             if(piles[i]%mid!=0){
                hours++;
             }
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(begin(piles), end(piles));
        while(l<r){
            int hours=0;
            int mid = l +(r-l)/2;
            if (canEat(piles, mid, h)){
                r = mid;
            }
            else{
                l= mid+1; 
            }
        }
            return l;
    }
};
//Question 3) 1283. Find the Smallest Divisor Given a Threshold
//Approach: Uses binary search on the divisor range just like previous question.
// TC: O(n log m) m = max(nums) operating n times  SC: O(1) 
class Solution {
public:
    bool less(vector <int> nums ,int mid, int threshold){
        int x=0;
        for (int i = 0; i < nums.size(); i++){
            x+= ceil(nums[i]/mid);
            if(nums[i]%mid!=0){
                x++;
             }
        }
        return x<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(begin(nums), end(nums));
        while(l<r){
            int sum=0;
            int mid = l +(r-l)/2;
            if (less(nums, mid, threshold)){
                r = mid;
            }
            else{
                l = mid+1; 
            }
        }
            return l;
    } 
};
