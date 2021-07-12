#include<iostream>
#include <vector>
using namespace std;


int partition(vector<int> &a,int s,int e){

	int pivot = a[e];
	int i = s - 1;//currect positioning of pivot element

	for(int j=s;j<e;j++){
		if(a[j] < pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	
	swap(a[i+1],a[e]);
	return i + 1;
	
}

void quicksort(vector<int> &a, int s,int e){
	//Base Case
	if(s>=e){
		return;
	}
	//Rec Case
	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}


int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	int x;cin>>x;
    	arr.push_back(x);
    }
    quicksort(arr,0,n-1);

    for(int x :arr){
    	cout << x << " ";
    }
    cout<<endl;
    return 0;
}