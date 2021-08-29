//Input: nums = [0,1]
//Output: 2
//Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

int findMaxLength(vector<int>& nums) {
  int sum = 0;
        int n = nums.size();
        int max_len = 0;
        unordered_map<int, int> A;
        for(int i=0; i<n; i++)
        {
            sum+=(nums[i]==0)?-1:1;
            if(A.find(sum)==A.end())
                A[sum] = i;
            if(sum==0)
                max_len = max(max_len, i+1);
            else
            {
                if(A.find(sum)!=A.end())
                    max_len = max(max_len,i-A[sum]);
            }
        }
        return max_len;      
    }
};
//
//[1]
//[0,1,0]
//output
//0
//2
