#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::vector<ll> yans;
    	std::vector<ll> xans;
    ll t;
    cin>>t;
    ll xcount,ycount,xindex,yindex;
    long double root;
    ll introot;
    while(t--){

    	cin>>xcount>>ycount;
    	xindex=xcount-1;
    	yindex=ycount-1;
    	ll xarr[xcount];
    	ll yarr[ycount];
    	
    	ll xflag=0;
    	ll yflag=0;
    	for(ll i=0;i<xcount;i++){
    		cin>>xarr[i];
    	}
    	for(ll i=0;i<ycount;i++){
    		cin>>yarr[i];
    	}
    	sort(xarr,xarr+xcount);
    	sort(yarr,yarr+ycount);

    	for(ll i=0;i<xcount;i++){
    		if(xarr[i]>0){
    			xindex=i;
    			break;
    		}
    	}
    	for(ll i=0;i<ycount;i++){
    		if(yarr[i]>0){
    			yindex=i;
    			break;
    		}
    	}

    	// for(ll i=0;i<xcount;i++){
    	// 	while(i!=xindex){
    	// 		cout<<xarr[i]<<" ";
    	// 		i++;
    	// 	}

    	// }
    	// cout<<endl;

    	for(ll i=0;i<xindex;i++){
    		for(ll j=xindex;j<xcount;j++){
    			root=sqrt(-1*xarr[i]*xarr[j]);
    			introot=(ll)root;
    			if(root==introot && xarr[i]!=0 && xarr[j]!=0){
    				yans.push_back(introot);
    			}
    		}
    	}

    	// cout<<"yans\n";
    	// for(ll i=0;i<yans.size();i++){
    	// 	cout<<yans[i]<<" ";
    	// }
    	// cout<<endl;
    	
    	

    	for(ll i=0;i<yindex;i++){
    		for(ll j=yindex;j<ycount;j++){
    			root=sqrt(-1*yarr[i]*yarr[j]);
    			introot=(ll)root;
    			if(root==introot && yarr[i]!=0 && yarr[j]!=0){
    				xans.push_back(introot);
    			}
    		}
    	}


    	// cout<<"xans\n";
    	// for(ll i=0;i<xans.size();i++){
    	//  	cout<<xans[i]<<" ";
    	//  }
    	//  cout<<endl;
    	

    	// cout<<"yans\n";
    	// for(ll i=0;i<yans.size();i++){
    	//  	cout<<yans[i]<<" ";
    	//  }
    	//  cout<<endl;


    	bool xzero=false;
    	bool yzero=false;
    	for(ll i=0;i<xcount;i++){
    		if(xarr[i]==0){
    			xzero=true;
    			break;
    		}
    	}
    	for(ll i=0;i<ycount;i++){
    		if(yarr[i]==0){
    			yzero=true;
    			break;
    		}
    	}
    	ll xzeroflag=0;
    	ll yzeroflag=0;
    	if(xzero){
    		xzeroflag=(xcount-1)*ycount;
    	}

    	if(yzero){
    		yzeroflag=(ycount-1)*xcount;
    	}

    	if(xzero && yzero){
    		xzeroflag=(xcount-1)*(ycount-1);
    		yzeroflag=0;
    	}




    	for(ll i=0;i<xans.size();i++){
    		for(ll j=0;j<xcount;j++){
    			if((xans[i]==xarr[j]&&xans[i]!=0) || (xans[i]==xarr[j]*-1)&&xans[i]!=0){
    				xflag++;
    			}
    		}
    	}

    	for(ll i=0;i<yans.size();i++){
    		for(ll j=0;j<ycount;j++){
    			if((yans[i]==yarr[j]&&yans[i]!=0) || (yans[i]==yarr[j]*-1)&&xans[i]!=0){
    				yflag++;
    			}
    		}
    	}

    	//cout<<xflag<<" "<<yflag<<" "<<xzeroflag<<" "<<yzeroflag<<endl;
    	cout<<xflag+yflag+xzeroflag+yzeroflag<<endl;
    	yans.clear();
    	xans.clear();


    }

    return 0;
}
