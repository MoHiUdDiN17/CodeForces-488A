#include<bits/stdc++.h>
using namespace std;
#define x -8888888888
#define y 8888888888
int main()
{
    int n,flag;
    int temp,rem;
    cin>>n;
    flag=n;
    while(n>=x && n<=y)
    {
        n=n+1;
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            if(rem==8 || rem==-8)
            {
                cout<<n-flag<<endl;
                return 0;
            }
            temp/=10.0;
        }
    }
}
