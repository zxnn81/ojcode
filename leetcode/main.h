

#ifndef MAINH

#include <stdio.h>
#include <stdint.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stack>
#include <set>

using namespace std;

#define MAINH
#endif

int hammingWeight(uint32_t n);
vector<int> majorityElementII(vector<int>& nums);
vector<string> summaryRanges(vector<int>& nums);
int calculate(string s) ;
vector<int> twoSum(vector<int>& nums, int target);
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
int lengthOfLongestSubstring(string s);