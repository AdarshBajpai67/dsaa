#include<bits/stdc++.h>
#include <numeric>
#include <vector>
 
using namespace std;
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#define vi vector<int>
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define vpll vector<pair<int,int>>
#define si set<int>
#define sll set<ll>
 
 
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define mp make_pair
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
#define yes cout << "YES"
#define no cout << "NO"
#define newline cout << "\n"
#define pno cout << -1
 
const ll mod=1e9+7;
 
#define firstIndex(s, c) (s.find_first_of(c))
#define isIncreasing(v) (std::adjacent_find(v.begin(), v.end(), std::greater_equal<int>()) == v.end() ? 1 : 0)
#define allCharactersSame(s) ((s.find_first_not_of(s[0]) == string::npos) ? 1 : 0)
 
#define amax(a) *max_element(a, a + n)
#define amin(a) *min_element(a, a + n)
#define vmax(a) *max_element(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vprint(v) for (auto it : v) cout << it << " "
#define aprint(a) for (int i = 0; i < asize(a); i++) cout << a[i] << " "
 
ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}
 
#define max(a, b) (a < b ? b : a)
// #define min(x, y) (x > y ? x : y)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define FORA(a, b, c) for (int(a) = (b); (a) < (c); a++)
 
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define vprint(v) for (auto it : v) cout << it << " "
// #define aprint(a,size) for (int i = 0; i < size; i++) cout << a[i] << " "
#define aaprint(arr) for (int i : arr) cout << i << " "
 
 
// Sorting the vector elements on the basis of first 
// element of pairs in ascending order.
// sort(ans.begin(), ans.end());
 
// Sorting the vector elements on the basis of second 
// element of pairs in ascending order.
// bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
//     return (a.second < b.second);
// }
// sort(ans.begin(), ans.end(), sortbysec);
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

 
bool sortByValDesc(const pair<char, int>& a, const pair<char, int>& b) {
    return (a.second > b.second);
}
 
bool sortByValAsc(const pair<char, int>& a, const pair<char, int>& b) {
    return (a.second < b.second);
}
 
vector<pair<char, int>> countFrequencies(string str) {
    unordered_map<char, int> freqMap;
    
    for (char c : str) {
        freqMap[c]++;
    }
 
    vector<pair<char, int>> sortedFreq(freqMap.begin(), freqMap.end());
 
    // sort(sortedFreq.begin(), sortedFreq.end(), sortByValDesc); // sort in descending order
    // cout << "Descending order:" << endl;
    // for (auto it = sortedFreq.begin(); it != sortedFreq.end(); ++it) {
    //     cout << it->first << ": " << it->second << endl;
    // }
 
    sort(sortedFreq.begin(), sortedFreq.end(), sortByValAsc); // sort in ascending order
 
    return sortedFreq;
}
 
bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
 
	// sort in descending order 
	// sort(arr,arr+array_size,greater<int>());
 
	// sort in ascending order
	// sort(arr,arr+array_size);
 
 
void solve(){
	ll target;
	cin>>target;
	vll a;
	seev(a,n);
	min_path=min(abs(a[n-1]-s),abs(s-a[0]));
	debug(a)
	debug(min_path)
	debug()
	cout << (a[n-1]+min_path-1) << endl;
}
 
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
	int tc=1;
	cin>>tc;
	FOR(t,tc){
		// cout <<"Case #"<<t+1<< ": ";
		solve();
	}
};