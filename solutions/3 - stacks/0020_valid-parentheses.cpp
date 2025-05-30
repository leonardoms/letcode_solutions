class Solution {
public:
    bool isValid(string s) {
        std::stack<char> sp;

        for (const char& c : s) {
            
            if (c == '(' || c == '[' || c == '{') {
                sp.push(c);
            } else {
                if (sp.empty()) return false;

                char open = sp.top();
                sp.pop();

                // note: the ASCII code for correct match 1 <= Close - Open <= 2
                // eg.: '(' = 0x40 and ')' = 0x41 -> Close - Open == 1
                if (c - open > 2 || c - open <= 0)
                    return false;
            }
        }
        return sp.empty();
    }
};