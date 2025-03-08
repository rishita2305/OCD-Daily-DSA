//DAY 3
//Q1) GOOD BAD STRING
//APPROACH: counting the number of consecutive vowels or consonants and then comparing them to find out if the string is bad or not.
// TC: O(n)  SC:O(1) where n = length of string
class Solution {
  public:
    int isGoodorBad(string S) {
        int v=0;
        int c=0;
        for(int i=0; i<S.length(); i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
                v++;
                c=0;
            } 
            else if(S[i]=='?'){
                v++;
                c++;
            }
            else{
                c++;
                v=0;
            }
        
        if(v>5 || c>3){
            return 0;
        }
        }
        return 1;
    }
};

//Q2) 2570. Merge Two 2D Arrays by Summing Values
//APPROACH: adding the same id's values and appending the rest in the res vector.
//TC: O(n+m) SC:O(n+m) where n and m are size of the 2 vectors
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        int i = 0, j = 0;        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] == nums2[j][0]) {
                res.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++; j++;
            } 
            else if (nums1[i][0] < nums2[j][0]) {
                res.push_back(nums1[i]);
                i++;
            } 
            else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1.size()) {
            if (res.empty() || res.back()[0] != nums1[i][0]) {
                res.push_back(nums1[i]);
            }
            i++;
        }
        while (j < nums2.size()) {
            if (res.empty() || res.back()[0] != nums2[j][0]) {
                res.push_back(nums2[j]);
            }
            j++;
        }
        return res;
    }
};
