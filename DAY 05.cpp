//Question 1) 2591. Distribute Money to Maximum Children
//Approach: giving all the children 1 dollar and then counting total numbers of 7s possible by dividing and finding remainder with 7 and taking 3 cases.
//TC:O(1) SC:O(1)
class Solution {
public:
    int distMoney(int money, int children) {
        int rem= money - children;
        if(rem<0){
            return -1;
        }
        int count7= rem/7;
        int leftover = rem%7;
        if(count7 < children){
            int except8 = children - count7;
            if(leftover==3 && except8==1){
                return max(0, count7 - 1);
            }
            else{
                return count7;
            }
        }
        else if(count7> children){
            return children -1;
        }
        else{
            if(leftover==0){
                return children;
            }
            else{
                return count7 - 1;
            }
        }
    }
};

//Question 2) 409. Longest Palindrome
//Approach: Storing all the unique pairs together in an unordered set and adding 1 non pair to the total number of characters which could make the longest palindrome.
//TC: O(n)  SC: O(n) 
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int result=0;
        for(char &ch : s){
            if(st.count(ch)){
                result+=2;
                st.erase(ch);
            }
            else{
                st.insert(ch);
            }
        }
        if(!st.empty()){
            result+=1;
        }
        return result;
    }
};
