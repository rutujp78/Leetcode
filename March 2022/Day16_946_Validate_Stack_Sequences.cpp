class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       
        //Method 1
        //stack<int> s ;
        //int j = 0;
        //for(int i= 0; i<pushed.size(); ++i)
        //{
            //s.push(pushed[i]);

            //while(!s.empty() && s.top() == popped[j])
            //{
                //s.pop();
                //++j;
            //}
        //}
        //return s.empty();
        
        //Method 2
        int i = 0, j = 0;
        for(int x :  pushed)
        {
            pushed[i++] = x;
            while(i> 0 && pushed[i-1] == popped[j])
            {
                --i;
                ++j;
            }
        }
        return i == 0;
    }
};