#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largestBand(vector<int> arr){
	int n = arr.size();
	unordered_set<int> s;
	
	//Data inside a set
	for(int x : arr){
		s.insert(x);
	}

	//Iterate over the arr
	int largestLen = 1;

	for(auto element : s){
		int parent = element - 1;

		if(s.find(parent)==s.end()){
			//find entire band / chain starting from element
			int next_no = element + 1;
			int cnt = 1;

			while(s.find(next_no)!=s.end()){
				next_no++;
				cnt++;
			}

			if(cnt>largestLen){
				largestLen = cnt;
			}
		}
	}


	return largestLen;
}



int main(){
    
	vector<int> arr;
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
    }
    for (auto i= arr.begin();i!=arr.end();++i){
    cout<<*i<<" ";
    }
	cout << largestBand(arr)<<endl;

	return 0;
}
