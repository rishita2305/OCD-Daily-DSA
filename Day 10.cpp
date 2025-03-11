//Question 1) 2149. Rearrange Array Elements by Sign
//Approach: Making new vecotrs and storing positive and negative elements in it, then adding them alternatively in the nums array.
// TC: O(n)  SC: O(n) 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        int k=0;
        vector<int> positive;
        vector<int> negative;
        for(int i =0; i < n; i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        for(int i =0; i<n; i++){
            if(i%2==0){
                nums[i]=positive[j];
                j++;
            }
            else{
                nums[i]= negative[k];
                k++;
            }
        }
        return nums;
    }
};
//Question 2) 31. Next Permutation
//Approach:  
// TC: O()  SC: O() 

//Question 3) 121. Best Time to Buy and Sell Stock
//Approach:  
// TC: O(n)  SC: O(1) 
//pyhton code
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res=0
        for left in range(len(prices)):
            for right in range(left+1,len(prices)):
                res= max(res, prices[right]-prices[left])
        return res
