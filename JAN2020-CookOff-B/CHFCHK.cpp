#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

	ll t;
	ll n;
	cin>>t;

	while(t--){
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}

		sort(arr,arr+n);

		cout<<arr[0]<<endl;
	}




	return 0;
}
