#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
       long long  int N;
        cin>>N;
        long long int arr[N];
        long long int max = INT_MIN;
        long long int min = INT_MAX;
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
            if(arr[i] > max)
            {
                max = arr[i];
            }
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        long long ans = max - min;
        ans*=2;
        cout<<ans<<endl;
    }
    return 0;
}
