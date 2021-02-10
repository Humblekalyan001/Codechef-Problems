#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
vector<int> table;
void primeinx()
{
    int n=1000005;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int count=0;
    table.push_back(0);
    table.push_back(0);
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            count++;
        table.push_back(count);
    }
}

// Driver Code
int main()
{
	fastio;
	primeinx();
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(table[x]<=y)
	        cout<<"Chef\n";
	    else
	        cout<<"Divyam\n";
	}
	return 0;
}
