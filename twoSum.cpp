/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]*/

//As you go through the array, compute the difference of target and the current array element. If the difference also exists in the array, 
//return current array index and the difference index, else, add the difference and index to the hash map.

//Time complexity: O(N), worst case we go through all the elements in the array. O(1), hash look up. Space complexity: O(N) for the hash
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        unordered_map <int, int> hash;
        for(int i = 0; i<nums.size(); i++)
        {
            int number2Find = target - nums[i];
            if (hash.find(number2Find) != hash.end())
            {
                res.push_back(hash[number2Find]);
                res.push_back(i);
                return res;
            }
            hash[nums[i]]= i;
        }
        
    }
};
