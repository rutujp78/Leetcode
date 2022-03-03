class Solution {
public:
    bool isSubsequence(string s, string t) {
        // faster solution
        int j=0;
        if(s.length()>t.length())
        {
            return false;
        }
        else
        {
            for(int i=0;i<t.length();i++)
            {
                if(s[j]==t[i])
                {
                    j++;
                    if(j==s.length())
                    {
                        break;
                    }
                }
            }
            if(j==s.length())
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        return true;
    }
};
// slower solution
//         if(j==s.length())
//         {
//             j=0;
//             for(int i=0;i<s.length()-1;i++)
//             {
//                 k=s[i];
//                 l=s[i+1];
//                 if(k<=l)
//                 {
//                     j++;
//                 }
//                 else
//                 {
//                     j=0;
//                 }
                
//             }
//             if(j==(s.length()-1))
//             {
//                 return true;
//             }
//             else 
//             {
//                 return false;
//             }
//         }
//         else
//         {
//             return false;
//         }
