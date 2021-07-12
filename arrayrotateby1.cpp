
# include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
	arr[i] = arr[i - 1];
	arr[0] = x;
}

// Driver code
int main()
{
	int arr[100],i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << "Given array is \n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	rotate(arr, n);

	cout << "\nRotated array is\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	return 0;
}