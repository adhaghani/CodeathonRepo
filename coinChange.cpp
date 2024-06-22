#include <iostream>
#include <algorithm> // For std::min
#include <climits>   // For INT_MAX

int coinChange(int coins[], int numCoins, int amount) {
    int dp[amount + 1]; // Initialize dp array
    std::fill_n(dp, amount + 1, amount + 1); // Fill dp array with amount + 1
    dp[0] = 0; // Base case: No coins needed to make amount 0
    
    // Iterate over all amounts from 1 to amount
    for (int i = 1; i <= amount; ++i) {
        // Check each coin denomination
        for (int j = 0; j < numCoins; ++j) {
            if (i - coins[j] >= 0) { // If the coin can be used
                dp[i] = std::min(dp[i], dp[i - coins[j]] + 1); // Update the dp value
            }
        }
    }
    
    // If dp[amount] is still amount + 1, it means it's not possible to form that amount
    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int amount = 3;

    int result = coinChange(coins, numCoins, amount);
    if (result != -1) {
        std::cout << "Minimum number of coins needed: " << result << std::endl;
    } else {
        std::cout << "It's not possible to make the amount with the given coins." << std::endl;
    }

    return 0;
}