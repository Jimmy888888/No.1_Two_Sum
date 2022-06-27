#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> myMap;
        vector<int> ans;
        for(int i=0; i < nums.size(); i++)
        {
            //map.find() return element's iterator
            //if nums[i] is not exit in map, map.find() will return 
            //an iterator that == map.end()
            if( myMap.find(nums[i]) != myMap.end() )
            {
                ans.push_back(myMap[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                //see target-nums[i] as the Key
                //because target-nums[i] + nums[i] equal target
                //so this Key equal the suitable element of nums[i]

                //if myMap.find(nums[i+n]) n>1 not equal myMap.end()
                //means nums[i+n] equal the Key
                //and the value of the Key is i
                //means nums[i]+nums[i+n] equal target
                myMap[target - nums[i]] = i;
            }
        }
        return ans;
    }
};
