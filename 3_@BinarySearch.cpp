#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @param array source array
     * @param target target to search
     * @return the first occurrence position of target 
     */
    int binarySearch(vector<int> &A, int target) {
        if (A.size() == 0) {
            return -1;
        }

        int start = 0;
        int end = A.size() - 1;
        int mid;

        while (start + 1 < end) {
            mid = start + (end - start) / 2;
            if (A[mid] == target) {
                end = mid;
            } else if (A[mid] < target) {
                start = mid;
            } else if (A[mid] > target) {
                end = mid;
            }
        }

        if (A[start] == target) {
            return start;
        }
        if (A[end] == target) {
            return end;
        }

        return -1;
    }
};