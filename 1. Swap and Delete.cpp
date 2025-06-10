#include <bits/stdc++.h>
#define ll long long
#define hi ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define in(j,n,v) for(int i=j; i<n; i++) cin>> v[i];
#define out(j,n,v) for(int i=j; i<n; i++) cout<< v[i]<<" ";
#define mp(x, y) make_pair(x, y)
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define test int t; cin >> t; while (t--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define ld long double
#define nl '\n'
#define iint 1000000000
#define mod 1000000007
#define mod2 998244353
using namespace std; 
int main()
{
    test
    {
       string s;
       cin>> s;
       int zero=0, one=0;
       for(int i=0; i<s.size(); i++)
       {
           if(s[i]=='0')
            zero++;
           else
            one++;
       }
        int n= s.size();
       for(int i=0; i<s.size(); i++)
       {
           if(s[i]=='1')
           {
               if(zero>0)
                zero--;
               else
               {
                   n=i;
                   break;
               }
           }else
           {
              if(one>0)
                one--;
               else
               {
                   n=i;
                   break;
               }
           }
       }
 
       cout<< s.size()-n<< endl;
    }
}
