class Solution {
public:
    bool isPalindrome(string s) {
        // remove non-alphanumetic and whitespaces
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
                                        return !std::isalnum(c);
                                }), s.end());

        if(s.empty())
            return true;

        for( int i = 0; i < s.length() / 2; i++)
            //PS.: 0x20 is a bit to lowercase ASCII
            if( (s[i] | 0x20)  != (s[s.length() - i - 1] | 0x20) )
                return false;
        
        return true;
    }
};