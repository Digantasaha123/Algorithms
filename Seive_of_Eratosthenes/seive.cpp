#include<bits/stdc++.h>
// hi
using namespace std;
const int N = 1e7+10;
vector <bool> isprime(N, 1);

int main()
{

    isprime[0]==isprime[1]==false;
    for(int i = 2; i<N; i++)
    {
        if(isprime[i]==true)
        {
            for(int j = i*2; j<N; j+=i )
            {
                isprime[j]=false;
            }
        }
    }



    int t;
    cin>>t;
    while(t--)
    {
        int x; 
        cin>>x;
        if(isprime[x])
        {
            cout<<"prime"<<endl;
        }
        else 
        cout<<"Not prime "<<endl;
    }
    return 0;
}