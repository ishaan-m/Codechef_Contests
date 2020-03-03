#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    
    ll t;
    cin>>t;
    ll k,n;
    ll sum=0;
    while(t--){
        sum=0;
        cin>>n>>k;
        int arr[n];
        int rem[n];
        
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(ll i=0;i<n;i++){
            rem[i]=arr[i]%k;
        }
        
        // for(ll i=0;i<n;i++){
        //     cout<<rem[i]<<" ";
        // }
        // cout<<"     "<<k;
        // cout<<endl;
        
        for(ll i=0;i<n;i++){
            sum=sum+rem[i];
        }
        
        cout<<sum%k<<endl;
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
return 0;

}
    
    
    
    
