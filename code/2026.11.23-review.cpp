#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            int temp = target - nums[i];
            if(mp.count(temp)){
                return {i,mp[temp]};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};

int main(){

    return 0;
}