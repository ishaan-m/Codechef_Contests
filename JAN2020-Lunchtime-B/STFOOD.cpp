#include <bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
int n;
	while(t--){
		cin>>n;
		int stores[n];
		int prices[n];
		int people[n];
		int calc[n];
		for(int i=0;i<n;i++){
			cin>>stores[i];
			cin>>people[i];
			cin>>prices[i];
		}

		for(int i=0;i<n;i++){
			calc[i]=(people[i]/(stores[i]+1))*prices[i];
		}


		sort(calc,calc+n);

		cout<<calc[n-1]<<endl;

	}




	return 0;
}
