
#include <bits/stdc++.h> 
using namespace std; 

int longest(int a[], int n, int k) 
{ 
	unordered_map<int, int> freq; 
	int start = 0, end = 0, now = 0, l = 0; 
	for (int i = 0; i < n; i++) { 

		freq[a[i]]++; 

		if (freq[a[i]] == 1) 
			now++; 

		while (now > k) { 

			
			freq[a[l]]--; 

		
			if (freq[a[l]] == 0) 
				now--; 

		
			l++; 
		} 

	
		if (i - l + 1 >= end - start + 1) 
			end = i, start = l; 
	} 

	
	return end-start+1;
} 

 
int main() 
{ 
	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int ans;
		ans=longest(arr,n,k-1);
		cout<<ans<<endl;




	}
	
	return 0; 
} 
