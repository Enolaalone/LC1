/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //双指针；
        int k=0;
        for(int c:nums){
            if(nums[k]!=c){
                k++; 
                nums[k]=c;
            }
        }
        return ++k;
    }
};
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             if(!mp.count(nums[i])){
//                 nums[k++]=nums[i];
//                 mp[nums[i]]++;
//             }
//         }
//         return k;
//     }
// };
// @lc code=end

