class Solution {
public:
    int getSum(int a, int b) {
        
        // Full Adder Logic
        while (b != 0) {
            int carry = (a & b) << 1;  // calculate the carry
            a = a ^ b;                 // sum without carry
            b = carry;                 // update the carry
        }

        return a;
    }
};