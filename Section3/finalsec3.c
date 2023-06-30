#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getSUMzero(int arr[], int nos[], int n, int summ[], int diff[]);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    // Declare arrays and variables
    int array[n];
    int nos[2];
    int summ[1];
    int diff[1];

    // Read array elements from user
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %dth element of array: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    // Call the function to find the pair with sum closest to zero
    getSUMzero(array, nos, n, summ, diff);
    
    // Print the result
    printf("[%d, %d] (Sum is %d and absolute difference is %d)\n", nos[0], nos[1], summ[0], diff[0]);

    return 0;
}

void getSUMzero(int arr[], int nos[], int n, int summ[], int diff[])
{
    int sum, sum2 = 10000000, c, d;

    // Iterate over each pair of elements in the array
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int b = arr[j];
            
            // Calculate the sum of the pair and its absolute value
            sum = a + b;
            sum = abs(sum);
            
            // Check if the current sum is closer to zero than the previous sum
            if (sum < sum2)
            {
                sum2 = sum;
                nos[0] = a;
                nos[1] = b;
                c = a;
                d = b;
                diff[0] = abs(abs(a) - abs(b));
            }
            
            // If the sums are equal, check the absolute differences
            if (sum == sum2)
            {
                int p = abs(c);
                int q = abs(d);
                int r = abs(a);
                int s = abs(b);
                int d1 = abs(p - q);
                int d2 = abs(r - s);
                
                // If the new difference is smaller, update the values
                if (d2 < d1)
                {
                    nos[0] = a;
                    nos[1] = b;
                    c = a;
                    d = b;
                    diff[0] = abs(abs(a) - abs(b));
                }
            }
        }
    }
    
    // Store the closest sum in the 'summ' array
    summ[0] = sum2;
}
