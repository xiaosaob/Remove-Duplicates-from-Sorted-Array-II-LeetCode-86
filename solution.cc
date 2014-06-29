// Follow up for "Remove Duplicates":
// What if duplicates are allowed at most twice?

// For example,
// Given sorted array A = [1,1,1,2,2,3],

// Your function should return length = 5, and A is now [1,1,2,2,3].

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int readIdx = 0, writeIdx = -1;
        int cnt = 0;
        while(readIdx < n) {
            if(writeIdx < 0) {
                A[++writeIdx] = A[readIdx++]; 
                cnt = 1;
            } else if(A[readIdx] != A[writeIdx]) {
                A[++writeIdx] = A[readIdx++];
                cnt = 1;
            } else if(cnt < 2) {
                A[++writeIdx] = A[readIdx++];
                ++cnt;
            } else ++readIdx;
        }
        return writeIdx+1;
    }
};
