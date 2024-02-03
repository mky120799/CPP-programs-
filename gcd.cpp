  #include<bits/stdc++.h>
  using namespace std;
  int minSubArrayLen(int target, vector<int>& nums) {
           
           int  sum=0;
            int res=0;
         int s=0;
         for(int i=0;i<nums.size();i++)
         {
               sum+=nums[i];
              
               while(sum>=target && s<=i)
               {
                  
                    res=min(res,i-s+1);
                    sum-=nums[s];
                    s++;
               }
               
            
         }
          return res; 
    }
    int main()
    {
        vector<int> v{2,3,1,2,4,3};
        cout<<minSubArrayLen(7,v);
    }