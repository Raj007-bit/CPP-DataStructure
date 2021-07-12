#include <bits/stdc++.h>
using namespace std; 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[100],i,n;
	cin>>n;
	for (i = 0; i < n; i++) {
   // Reading User Input sales value Based on index
   cin >> arr[i]; //i is index 
}
    cout << "Origional array is" << endl;
	printArray(arr, n);
	// Function calling

	rvereseArray(arr, 0, n-1);
	cout << "Reversed array is" << endl;
	printArray(arr, n);
	return 0;
}
