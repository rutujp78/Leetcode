class Solution {
public:
    int brokenCalc(int startValue, int target) {
        //iterstive method
        //int ans=0;
        //while(target>startValue)
        //{
            //if(target%2!=0)
            //{
                //++target;
            //}
            //else
            //{
                //target/=2;
            //}
            //++ans;
        //}
        //return ans+startValue-target;
        
        //recursive method
        if(startValue>=target)
        {
            return startValue-target;
        }
        if(target & 1)
        {
            return (1+brokenCalc(startValue,target+1));
        }
        return (1+brokenCalc(startValue,target/2));
    }
};