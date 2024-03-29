#include <stdio.h>
#include "my_mat.h"

int main()
{
    char items[KNSAPSACK_MAX_CAPACITY];
    int values[KNSAPSACK_MAX_CAPACITY];
    int weights[KNSAPSACK_MAX_CAPACITY];
    int selected_bool[KNSAPSACK_MAX_CAPACITY];

    for (int i = 0; i < KNSAPSACK_MAX_CAPACITY; i++)
    {
        scanf(" %c", &items[i]);
        scanf(" %d", &values[i]);
        scanf(" %d", &weights[i]);
    }

    printf("Maximum profit: %d\n", knapSack(weights, values, selected_bool));
    printf("Selected items:");
    for (int i = 0; i < KNSAPSACK_MAX_CAPACITY; i++)
    {
        if (selected_bool[i])
            printf(" %c", items[i]);
    }
    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int knapSack(int weights[], int values[], int selected_bool[])
{

    int KnapsackDP[KNSAPSACK_MAX_CAPACITY + 1][KNAPSACK_MAX_WEIGHT + 1];

    for (int i = 0; i < KNSAPSACK_MAX_CAPACITY + 1; i++)
    {
        for (int j = 0; j < KNAPSACK_MAX_WEIGHT + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                KnapsackDP[i][j] = 0;
                continue;
            }
            else if (weights[i - 1] <= j)
            {
                KnapsackDP[i][j] = max(values[i - 1] + KnapsackDP[i - 1][j - weights[i - 1]], KnapsackDP[i - 1][j]);
            }
            else
            {
                KnapsackDP[i][j] = KnapsackDP[i - 1][j];
            }
        }
    }

    int w = KNAPSACK_MAX_WEIGHT;
    int res = KnapsackDP[KNSAPSACK_MAX_CAPACITY][KNAPSACK_MAX_WEIGHT];

    for (int i = KNSAPSACK_MAX_CAPACITY; i > 0 && res > 0; i--)
    {
        if (res != KnapsackDP[i - 1][w])
        {

            selected_bool[i - 1] = 1;
            w -= weights[i - 1];
            res -= values[i - 1];
        }
    }

    return KnapsackDP[KNSAPSACK_MAX_CAPACITY][KNAPSACK_MAX_WEIGHT];
}
