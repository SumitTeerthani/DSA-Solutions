/* TLE Solution
 int ans=0;
     bool allEqual=false;
     while(allEqual==false){
         bool areEqual=true;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]!=nums[i+1])
          areEqual=false;
      }
      if(areEqual==true){
      allEqual=true;
       return ans;
      }

      else{
        //   vector<int>v;
         findlargest(nums);
        ans++;
      }

     }
return ans;


void findlargest(vector<int>& nums){
    int largest=0,secondlargest;
    for(int i=1;i<nums.size();i++){
      if(nums[i]>=nums[largest]){
          secondlargest=nums[largest];
          largest=i;
      }
    }
nums[largest]=secondlargest;
}




 */