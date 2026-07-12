/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // 哈希表：key=排序后的字符串，value=异位词分组
        unordered_map<string, vector<string>> mp;

        // 遍历每个字符串
        for (string& s : strs) {
            // 排序：生成唯一key
            string key = s;
            sort(key.begin(), key.end());
            // 加入对应分组
            mp[key].push_back(s);
        }

        // 把哈希表的值转成结果数组
        vector<vector<string>> res;
        for (auto& pair : mp) {
            res.push_back(pair.second);
        }
        return res;
    }
};

/*

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<string> strs;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		strs.push_back(s);
	}
	
	unordered_map<string,vector<string>> mp;
	for(string& s:strs){
		string key=s;
		sort(key.begin(),key.end());
		mp[key].push_back(s);
	}
	
	vector<vector<string>> res;
	for(auto& p:mp){
		res.push_back(p.second);
	}
	
	for (auto& group : res) {
	    for (auto& word : group) {
	        cout << word << " ";
	    }
	    cout << endl;
	}
} 

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}

*/