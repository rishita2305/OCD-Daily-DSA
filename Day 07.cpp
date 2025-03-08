//Question 1) 3364. Minimum Positive Sum Subarray 
//Approach: Using sliding window approach
//TC:O(n^2) SC:O(1)
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int minSum=INT_MAX;
        for(int k=l;k<=r;k++){
            int windowsum=0;
            for(int i=0;i<k;i++){
                windowsum+=nums[i];
            }
            if(windowsum>0){
                minSum=min(minSum,windowsum);
            }
            for(int j=k;j<n;j++){
                windowsum+=nums[j]-nums[j-k];
                if(windowsum>0){
                    minSum=min(minSum,windowsum);
                }
            }
        }
        return (minSum==INT_MAX)?-1:minSum;
    }
};
//Question 2) 605. Can Place Flowers
//Approach: iterating through the flowerbed f, checking if a 0 can be planted without violating the no-adjacent-flowers rule
//TC:O(n)  SC:O(1)
class Solution{
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n==0) return 1;
        if(f.size()==1){
            return !f[0];
        }
        if(f[0]==0 && f[1]==0){
            f[0] = 1;
            n--;
        }
        if(f[f.size()-1]==0 && f[f.size()-2]==0){
            f[f.size()-1] = 1;
            n--;
        }
        
        for(int i=1;i<f.size()-1;i++){
            if(f[i]==0 && f[i+1]==0 && f[i-1]==0){
                f[i] = 1;
                i++;
                n--;
            }
        }
        return (n<=0);
    }
};
