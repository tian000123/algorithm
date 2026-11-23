#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution{
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs){
		unordered_map<string,vector<string>> mp;
		for(auto &str : strs){
			string key = str;
			sort(key.begin(),key.end()); 
			// 卡点1：如何对每个字母进行排序
			mp[key].push_back(str); // 把题目给的单词放入哈希表中
		}
		vector<vector<string>> ans;
		for(auto &p : mp){ // 卡点2:如何把mp中value放入ans
			ans.push_back(p.second);
		}
		return ans;
	}
};
int main(){
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	Solution sol;
	vector<vector<string>> result = sol.groupAnagrams(strs);
	for(auto & i : result){
		for(auto &j : i){
			cout << j << endl;
		}
	}

	return 0;
}
