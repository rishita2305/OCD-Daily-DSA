//Question 1)1781. Sum of Beauty of All Substrings
//Approach: calculates the sum of the beauty values (difference between max and min nonzero character frequencies) for all substrings of a given string using a nested loop and a frequency array.
// TC: O(n^2)  SC: O(1) 
class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0; i<s.size();i++){
            int frq[26]={0};
            for(int j=i; j<s.length();j++){
                frq[s[j]-'a']++;
                int maxfrq=0;
                int minfrq=INT_MAX;
                for(int k=0; k<26; k++){
                    if(frq[k]>0){
                    maxfrq=max(maxfrq,frq[k]);
                    minfrq=min(minfrq,frq[k]);}
                }
                ans+=(maxfrq-minfrq);
            }
        }
        return ans;
        
    }
};
//Question 2) 921. Minimum Add to Make Parentheses Valid
//Approach: tracks open and close parentheses counts, It ensures that every unmatched ) is paired with an assumed (.At the end, it adds any leftover ( that don't have a matching ).
// TC: O(n)  SC: O(1) 
class Solution {
    public:
        int minAddToMakeValid(string s) {
            int open = 0;
            int close = 0;
            int i=0;
            int ans = 0;
            while(i<s.size()){
                if(s[i]=='(') {
                    open++;
                }
                else{
                    if(open==close){
                        ans++;
                        open++;
                    }
                    close++;
                }
                i++;
            }
            ans += open - close;
            return ans;
        }
    };
