class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        deque<int> dq;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                dq.push_front(nums[i]);
            else
                dq.push_back(nums[i]);
        }
        int i=0;
        for(auto it=dq.begin();it!=dq.end();it++)
        {
            nums[i++]=*it;
        }
        return nums;
    }
};


// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) 
//     {
//         int i=0,j=nums.size()-1;
//         while(i<j)
//         {
//             if(nums[i] % 2 > nums[j] % 2)
//             {
//                 swap(nums[i],nums[j]);
//             }
//             if(nums[i]%2==0) i++;
//             if(nums[j]%2==1) j--;
//         }
//         return nums;
//     }
// };
