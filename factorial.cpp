#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int sum=0;
    for(int i=1; i<=number; i++)
    {
        sum*=i;
    }
    print(sum);
    cout<<sum<<endl;
}
