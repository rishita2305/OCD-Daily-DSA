//Q1) 2549. Count Distinct Numbers on Board
//Approach: all numbers give remainder 1 on dividing it by its previous number and all other numbers will be calculated when doing the same process for 10^9 times.
//TC: O(1) SC: O(1)
class Solution {
public:
    int distinctIntegers(int n) {
        if (n==1){
            return n;
        }
        return n-1;
    }
};
//Q2) Chocolate Distribution Problem (GFG)
//Approach: sorting the array in ascending order and then finding the differences in all m size of arrays
//TC:O(nlogn)  SC:O(1)
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
    int size = a.size();
    if (m == 0 || size < m) return -1;
    sort(a.begin(), a.end());
    int diff= a[m-1]-a[0];
     for (int i = 0; i <= size - m; i++) {
            diff = min(diff, a[i + m - 1] - a[i]);
        }
        return diff;
    }
};

