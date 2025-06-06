class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows <= 1 || s.size() <= numRows)
            return s;

        std::vector<string> lines(numRows);

        int direction = 1;
        int i = 0;
        const int n = numRows - 1;

        for( const char& c : s) {
            lines[i].push_back(c);

            if( i == n )
                direction = -1;
            
            if( i == 0 )
                direction = 1;

            i += direction;
        }

        string result;
        for( const string& line : lines )
            result += line;

        return result;
    }
};