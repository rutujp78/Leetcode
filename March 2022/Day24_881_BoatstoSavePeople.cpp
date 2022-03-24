class Solution {
public:
    int nupublicmRescueBoats(vector<int>& people, int limit) {
    int i = 0, j = people.size() - 1,count = 0;    sort(people.begin(),people.end());
    while(i <= j)
        {   
            if(people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            else
                --j;
            ++count;
        }
        return count;  
    }
};