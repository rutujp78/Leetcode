class Solution {
public:
    
    int countOrders(int n) {
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else
        {
            long ans=1,modulus=1e9+7;
            for(int i=2;i<=n;i++)
            {
                ans*=i;
                ans%=modulus;
                ans*=(2*i-1);
                ans%=modulus;
            }
            return ans%modulus;
        }
        
    }
};