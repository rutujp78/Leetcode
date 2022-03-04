class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double champagne[101][101]={0};
        if(poured==0)                
        {
            return 0;
        }
        else
        {
            champagne[0][0]=poured;
            for(int i=0;i<query_row+1;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    if(champagne[i][j]>=1)
                    {
                        champagne[i+1][j]+=(champagne[i][j]-1)/2;
                        champagne[i+1][j+1]+=(champagne[i][j]-1)/2;
                        champagne[i][j]=1;
                    }
                }
            }
            return(champagne[query_row][query_glass]);
        }
    }
};