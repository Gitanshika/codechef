// Problem: CNTINVERSION
// Platform: codechef
// Language: #include <vector>
#include <functional>

using namespace std;

long long countInversion(vector<int>& arr, int n) {
    // Helper function to merge two halves and count inversions
    function<long long(int, int)> mergeSort = [&](int left, int right) -> long long {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;
        long long invCount = 0;

        // Count inversions in left and right halves
        invCount += mergeSort(left, mid);
        invCount += mergeSort(mid + 1, right);

        // Merge the two sorted halves and count cross-inversions
        vector<int> temp(right - left + 1);
        int i = left, j = mid + 1, k = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                invCount += (mid - i + 1); // All remaining elements in left half are greater than arr[j]
            }
        }
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];

        // Copy back to original array
        for (int p = 0; p < temp.size(); p++) {
            arr[left + p] = temp[p];
        }

        return invCount;
    };

    return mergeSort(0, n - 1);
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/CNTINVERSION
// Solved on: 2026-11-27T10:01:05.996Z

long long mergearr(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    long long vc=0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            vc+=mid-i+1;
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[st+k]=temp[k];
    }
    
    return vc;
}
long long mergesort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        long long ilc=mergesort(arr,st,mid);
        long long rlc=mergesort(arr,mid+1,end);
        long long vc= mergearr(arr,st,mid,end);
        return ilc+rlc+vc;
      
    }
      return 0;
}

long long countInversion(vector<int>& arr, int n) {
    long long ans=mergesort(arr,0,n-1);
    return ans;
    
}