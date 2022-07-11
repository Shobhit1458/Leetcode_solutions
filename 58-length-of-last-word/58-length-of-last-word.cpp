class Solution {
public:
    int lengthOfLastWord(string s) {
        int index=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
               index++; 
            }
            else if(index > 0)
                return index;
            
        }
        return index;
    }
};