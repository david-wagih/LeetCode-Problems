class Solution {
public:
    
//     // this handles when the number is already one digit so it is palindrome
//     int oneDigit(int num){
//         return (num >= 0 && num < 10);
//     }
     
    
//     bool isPalUtil(int num, int* dupNum)
//     {
//         if (oneDigit(num))
//             return (num == (*dupNum) % 10);
//         if (!isPalUtil(num / 10, dupNum))
//             return false;
//         *dupNum /= 10;
//         return (num % 10 == (*dupNum) % 10);
//     }
    
//     int isPalindrome(int num)
//     {
//         // if (num < 0)
//         // num = -num;
//         int* dupNum = new int(num);
//         return isPalUtil(num, dupNum);
//     }
    
    bool isPalindrome(int num){
         // Calculating string length
        string str = to_string(num);
        int len = str.length();
   
        // Traversing through the string
        // upto half its length
        for (int i = 0; i < len / 2; i++) {
       
            // Comparing i th character
            // from starting and len-i
            // th character from end
            if (str[i] != str[len - i - 1])
                return false;
        }
   
        // If the above loop doesn't return then it is
        // palindrome
        return true;
    }
};