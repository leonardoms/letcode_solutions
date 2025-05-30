class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // the problem says: "nums1 has a length of m + n", so no rezise is nedeed
        std::move( nums2.begin(), nums2.end(), nums1.begin() + m ); // nums1 = [ nums1 nums2 ]
        // use std::copy instead of std::move if nums2 must be preserved

        std::sort( nums1.begin(), nums1.end(), [](int a, int b) { return a < b;} );
    }
};