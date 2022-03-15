class Solution {
public:
    string minRemoveToMakeValid(string s) {

        //Method 1
        //int n = s.length();
        //string res = "";
        //int count = 0;
        //for (int i = 0; i < s.length(); ++i)
        //{
            //if (s[i] == '(')
            //{
                //++count;
            //}
            //else if (s[i] == ')')
            //{
                //if (count == 0)
                //{
                    //s[i] = '#';
                //}
                //else
                //{
                    //--count;
                //}
            //}
        //}
​
        //count = 0;
        //for (int i = n - 1; i >= 0; --i)
        //{
            //if (s[i] == ')')
            //{
                //++count;
            //}
            //else if (s[i] == '(')
            //{
                //if (count == 0)
                //{
                    //s[i] = '#';
                //}
                //else
                //{
                    //--count;
                //}
            //}
        //}
        //for (int i = 0; i < s.length(); ++i)
       //{
            //if (s[i] != '#')
            //{
                //res.push_back(s[i]);
            //}
        //}
        //return res;
        

        //Method 2
        stack<int> str;
        string result = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
            {
                str.push(i);
            }
            else if (s[i] == ')')
            {
                if (str.empty())
                {
                    s[i] = '#';
                }
                else
                {
                    str.pop();
                }
            }
        }
        while (!str.empty())
        {
            s[str.top()] = '#';
            str.pop();
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != '#')
            {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};