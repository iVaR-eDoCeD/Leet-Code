/*           7. Reverse Integer

  Time complexity:- O(n)

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        //This variable will store the reversed integer.

        long ans=0;

        //This is a while loop that continues as long as the
        //   input integer x is not equal to 0. Inside the loop, 
        //            the following steps are performed repeatedly:
        while(x!=0){
            int digit=x%10;
            ans= ans*10 + digit;
            x=x/10;
        }

        //If ans is within the valid int range, 
        //  it is returned as the result of the reverse function.
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        return ans;
    }
};