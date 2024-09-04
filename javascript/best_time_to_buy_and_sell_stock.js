function maximumProfit(prices) {
    lowest_buying_price = prices[0]
    max_profit = 0

    //  Note: Both methods work great. Try them out by uncommenting
    // prices.forEach(price => {
    //     if (price < lowest_buying_price) {
    //         lowest_buying_price = price
    //     }
    //     current_profit = price - lowest_buying_price
    //     if (current_profit > max_profit) {
    //         max_profit = current_profit
    //     }
    // }
    // )

    // for (let index = 0; index < prices.length; index++) {
    //     const price = prices[index];
    //     if (price < lowest_buying_price) {
    //         lowest_buying_price = price
    //     }
    //     current_profit = price - lowest_buying_price
    //     if (current_profit > max_profit) {
    //         max_profit = current_profit
    //     }
    // }

}

prices = [7, 6, 4, 3, 1, 9, 3, 7, 9, 1, 4, 6, 10]

console.log(maximumProfit(prices))