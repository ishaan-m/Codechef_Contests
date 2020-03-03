#include <bits/stdc++.h>
using namespace std;

const int M=4;
const int N=4;
std::vector<string> vec;
int movief(char c){


	if(c=='A'){
		return 0;
	}

	if(c=='B'){
		return 1;
	}

	if(c=='C'){
		return 2;
	}

	if(c=='D'){
		return 3;
	}



	return -1;
}


int slotf(int slot){


	if(slot==12){
		return 0;
	}

	if(slot==3){
		return 1;
	}

	if(slot==6){
		return 2;
	}

	if(slot==9){
		return 3;
	}



	return -1;
}



void permute(string a,int l,int r)  
{  
    
    if(l==r){
    	vec.push_back(a);
    }
    else{
         
        for (int i = l; i <= r; i++)  
        {  
  
            
            swap(a[l], a[i]);  
   
            permute(a, l+1, r);  
  
         
            swap(a[l], a[i]);  
        }  

    }
     
}  


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string per="1234";
    permute(per,0,3);
    
    int t,n;
    char movie;
    int slot;
    int arr[M][N];
    int money;
    int finalmoney=0;
    int maxi=0;
    int zcount;
    cin>>t;
    	while(t--){
    		maxi=-10000000;
    		money=0;
    		zcount=0;
    		cin>>n;
    		int seq[4];

    		for(int i=0;i<4;i++){
    			seq[i]=0;
    		}

    		for(int i=0;i<M;i++){
    			for(int j=0;j<N;j++){
    				arr[i][j]=0;
    			}
    		}

    		for(int i=0;i<n;i++){
    			cin>>movie>>slot;
    			arr[movief(movie)][slotf(slot)]++;
    		}

    		// for(int i=0;i<M;i++){
    		// 	for(int j=0;j<N;j++){
    		// 		cout<<arr[i][j]<<" ";
    		// 	}
    		// 	cout<<endl;
    		// }

    		// for(int i=0;i<24;i++){
    		// 	cout<<vec[i]<<" ";
    		// }


    		string s;
    		
    			for(int j=0;j<vec.size();j++){
    				s=vec[j];
    				for(int k=0;k<4;k++){
    					seq[k]=arr[s[k]-49][k];
    				}
    				zcount=0;
    				

    				sort(seq,seq+4);

    				for(int i=0;i<4;i++){
    					if(seq[i]==0){
    						zcount++;
    					}
    				}
    				// for(int i=0;i<4;i++){
    				// 	cout<<seq[i]<<" ";
    				// }
    				// cout<<" Zcount "<<zcount<<endl;
    				money=seq[3]*100+seq[2]*75+seq[1]*50+seq[0]*25;
    				money=money-(zcount*100);

    				maxi=max(money,maxi);

    			}
    		






    		cout<<maxi<<endl;



    		finalmoney=finalmoney+maxi;
    	}

    	cout<<finalmoney<<endl;


    return 0;
}
