#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll w[n];
        ll l[n];
        for(int i=0; i<n; i++) cin>>w[i];
        for(int i=0; i<n; i++) cin>>l[i];
        
        if(n==2)
        {
            if(w[0]==1 && w[1] == 2) cout<<"0\n";
            else
            {
                if(l[0]==1) cout<<"2\n";
                else cout<<"1\n";
            }
        }
        else if(n==3)
        {
            ll a, b, c, ap, bp, cp;
            ll ans =0;
            for(ll i=0;i<n;i++)
            {
                if(w[i]==1)
                {
                    a=i;
                    ap=i;
                }
                else if(w[i]==2)
                {
                    b=i;
                    bp=i;
                }
                else if(w[i]==3)
                {
                    c=i;
                    cp=i;
                }
            }
            while(c<=b || b<=a || c<=a)
            {
                while(b<=a)
                {
                    b+=l[bp];ans++;
                }
                while(c<=b || c<=a)
                {
                    c+= l[cp];ans++;
                }
            }
            cout<<ans<<"\n";
        }
        else if(n==4)
        {
            ll a, b, c,d, ap, bp, cp,dp;
            ll ans =0;
            for(ll i=0;i<n;i++)
            {
                if(w[i]==1)
                {
                    a=i;
                    ap=i;
                }
                else if(w[i]==2)
                {
                    b=i;
                    bp=i;
                }
                else if(w[i]==3)
                {
                    c=i;
                    cp=i;
                }
                else if(w[i]==4)
                {
                    d=i;
                    dp=i;
                }
            }
            while(d<=a || d<=b || d<=c || c<=b || b<=a || c<=a)
            {
                while(b<=a)
                {
                    b+=l[bp];ans++;
                }
                while(c<=b || c<=a)
                {
                    c+= l[cp];ans++;
                }
                while(d<=c || d<=b || d<=c)
                {
                    d += l[dp];ans++;
                }
            }
            cout<<ans<<"\n";
        }
    }
}
