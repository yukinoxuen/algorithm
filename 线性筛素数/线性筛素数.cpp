#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e8+10; 
int primes[N];
bool ispri[N];//true表示不是素数，false表示是素数 
int n;
void func(int n){
	int cnt=0;
	ispri[0]=1,ispri[1]=1;
	for(int i=2;i<=n;i++){
		if(!ispri[i]){
			primes[++cnt]=i;
		}
		for(int j=1;j<=cnt&&i*primes[j]<=n;j++){
			ispri[i*primes[j]]=true;
			if(i%primes[j]==0) break;
		}
	}
}
signed main(){
	cin>>n;
	func(n);
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<primes[x]<<endl;
	}
}
