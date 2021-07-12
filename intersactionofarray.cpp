// C++ program to find intersection of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


void printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}

/* Driver program to test above function */
int main()
{
    int a[100],i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int b[100],m,j;
	cin>>m;
	for(j=0;j<m;j++){
		cin>>b[j];
	}
	// Function calling
	printIntersection(a, b, n, m);
	return 0;
}
