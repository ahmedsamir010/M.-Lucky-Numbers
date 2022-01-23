//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed 
        ll a, b,cnt=0; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        bool ch = 1;
        ll n = i;
        while (n != 0) {
          ll t = n % 10; n /= 10;
          if (t != 4 and t != 7)ch = 0;
        }
        if (ch == 1) { cout << i << ' '; cnt++; }
    }
    if (cnt == 0) { cout << -1 << endl; }



}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف