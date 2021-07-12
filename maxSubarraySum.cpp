// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max < max_ending_here)
            max = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
