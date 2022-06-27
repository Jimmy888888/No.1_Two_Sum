/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
    let myMap = new Map();
    for(let i=0; i < nums.length; i++)
    {
        myMap.set(nums[i],i);
    }
    for(let j=0; j < nums.length; j++)
    {
        let goal = target - nums[j];
        if(myMap.has(goal) && j != myMap.get(goal))
        {
            return[j, myMap.get(goal)];
            
        }
    }
};

let numbers = [1,2,3,4];
let ttar = 3;

let debugg = twoSum(numbers, ttar);
console.log(debugg);