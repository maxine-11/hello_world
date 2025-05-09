#include<bits/stdc++.h>
using namespace std;
#define	ll long long
#define MAXN 105
#define mod 100003 
#define pii pair<int,string>
int n,m,tot=0,tt;
double a[MAXN][MAXN];
double eps=0.00000001;
int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n+1;++j)cin>>a[i][j];
	for(int i=1;i<=n;++i)
	{
		int r=i;
		for(int j=i;j<=n;++j)
		{
			if(fabs(a[j][i])>eps){
				r=j;break;
			}
		}
		if(fabs(a[r][i])<eps){
			printf("No Solution.");return 0;
		}
		swap(a[i],a[r]);
		for(int j=n+1;j>=i;--j)a[i][j]/=a[i][i];
		for(int j=i+1;j<=n;++j)
		{
			if(fabs(a[j][i])>eps)
			{
				for(int k=n+1;k>=i;--k)
				a[j][k]-=a[j][i]*a[i][k];
			}
		}
	}
	for(int i=n-1;i>=1;--i)
	{
		for(int j=n;j>=i+1;--j)
		a[i][n+1]-=a[i][j]*a[j][n+1];
	}
	for(int i=1;i<=n;++i)
	printf("%.2lf\n",a[i][n+1]);
	return 0;
}
