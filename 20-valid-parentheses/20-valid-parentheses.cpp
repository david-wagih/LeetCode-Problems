class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        //Here we are creating a map to avoid unnecessary if-else statements, we will assign a //positive and a respective negative integer for each bracket type
        unordered_map <char, int> m = {{'(', 1}, {'{', 2}, {'[',3},{')', -1}, {'}', -2}, {']',-3}};
		//If the bracket is of opening type we will push it into the stack
        stack<int> st;
        for(int i =0; i<n;i++){
            if(m[s[i]]>0) st.push(s[i]);
            //Else we'll check if there exist any opening bracket corresponding to the closing one
            else {
			//if there is no opening bracket present in the stack we will return false
                if(st.empty()) return false;
                char a = st.top();
				
				// If the bracket in the stack doesn't match, return false
                if(m[a]+m[s[i]]!=0) return false;
                else st.pop(); // we will remove the top bracket from the stack if we find a match
            }
        }
		
		//checking if stack is not empty that is no opening brackets are remaining in the stack
        return (st.empty()) ? true : false;
    }
};