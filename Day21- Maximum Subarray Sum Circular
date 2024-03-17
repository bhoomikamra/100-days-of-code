#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int total_sum = 0; // Total sum of the array
    int max_sum = nums[0]; // Maximum subarray sum without circular rotation
    int min_sum = nums[0]; // Minimum subarray sum without circular rotation
    int curr_max = nums[0]; // Current maximum subarray sum
    int curr_min = nums[0]; // Current minimum subarray sum
    
    for (int num : nums) {
        total_sum += num;
        
        // Calculate maximum subarray sum without circular rotation
        curr_max = max(num, curr_max + num);
        max_sum = max(max_sum, curr_max);
        
        // Calculate minimum subarray sum without circular rotation
        curr_min = min(num, curr_min + num);
        min_sum = min(min_sum, curr_min);
    }
    
    // If all elements are negative, return the maximum element
    if (max_sum < 0) {
        return max_sum;
    }
    
    // Maximum subarray sum with circular rotation would be total sum - minimum subarray sum
    return max(max_sum, total_sum - min_sum);
}

int main() {
    vector<int> nums = {3, -1, 2, -1};
    cout << "Maximum Subarray Sum Circular: " << maxSubarraySumCircular(nums) << endl;
    return 0;
}
