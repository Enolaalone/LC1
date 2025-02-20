/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;
//去除重复元素

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k=0;
//         for(auto iter = nums.begin();iter!=nums.end();){
//             //找到val
//             if(*iter==val){
//                 iter = nums.erase(iter);
//             }else{
//                 k++;
//                 iter++;
//             }
//         }
//         return k;
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        //将不相等的元素填到前面
        for(int a:nums){
            if(a!=val){
                nums[k++]=a;
            }
        }
        return k;
    }
};
// @lc code=end

