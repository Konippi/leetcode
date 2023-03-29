class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        map<int, int> mp;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (mp[nums[i]] == 0)
            {
                mp[nums[i]]++;
            }
            else
            {
                nums.erase(nums.begin() + i);
            }
        }

        return nums.size();
    }
};