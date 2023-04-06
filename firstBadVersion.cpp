// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int end = n;
        long begin = 1;
        long m = (end+begin)/2;
        while(begin <= end){
            m = (end+begin)/2;
            if(isBadVersion(m) == true && isBadVersion(m-1) == false) return m;
            if(isBadVersion(m) == true) end=m-1;
            else begin=m+1;
        }
    return m;
    }
};
