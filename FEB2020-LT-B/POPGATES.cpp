#include <bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
	while(t--){
		int k,n;
		char c;
		cin>>n>>k;
		int arr[n];
		int ans=0;
		for(int i=0;i<n;i++){
			//heads is 0 tails is 1
			cin>>c;
			if(c=='H'){
				arr[i]=0;
			}
			else{
				arr[i]=1;
			}

		}
		int iterator=n-1;
		for(int i=0;i<k;i++){



			if(arr[iterator]==0){
				for(int j=0;j<n;j++){
					if(arr[j]==0){
						arr[j]=1;
					}
					else{
						arr[j]=0;
					}


				}

			}
			iterator--;
		}



		for(int i=0;i<=iterator;i++){
			if(arr[i]==0){
				ans++;
			}
		}

		cout<<ans<<endl;


	}









	return 0;
}
