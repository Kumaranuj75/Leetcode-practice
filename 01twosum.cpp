// Two Sum

// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> m;
        vector<int> ans;

        for(int i=0; i<arr.size(); i++){
            int first = arr[i];
            int sec = tar - first;

            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
            }
            m[first] = i;
        }
        return ans;
    }
};