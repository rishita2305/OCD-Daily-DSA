// Question 1) https://leetcode.com/problems/ugly-number/submissions/1556339828/?envType=problem-list-v2&envId=math
//Ugly number
// TC:O(log(n))  SC: O(1)
class Solution {
 public:     
 bool isUgly(int n) {         
    if(n<=0){             
    return false;         
    }         
    while(n>1){             
        if(n%2==0){                 
            n=n/2;             
        }              
        else if(n%3==0){                 
            n=n/3;             
        }             
        else if (n%5==0){                 
                n=n/5;             
            } 
        else{
            break;
        }            
      }         
        return (n==1);     
    } 
};

//Question 2)https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions
//Reverse Bits
//TC: O()  SC:O()
