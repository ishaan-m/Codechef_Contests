#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool leapYear(ll year)  
{  
   
    if (year % 400 == 0)  
        return true;  
  
   
    if (year % 100 == 0)  
        return false;  
  
    
    if (year % 4 == 0)  
        return true;  
    return false;  
}  

ll dayofweek(ll d, ll m, ll y)  
{  
    ll month_arr[12] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };  
    if(m<3){
    	y=y-1;
    } 
    return ( y + y / 4 - y / 100 + y / 400 + month_arr[m - 1] + d) % 7;  
}  

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll day1,day2;
   	ll month1,month2;
   	ll year1,year2;
   	ll leapcount,nonleapcount;
  // 	ll limit=400;
   	// cin>>day>>month>>year;
   	// int ans=dayofweek(day,month,year);
   	// cout<<"ans "<<ans<<endl;
   	ll t,flag;
   	ll divider;
  // 	ll modo;
   	ll ans;
    ll leapcount_d;
    ll nonleapcount_d;
    ll ans_d;
    ll year1new;
    ll year2new;
   	cin>>t;
   		while(t--){
   			leapcount=0;
   			nonleapcount=0;
   			divider=0;
         ans_d=0;
        leapcount_d=0;
         nonleapcount_d=0;
   			ans=0;
   			cin>>month1>>year1;
   			cin>>month2>>year2;
        if(month1>2)
           year1++;
        if(month2<2)
           year2--;
   			// when starting is later than feb
   				//flag=(year2-year1);
   			//	divider=(year2-year1)/400 +1;
          ll y2;
   			//	 ll divider=(y2-year1)/400;
           

            // year1new=year1+1;
            // year2new=year2-1;
           // ll modo=year2new%400;
            divider=(year2-year1)/400;
             y2=(year2-year1)%400;
            //modo=31;

            for(ll i=year1;i<=year1+y2;i++){

                  if(dayofweek(1,2,i)==6){
                nonleapcount++;
              }

              if(dayofweek(1,2,i)==0 && !leapYear(i)){
                leapcount++;
              }
            }
            
            ans=(nonleapcount+leapcount);

            for(ll i=year1+y2+1;i<=year1+y2+400;i++){

                 if(dayofweek(1,2,i)==6){
                nonleapcount_d++;
              }

              if(dayofweek(1,2,i)==0 && !leapYear(i)){
                leapcount_d++;
              }


            }

            ans_d=divider*(nonleapcount_d+leapcount_d);

            ans=ans+ans_d;


            cout<<ans<<endl;













   		}












	return 0;
}
