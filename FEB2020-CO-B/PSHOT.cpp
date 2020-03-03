#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);


	    ll t,n;
	    cin>>t;
	    ll ans=0;
	    	while(t--){
	    		bool flag=false;
	    		ans=0;
	    		cin>>n;
	    		string s;
	    		cin>>s;
	    		ll arem,brem,ascore,bscore;
	    		ascore=0;
	    		bscore=0;
	    		brem=n;
	    		arem=n;
	    		for(ll i=0;i<2*n;i++){

	    			if(s[i]=='1' && i%2==0){
	    				ascore++;
	    			}

	    			if(s[i]=='1' && i%2==1){
	    				bscore++;
	    			}
	    			if(i%2==1){
	    				brem--;
	    			}
	    			if(i%2==0){
	    				arem--;
	    			}

	    			if(brem+bscore<ascore){
	    				cout<<i+1<<endl;
	    				flag=true;
	    				break;
	    			}
	    			if(arem+ascore<bscore){
	    				cout<<i+1<<endl;
	    				flag=true;
	    				break;
	    			}

	    		}

	    		//<<ascore<<" "<<bscore<<endl;
	    		if(!flag){
	    			cout<<2*n<<endl;
	    		}





	    	}










	return 0;
}
