 #include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    
    int p,n,t  =0;
    
    cin>> p;
    for(int i=0;i<p;i++)
    {
        cin>>n;
        t =0;
        for(int j=0;j<n;j++)
        {
            cin>>k ;
            
             
             t+=k % n;
        }
        if( t%n==0){cout<<"YES\n";}else{cout<<"NO\n";}
    }
    return 0;
}