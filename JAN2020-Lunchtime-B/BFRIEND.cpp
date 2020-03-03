#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

	ll t,N,alice,start,change;
	ll move_up,move_down;
	bool flag=false;
	ll floor;
	ll move_val;
	ll move_final;
	cin>>t;

		while(t--){
			move_final=INT_MAX;
			flag=false;
			cin>>N;
			cin>>alice>>start>>change;
			ll frend[N];
			for(ll i=0;i<N;i++){
				cin>>frend[i];

			}

			sort(frend,frend+N);
			
			
			
		
			

			for(ll i=0;i<N;i++){
				if(min(start,alice)<=frend[i] && frend[i]<=max(start,alice)){
					cout<<abs(alice-start)+change<<endl;
					flag=true;
					break;
				}
			}

			if(flag){
				continue;
			}
			//cout<<"Hello";

			ll index=0;
			ll move_final_alice;
			ll move_final_start;
			ll move_val2;
			for(ll i=0;i<N;i++){

				move_val=abs(alice-frend[i]);
				move_val2=abs(start-frend[i]);
				move_final_alice=min(move_val,move_final_alice);
				move_final_start=min(move_val2,move_final_start);

				move_final=min(move_final_start,move_final_alice);
				if(min(move_val,move_val2)==move_final)
					index=i;


			}

			floor=frend[index];



			cout<<abs(start-floor)+abs(alice-floor)+change<<endl;
		//cout<<index<<endl;







		}





	return 0;
}
