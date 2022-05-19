class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> answer(2);
        map<int, int> mp;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mp.count(target - nums[i])) {
                answer[0] = mp[target - nums[i]];
                answer[1] = i;
                break;
            }
            else{
                mp[nums[i]] = i;   /* we are saving the index for the number as a key */
                
            }/* this means if you found b already then no need to continue looping*/
        }
        return answer;
        
    }
};





/*   
    our target is 9 
    [ 11 , 2 , 7 , 15]
    we first ask the Map if it contains target - nums[0] which is 9 - 11 = -2 and initially our map is empty 
    so save it mp[11] = 0 
    then check for target - 2 = 7 , is 7 exists no so save it that for map[2] = 1
    
    then check ofr 7 .. 9 - 7 = 2 is 2 there in the map yes it contains 2 from previous iterate 
    we saved that 2 exists at poistion 1 and 11 at position 0 
    we save the number as key and its index as value in our Hash Map by the way 
    
    
*/

