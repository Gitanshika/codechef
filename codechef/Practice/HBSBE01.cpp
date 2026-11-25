// Problem: HBSBE01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/HBSBE01?tab=statement
// Solved on: 2026-11-25T19:06:20.152Z

int findMaxContentChildren(vector<long long>& childrenGreedFactors,
                           vector<long long>& cookieSizes) {
                               sort(childrenGreedFactors.begin(),childrenGreedFactors.end());
                               sort(cookieSizes. begin(),cookieSizes.end());
                               int i=0,j=0,cnt=0;
                               while(i<childrenGreedFactors.size() && j<cookieSizes.size()){
                                   if(cookieSizes[i]>=childrenGreedFactors[j]){
                                       cnt++;
                                       i++;
                                       j++;
                                      
                                   }
                                   else j++;
                               }
return cnt;
}