#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int prices[n];
    printf("Enter prices: ");
    for(i=0;i<n;i++)
        scanf("%d",&prices[i]);
    int min = prices[0], maxProfit = 0, profit;
    for(i=1;i<n;i++){
        if(prices[i]<min)
            min=prices[i];
        profit=prices[i]-min;
        if(profit>maxProfit)
            maxProfit=profit;
    }
    printf("Maximum Profit: %d\n",maxProfit);
    return 0;
}
