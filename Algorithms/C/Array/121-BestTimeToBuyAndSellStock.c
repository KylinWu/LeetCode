/* 121. Best Time to Buy and Sell Stock
 * Approach: Straight Forward
 */

int maxProfit(int* prices, int pricesSize) {
    int maxPoint = prices[pricesSize-1], tmpProfit = 0, maxProfit = 0;
    for (int i=pricesSize-1; i>0; i--) {
        if (prices[i] > prices[i-1]) {
            if (prices[i] > maxPoint)
                maxPoint = prices[i];
            tmpProfit = maxPoint - prices[i-1];
            if (tmpProfit > maxProfit)
                maxProfit = tmpProfit;
        }
    }
    return maxProfit;
}
