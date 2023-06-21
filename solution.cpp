#include <iostream>
#include <vector>
#define loop(start, limit) for (int i = start; i < limit; i++)
#define tr(container, it) for (decltype (container.begin()) it = container.begin(); it != container.end(); it++)
#define sz(a) int(a.size())
#define all(c) c.begin(), c.end()
#define pb push_back
#define present(c, x) (c.find(x) != c.end())
#define cpresent(c, x)(find(all(c), x) != c.end())
 
using namespace std;
 
typedef vector < int > vi;
typedef pair < int, int > ii;
typedef long long ll;

int parity(int p[], int p_inv[], int n) {
    int t = 0, u;
    loop(0, n) {
        if (p[i] != i) {
            t++;
            u = p_inv[i];
            p_inv[p[i]] = u;
            p[u] = p[i];
            p[i] = i;
        }
    }
    return t%2;
}

void solve(void) {
    int n, cred = 65;
    cin >> n;

    
    //determining parity of inversions
    int temp;
    int p[n], p_inv[n];
    loop(0, n) {
        cin >> temp;
        p[i] = temp - 1;
        p_inv[p[i]] = i;
    }
    if (parity(p, p_inv, n)) cred = 50;

    
    
    vi a(n + 1);
    vi c(n + 1);
    loop(1, n + 1) cin >> a[i];
    loop(1, n + 1) cin >> c[i];
    
    //matrix for storing values
    vector <vector <ll> > m(n + 1, vector <ll> (cred + 1, 0));
    
    loop(1, n + 1) {
        for (int j = 1; j < cred + 1; j++) {
            //filling in a cell with max achievable value
            if (j >= c[n + 1 - i]) m[i][j] = max(m[i - 1][j], m[i - 1][j - c[n + 1 - i]] + a[n + 1 - i]);
            else m[i][j] = m[i - 1][j];
        }
    }
    cout << m[n][cred] << endl;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}