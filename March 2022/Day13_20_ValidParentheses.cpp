class Solution {
public:
    bool isValid(string s) {
        if(s[0]=='\0' || s[1]=='\0')
        {
            return false;
        }
        else
        {
            stack<char> brackets;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                {
                    brackets.push(s[i]);
                 }
                 else
                 {
                     if(brackets.empty() || (brackets.top() == '(' && s[i] != ')') || (brackets.top()=='{'&&s[i]!='}') || (brackets.top()=='['&&s[i]!=']'))
                  {
                      return false;
                   }
	                brackets.pop();
                  }
         }
         return brackets.empty();  
        }  
    }
};