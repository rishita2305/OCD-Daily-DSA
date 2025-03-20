//Question 1) 14. Longest Common Prefix
//Approach: Compare prefixes of adjacent strings iteratively, updating the common prefix.
// TC: O(nm) SC: O(1) where m is the number of strings and n lenght of the longest string.
class Solution {
public:
    int range(string a , string b ){
        int s = b.size();
        int n = a.size();
        if(s < a.size()){
            n = s;
        }
        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]){
                return i;
            }
        }
        return n;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string a = strs[0];
        for(int i = 0 ; i < strs.size() - 1 ; i++){
            int n = range(a,strs[i+1]);
            a = a.substr(0, n);
        }
        return a;
    }
};
//Question 2) 242. Valid Anagram
//Approach: Sort both strings and check if they are equal
// TC: O(n log n ) SC: O(1) 
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
