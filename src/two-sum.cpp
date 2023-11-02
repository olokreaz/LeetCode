//
// Created by olokreZ on 01.11.2023.
// Link To Problem: https://leetcode.com/problems/two-sum/description/
//


#include <vector>
#include <ranges>
#include <algorithm>
#include <unordered_map>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

// memory
class Solution {
public:
	std::vector<int> twoSum(const std::vector<int>& nums, int target) {
		for (int i = 0; i < nums.size()-1; ++i)
			for (int j = i+1; j < nums.size(); ++j)
				if (nums[i] + nums[j] == target) {
						return {i, j};
					}
		return {};
	}
};

// RT speed
class Solution_ {
public:
	std::vector<int> twoSum(const std::vector<int>& nums, int target) {
		std::unordered_map<int, int> mp;
		const int si = nums.size();
		for(int i=0;i<si;++i){
				auto it = mp.find(target - nums[i]);
				if (it != mp.end() && i != it->second) {
						return {i, it->second};
					}
				mp[nums[i]] = i;
			}
		return { };
	}
};


void Worker(const std::vector<int> vec, int target) {
	static Solution solution;
	fmt::println("{} :{} : {}",vec, solution.twoSum( vec, target ), target);;
}

int main (int,char**) {
	
	
	Worker({2,7,11,15}, 9);
	Worker({3,2,4}, 6);
	Worker({3,3}, 6);
	
	return 0;
}