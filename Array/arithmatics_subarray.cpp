class Solution
{
public:
    // bool isAp(vector<int>&v){
    //     if (v.size()==2)
    //     return true;
    //     sort(v.begin(),v.end());
    //     int diff=v[1]-v[0];
    //     for(int i=0;i<v.size()-1;i++){
    //          if(v[i+1]-v[i]  != diff)
    //          return false;
    //     }
    //     return true;
    // }

    //   bool makearray(vector<int>& nums,int l,int r){
    //       vector<int>v;
    //       for(int i=l;i<=r;i++){
    //        v.push_back(nums[i]);
    //       }

    //    bool ans =isAp(v);
    //    return ans;  }

    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {

        vector<bool> answer;
        int i = 0;

        while (i < l.size())
        {
            if ((r[i] - l[i] + 1) == 2)
            {
                answer.push_back(true);
                i++;
                continue;
            }
            bool temp = false;

            int start = l[i], end = r[i];

            vector<int> v;
            for (int j = start; j <= end; j++)
            {
                v.push_back(nums[j]);
            }
            sort(v.begin(), v.end());
            int diff = v[1] - v[0];
            for (int j = 0; j < v.size() - 1; j++)
            {
                if ((v[j + 1] - v[j]) != diff)
                    temp = true;
            }

            if (temp)
                answer.push_back(false);
            else
                answer.push_back(true);
            i++;
        }

        return answer;
    }
};