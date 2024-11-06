#include <bits/stdc++.h>
using namespace std;

bool digit(long long n)
{
    vector<int> a;
    while(n!=0)
    {
       a.push_back(n%10);
       n/=10;
    }
if(a.size()==1) return false;
    for(int i=0;i<a.size()-1;i++)
    {
        if(abs(a[i]-a[i+1]) != 1) return false;
    }    
return true;
}



int main() {
	int t; cin>>t; while(t--)
	{
	    long long n,k; cin>>n>>k;
	    long long a[n],flag=0;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++){
	        if(a[i]<k && (digit(a[i])==true)) {flag=1; cout<<a[i]<<" "; }
	    }
	    if(flag==0) cout<<-1;
	   cout<<endl;
	}
	return 0;
}