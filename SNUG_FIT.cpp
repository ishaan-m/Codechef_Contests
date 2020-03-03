#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void){
    // Your code here!
    ll t;
    ll n;
    cin>>t;
    ll sum=0;
        while(t--){
            sum=0;
            cin>>n;
            ll arr1[n];
            ll arr2[n];
            for(ll i=0;i<n;i++){
                cin>>arr1[i];
            }
            
            for(ll i=0;i<n;i++){
                cin>>arr2[i];
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+n);
            
            for(ll i=0;i<n;i++){
                sum=sum+min(arr1[i],arr2[i]);
            }
            
            
            
            
            cout<<sum<<endl;
            
            
        }
        return 0;
}
