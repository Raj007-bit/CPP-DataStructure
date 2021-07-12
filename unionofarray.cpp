// C++ program for the union of two arrays using Set
// Set is a data structure that allows only the distinct elements in it
#include <bits/stdc++.h>
using namespace std;
void getUnion(int a[], int n, int b[], int m)
{
	
	// Defining set container s
	set<int> s;

	// Inserting array elements in s
	for (int i = 0; i < n; i++)
	s.insert(a[i]);

	for (int i = 0; i < m; i++)
		s.insert(b[i]);
	cout << "Number of elements after union operation: " << s.size() << endl;
	cout << "The union set of both arrays is :" << endl;
	for (auto i= s.begin();i!=s.end();++i){
    cout<<*i<<" ";
    }
}

// Driver Code
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

	getUnion(a, n, b, m);
}

