//
// Created by olokreZ on 01.11.2023.
// Link To Problem: https://leetcode.com/problems/palindrome-number/description/
//

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <string>
#include <ranges>
#include <array>
#include <iostream>


class Solution {
public:
	bool isPalindrome(const int num) {
		if (!num) return false;
		std::cout << "b " << (bool)num << std::endl;
		long long r = 0;
		auto t = num;
		while (t) {
				r = r * 10 + t % 10;
				t /= 10;
			}
		return r == num;
	}
};


int main() {
//	std::vector<int> nums = {121, -121, 10, 1224554221};
//
//	Solution solution;
//
//	for (const int &num : nums) {
//			std::cout << num << " : " << solution.isPalindrome(num) << std::endl;
//		}
//
	
	int x = 0;
	
	std::cin >> x;
	
	if (!x)
		std::cout << x << "+" << std::endl;
	else std::cout << x << "-" << std::endl;
	
	return 0;
}