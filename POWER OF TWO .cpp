#include<bits/stdc++.h>
using  namespace std;
class Solution
{
public:
     bool isPowerOfTwo(int n)
     {
          if (n == 0)
               return false;
          return ((n == 1) || (n % 2 == 0 && isPowerOfTwo(n / 2)));
     }
};
// LEETCODE PROBLEM  -  231