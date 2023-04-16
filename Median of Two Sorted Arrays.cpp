class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        nums2.clear();
        sort(nums1.begin(), nums1.end());
        size_t size1 = nums1.size();
        float median1;
        if (size1==0)   median1=0;
        else if (size1 % 2 == 0) median1 = (nums1[(size1-1)/2] + nums1[size1/2])/2.0;
        else    median1 = nums1[size1 / 2.0];
        return median1;

        // --Works for 700 case out of 2000--

        // size_t size1 = nums1.size();
        // size_t size2 = nums2.size();
        // float median1, median2, total_med;
        // if (size1==0)   median1=0;
        // else if (size1 % 2 == 0) median1 = (nums1[(size1-1)/2] + nums1[size1/2])/2.0;
        // else    median1 = nums1[size1 / 2.0];
        // cout<<"Median1 "<<median1<<endl;
        // if (size2==0)   median2=0;
        // else if (size2 % 2 == 0)  median2 = (nums2[(size2-1)/2] + nums2[size2/2])/2.0;
        // else    median2 = nums2[size2 / 2.0];
        // cout<<"Median2 "<<median2<<endl;
        // if(median1 != 0 && median2 != 0)    total_med = (median1+median2)/2.0;
        // else    total_med = (median1+median2);
        // cout<<"total_med "<<total_med<<endl;
        // return total_med;

    }
};
