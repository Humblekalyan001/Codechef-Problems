#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool inRange(int x)
{
    return (1<= x && x<= 10);
}

void findDivisors(int N)
{
    vector<int> v1;
    for(int i=1; i<=N; i++)
    {
        if(N % i == 0)
        {
            if(inRange(i))
            {
                v1.push_back(i);
            }
        }
    }

    int x = *max_element(v1.begin(), v1.end());
    cout<<x <<endl;

}
int main()
{
    int N;
   // cout<<"Enter the Number : ";
    cin>>N;
    findDivisors(N);
    return 0;
}
