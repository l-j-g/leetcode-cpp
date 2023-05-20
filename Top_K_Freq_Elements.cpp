#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<string>> groupAnagrams(vector<string> &strs)
	{

		// First loop

		vector<vector<string>> result;
		std::unordered_map<string, vector<string>> anagram_groups;

		for (auto s : strs)
		{
			string key = s;
			sort(key.begin(), key.end());
			anagram_groups[key].push_back(s);
		}

		for (auto key : anagram_groups)
		{
			result.push_back(key.second);
		}

		return result;
	};
};

int main()
{
	Solution s;
	vector<string> testcase = {"eat", "tea", "tan", "ate", "nat", "bat"};

	auto answer = s.groupAnagrams(testcase);
}
