#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    cout << n <<' ';
    while(n != 1){
        if( n %  2 == 0 ) n /= 2;
        else n = n * 3 + 1;

        cout << n << " ";
    }
    return 0;
}