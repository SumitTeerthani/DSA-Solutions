class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        string ans;
        for (int i = 0; i < nums.size(); ++i)
        {
            ans += (nums[i][i] == '0' ? '1' : '0');
        }

        return ans;
    }
};

/*
long long int findbinaryNumber(long long int n){
          long long int binarynumber = 0,i = 1;
    // Given decimal number n=11.
    long long int remainder;

    // While loop
    // Loop termination condition.
    while(n!=0)
    {
        remainder = n % 2;

        // Divide the number by 2.
        n = n / 2;
        binarynumber = binarynumber+remainder * i;

        // To increase the place value.
        i=i*10;
    }
    return binarynumber;
      }

*/

/*
unordered_set<int>s;
        string ans;
        long long int n=nums[0].length();
        if(nums.size()==1){
            if(nums[0]=="1")
            return "0";
            else
            return "1";
        }
        for(long long int i=0;i<nums.size();i++){
        long long int number=stoi(nums[i]);
        s.insert(number);
        }
        long long int k=n;
        while(k>0){
            ans=ans+"0";
            k--;
        }
        long long int start=pow(2,n-1),end=pow(2,n);
        bool temp=true;
        for(long long int i=start;i<end;i++){
            long long int number=findbinaryNumber(i);
            if(s.find(number)==s.end()){
                ans=to_string(number);
                temp=false;
                break;
            }
            if(temp){

            }
        }
return ans;
*/