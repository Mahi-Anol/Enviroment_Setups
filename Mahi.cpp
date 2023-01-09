/*بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ */
//*****ربِّ زِدْنِي عِلْماً*****//
/******************************/
///////Mahi Sarwar Anol///////
/*******************************/
#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
   #include "mahi/debug.h"
#endif
#define ull unsigned long long
typedef long long int ll;
#define t_digit(x) (int)log10((double)x)+1
#define endl "\n"
using pi = pair<int,int>;
#define mp make_pair
#define f first
#define s second
using vi = vector<int>;
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define pb push_back
#define endl "\n"
#define mod 1000000007;//10^9+7;

void s_test();
void FIO();
int t = 1;

int tc=t;

bool cmp(int a,int b)
{
   return a>b;
}

void solution()
{

   int n;
   cin>>n;
   

}

signed main()
{   
   // clock_t sc = clock();
   FIO();
   s_test();

   cin >> t;
   while (t--)
   {
      try{
         solution();
      }catch(exception &ex)
      {
          for(int i=1;i<5;i++)
          {
            for(int j=1;j<42;j++)
            {
               cerr<<"*";
            }
            cerr<<endl;
          }
          cerr<<"\t\t\t\t\t\t\t\t\t\t\tCheak Inputs and data types and max range"<<endl;
      }
   }
   cerr.precision(8);
   // cerr << fixed << "Run Time : " << ((double)(clock() - sc) / CLOCKS_PER_SEC)<<endl;
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   cin.exceptions(ios::badbit | ios::failbit);
}

void s_test()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   // freopen("error.txt","w",stderr);
   #endif
}
