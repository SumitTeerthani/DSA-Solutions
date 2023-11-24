class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int ptr1, ptr2;
        int ans = 0;
        if (piles.size() == 3)
            return piles[1];
        ptr1 = 1;
        ptr2 = piles.size() - 1;

        sort(piles.begin(), piles.end(), greater<int>());
        while (ptr1 < ptr2)
        {
            ans = ans + piles[ptr1];
            ptr1 = ptr1 + 2;
            ptr2 = ptr2 - 1;
            ;
        }
        return ans;
    }
};

/*   TLE Solution
vector<int>temp;
        temp=piles;
        int ans=0;
         while(temp.size()>=3){
          sort(temp.begin(),temp.end());
          int n=temp.size();
          ans+=temp[n-2];
          auto it=temp.begin();
          temp.erase(it+n-1);
           temp.erase(it+n-2);
            temp.erase(it);

         }

return ans;
*/