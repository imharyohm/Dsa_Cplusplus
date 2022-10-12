class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> a;
        int count = 1;
        for (int i = 0; i < nums.size;)
        {
            for (int j = i + 1; j < nums.size; j++)
            {
                if (nums[i] == nums[j])
                {
                    a.push_back(nums[i]);
                    count = 2;
                }
                if (count == 2)
                    i = i + 2;
                else
                    i++;
            }
        }
    }
};