#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool flag1=false;
    bool flag2=false;
    ll t,n,total;
    cin>>t;

    	while(t--){
    		flag1=false;
    		flag2=false;
    		cin>>n>>total;
    		ll arr[n];
    		ll output[n];

    		for(ll i=0;i<n;i++){
    			output[i]=0;
    		}

    		for(ll i=0;i<n;i++){
    			cin>>arr[i];
    		}

    		//when a coin is not divisible by total
    		for(ll i=0;i<n;i++){
    			if(total%arr[i]!=0){
    				
    				output[i]=total/arr[i]+1;
    				cout<<"YES ";
    				for(ll j=0;j<n;j++){
    					cout<<output[j]<<" ";
    				}

    				

    				cout<<endl;
    				flag1=true;
    				break;

    			}
    		}

    		if(flag1){
    			continue;
    		}
    		
    		ll newval=0;
		ll min1,max2;
	
    		//when all coins are divisible by total
    		for (ll i=0;i<n-1; ++i)
    		{
    			for (ll j=i+1;j<n; ++j)
    			{
    				/* code  4 9  36*/
    				if(__gcd(arr[i],arr[j])!=min(arr[i],arr[j]) && arr[i]!=1 && arr[j]!=1){
					
    					output[j]=total/arr[j]-1;
    					
    					output[i]=arr[j]/arr[i]+1;
    					cout<<"YES ";
    					
    					for(ll k=0;k<n;k++){
    						cout<<output[k]<<" ";
    					}
    					flag2=true;
    					cout<<endl;
    					break;
    				}

    			}

    			if(flag2){
    				break;
    			}
    		}







    		if(flag2){
    			continue;
    		}




    		cout<<"NO"<<endl;



    	}



	return 0;
}
