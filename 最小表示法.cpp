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
			
			if(a[(i+k)%n]>a[(j+k)%n])i=i+k+1;//S[i+k]>S[j+k]S[i+k]>S[j+k]����ô�����ѷ��֣���������һ����ʼλ�� ll ���� i��l��i+ki��l��i+k ���ַ��� A��A�䣬һ������һ����Ӧ�� B��B�� ����ʼλ�� rr ���� j��r��j+kj��r��j+k��B��B�� ���ֵ���С�� A��A�� ���ֵ��򣬿���ֱ������ [i+1,i+k][i+1,i+k] ��һ�����䣬ֱ�Ӵ� i+k+1i+k+1 ��ʼ�µıȽϡ� 
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
