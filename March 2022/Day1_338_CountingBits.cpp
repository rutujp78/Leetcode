class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>one_s;
       for(int i=0;i<=n;i++) 
       {
           int ii=i,max=0;
            while(i!=0)
            {
                int rem=i%2;
                i=i/2;
                if(rem==1)
                {
                    max++;
                }
            }    
            i=ii;
            one_s.push_back(max);
       }
        return one_s;
    }
};