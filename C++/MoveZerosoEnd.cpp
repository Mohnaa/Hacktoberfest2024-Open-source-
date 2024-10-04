class Solution {
> public:
>     void moveZeroes(vector<int>& nums) {
>         vector<int> arr;  // Temporary vector to store non-zero elements
>         
>         // First pass: Add all non-zero elements to the `arr` vector
>         for (int i = 0; i < nums.size(); i++) {
>             if (nums[i] != 0) {
>                 arr.push_back(nums[i]);
>             }
>         }
>         
>         // Second pass: Copy non-zero elements back to `nums`
>         for (int i = 0; i < arr.size(); i++) {
>             nums[i] = arr[i];
>         }
> 
>         // Third pass: Fill the rest of `nums` with zeros
>         for (int i = arr.size(); i < nums.size(); i++) {
>             nums[i] = 0;
>         }
>     }
> };
