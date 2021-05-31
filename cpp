#include <iostream>
#include<cstring>
#include  <bits/stdc++.h>
using namespace std;
int main() 
{       int count=1;
        string s,temp;
        cin>>s;
        temp=s;
        int e=s.size()-1;
        for(int i=0;i<=e;i++)
        {
            count=1;
            for(int j=0;j<=e;j++)
            {
            if(s[i]==temp[j])
            {
                count++;
            }
            if(j==e && count>1)
            {
                cout<<s[i]<<" repeated "<<count<<" times";
                break;
            }
        }
        return 0;
}
}
 
