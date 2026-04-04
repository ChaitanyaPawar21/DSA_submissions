class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int right = m - 1;
        int right2 = n - 1;
        int k = m + n - 1;

        while (right >= 0 && right2 >= 0) {
            if (nums1[right] > nums2[right2]) {
                nums1[k] = nums1[right];
                right--;
            } else {
                nums1[k] = nums2[right2];
                right2--;
            }
            k--;
        }

        // IMPORTANT: copy remaining nums2 elements
        while (right2 >= 0) {
            nums1[k] = nums2[right2];
            right2--;
            k--;
        }
    }
};