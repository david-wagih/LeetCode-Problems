class Solution {
public:
        string longestCommonPrefix(vector<string>& strs) {
            
            // first of all need to sort the array of strings , they will be sorted alphabaticely
            
            sort(strs.begin(),strs.end());
            
            string first = strs[0];
            
            string last  = strs[strs.size()-1];
            
            int i=0;
            
            while(i<first.size())
            {
                if(first[i]==last[i])
                    i++;
                else break;
            }
        
            return strs[0].substr(0,i);
            }
        };