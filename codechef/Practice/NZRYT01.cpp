// Problem: NZRYT01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/NZRYT01
// Solved on: 2026-11-26T06:58:14.404Z

long long calculateMaxProfit(vector<int>& stockPrices) {
    int buy1 = -stockPrices[0];
        int sell1 = 0;

        int buy2 = -stockPrices[0];
        int sell2 = 0;

        for(int i = 1; i < stockPrices.size(); i++) {

            buy1 = max(buy1, -stockPrices[i]);

            sell1 = max(sell1, buy1 + stockPrices[i]);

            buy2 = max(buy2, sell1 - stockPrices[i]);

            sell2 = max(sell2, buy2 + stockPrices[i]);
        }

        return sell2;
}
