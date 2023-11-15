class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (abs(arr[i] - arr[i - 1]) <= 1)
                continue;
            else
                arr[i] = arr[i - 1] + 1;
        }

        return arr.back();
    }
};

// TLE Coming Solution -:
/* int size=arr.size();
         if(size==1)
         return 1;
         if(arr[0]!=1){
             bool isOne=false;
             for(int i=1;i<size;i++){
                 if(arr[i]==1){
                      swap(arr[i],arr[0]);
                      break;
                      isOne=true;
                 }

             }
             if(isOne==false)
             arr[0]=1;
              }


             for(int i=0;i<size-1;i++){
                 if((abs(arr[i+1]-arr[i]))>1){
                     bool check =false;
                     for(int j=i+1;j<size;j++){
                         if((abs(arr[i]-arr[j]))<=1){
                             swap(arr[i+1],arr[j]);
                             check=true;
                         }
                     }
                     if(check==false){
                         arr[i+1]=arr[i]+1;
                     }
                 }
             }
             int maxElement=arr[0];
             for(int i=0;i<size;i++){
                 maxElement=max(maxElement,arr[i]);
             }

       return maxElement;*/