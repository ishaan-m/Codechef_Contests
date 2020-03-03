#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

	ll t,r1,r2,r3;
	ll counter=0;
	cin>>t;
	while(t--){
		counter=0;
		cin>>r1>>r2;
		r3=abs(r1-r2);

		for (ll i=1; i<=sqrt(r3); i++) 
    { 
        if (r3%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (r3/i == i) {
               // printf("%lld ", i); 
            	counter++;
            }
  
            else {// Otherwise print both 
                //printf("%lld %lld ", i, r3/i);
                counter=counter+2; 
            }
        } 
    } 
  
    	cout<<counter<<endl;
	}

}