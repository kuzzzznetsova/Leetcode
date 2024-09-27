// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
  
// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

int searchInsert(int* nums, int numsSize, int target) {
    int index;
    if (numsSize == 1){
        if (target <= nums[0]){
            index = 0;
        }
        else {
            index = 1;
        }
    }
    else{
        for (int i = 0; i < numsSize; i ++){
            if (target <= nums[i]){
                index = i;
                break;
            }
        }
    }
    return index;
}
