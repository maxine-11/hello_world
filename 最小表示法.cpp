#include<bits/stdc++.h>
using namespace std;
#define	ll long long
#define MAXN 300005
#define mod 100003 
#define pii pair<int,string>
int n,m;
int a[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;++i)cin>>a[i];
	int i=0,j=1,k=0;
	while(i<n&&j<n&&k<n)
	{
		if(a[(i+k)%n]==a[(j+k)%n])++k;
		else {
			
			if(a[(i+k)%n]>a[(j+k)%n])i=i+k+1;//S[i+k]>S[j+k]S[i+k]>S[j+k]，对于任意一个起始位置 ll 满足 i≤l≤i+ki≤l≤i+k 的字符串 A′A′，一定存在一个对应的 B′B′ ，起始位置 rr 满足 j≤r≤j+kj≤r≤j+k，B′B′ 的字典序小于 A′A′ 的字典序，可以直接跳过 [i+1,i+k][i+1,i+k] 这一段区间，直接从 i+k+1i+k+1 开始新的比较。 
			else j=j+k+1;k=0;
			if(i==j)++i;
		}
	}
	k=0,i=min(i,j);
	while(k<n){
		cout<<a[(i+k)%n]<<" ";
		++k;
	}
	return 0;
}
