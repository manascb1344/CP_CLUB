// https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int r = arr.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (mid > 0 && arr[mid - 1] > arr[mid]) {
                r = mid - 1;
            } else if ((mid == 0 || arr[mid - 1] < arr[mid]) &&
                       (mid == arr.size() - 1 || arr[mid + 1] < arr[mid])) {
                return mid;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
};