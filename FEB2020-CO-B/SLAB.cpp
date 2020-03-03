#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);


	    ll t,n;
	    ll temp;
	    cin>>t;
	    ll tax=0;

	    	while(t--){
	    		tax=0;
	    		cin>>n;

	    		temp=n;
	    		ll fixer1=((500000-250000)*5)/100;
	    		ll fixer2=((500000-250000)*10)/100;
	    		ll fixer3=((500000-250000)*15)/100;
	    		ll fixer4=((500000-250000)*20)/100;
	    		ll fixer5=((500000-250000)*25)/100;

	    		if(temp<=250000){
	    			cout<<n<<endl;
	    			continue;

	    		}

	    		if(temp>250000 && temp<=500000){
	    			tax=((temp-250000)*5)/100;
	    			cout<<n-tax<<endl;
	    			continue;
	    		}

	    		if(temp>500000 && temp<=750000){
	    			tax=tax+((temp-500000)*10)/100;
	    			
	    			cout<<n-tax-fixer1<<endl;
	    			continue;
	    		}

	    		if(temp>750000 && temp<=1000000){
	    			tax=tax+((temp-750000)*15)/100;
	    			
	    			cout<<n-tax-fixer1-fixer2<<endl;
	    			continue;
	    		}

	    		if(temp>1000000 && temp<=1250000){
	    			tax=tax+((temp-1000000)*20)/100;


	    			cout<<n-tax-fixer1-fixer2-fixer3<<endl;
	    			continue;
	    		}

	    		if(temp>1250000 && temp<=1500000){
	    			tax=tax+((temp-1250000)*25)/100;

	    			cout<<n-tax-fixer1-fixer2-fixer3-fixer4<<endl;
	    			continue;
	    		}

	    	

	    		if(temp>1500000){
	    			tax=tax+((temp-1500000)*30)/100;

	    			cout<<n-tax-fixer1-fixer2-fixer3-fixer4-fixer5<<endl;
	    			continue;
	    		}


	    		







	    	}










	return 0;
}
