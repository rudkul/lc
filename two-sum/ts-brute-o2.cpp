class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                    break;
                if ((nums[i] + nums[j]) == target)
                {
                    vector<int> arr;
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }
            }
        }
        vector<int> no_arr;
        no_arr.push_back(-1);
        return no_arr;
    }
};