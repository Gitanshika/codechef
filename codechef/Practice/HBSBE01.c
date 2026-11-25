// Problem: HBSBE01
// Platform: codechef
// Language: int findMaxContentChildren(vector<long long>& childrenGreedFactors,
                           vector<long long>& cookieSizes) {
    sort(childrenGreedFactors.begin(), childrenGreedFactors.end());
    sort(cookieSizes.begin(), cookieSizes.end());

    int i = 0, j = 0, cnt = 0;
    while (i < childrenGreedFactors.size() && j < cookieSizes.size()) {
        if (cookieSizes[j] >= childrenGreedFactors[i]) {
            cnt++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    return cnt;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/HBSBE01?tab=solution
// Solved on: 2026-11-25T19:06:57.497Z

int findMaxContentChildren(vector<long long>& childrenGreedFactors,
                           vector<long long>& cookieSizes) {
    sort(childrenGreedFactors.begin(), childrenGreedFactors.end());
    sort(cookieSizes.begin(), cookieSizes.end());

    int i = 0, j = 0, cnt = 0;
    while (i < childrenGreedFactors.size() && j < cookieSizes.size()) {
        if (cookieSizes[j] >= childrenGreedFactors[i]) {
            cnt++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    return cnt;
}