#include <bits/stdc++.h>

using namespace std;

inline int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a; b >>= 1;
    }return res;
}

int mod_pow(int a, int b) {

    int res = 1;
    while (b)
    {
        if (b & 1)
        res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int N= 1e5+5;
vector<int> spf(N);
void spfcalc()
{
    for(int i=1; i<=N; i++) spf[i]  = i;

    for(int i=2;i<=N;i++)
    {
        if(spf[i] == i)
        {
            for(int j = i*2; j<=N; j+=i)
            {
               if(spf[j] == j)   spf[j] = i;
            }
        }
    }
}

vector<int> getFact(int x) {
    vector<int> res; 
    while (x != 1) {
        res.push_back(spf[x]);
        x /= spf[x];
    }
    return res;
}

map <int, int> get_fact_map(int x) {
    
    map <int, int> res;
    
    while (x != 1) {
        int p = (spf[x]);
        res[p]++;
        x /= p;
    }
    return res;
}

int num_div(int x)
{
    map <int, int> mp; 
    while (x != 1) {
        int p = (spf[x]);
        mp[p]++;
        x /= p;
    }
    int ans = 1;
    for(auto [num, fre]: mp)
    {
        ans *= (fre+1);
    }return ans;
}

int sum_of_div(int x)
{
    map <int, int> mp;
    while (x != 1) {
        int p = (spf[x]);
        mp[p]++;
        x /= p;
    }
    int ans = 1;
    for(auto [num, fre]: mp)
    {
        ans *= (binpow(num, (fre+1)) -1)/(num-1);
    }return ans;
}

int prod_of_div(int x)
{
    int d = num_div(x);
    int ans = binpow(x, (d/2));
    return ans;
}
//Euler's totient function φ(n):
int phi_func(int n) {
    int result = n;
    for (int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            
            while (n % p == 0) n /= p;
            result -= (result / p);
        }   
    }
    if (n > 1) result -= (result / n);
    return result;
}

//precompute φ(n):
const int N = 1e6 + 5;
vector<int> phi(N+5);
void computeTotient() {
    for (int i = 1; i < N; i++) phi[i] = i; // Initialize
    
    for (int i = 2; i < N; i++) {
        if (phi[i] == i) { // i is prime
        for (int j = i; j < N; j += i) {
            phi[j] -= (phi[j] / i);
        }
    }
    }
}


vector<bool> segmentedSieve(long long L, long long R){
    long long lim = sqrt(R) + 1;
    vector<bool> isPrime(lim + 1, true), isSeg(R - L + 1, true);
    for (long long i = 2; i <= lim; ++i)
    {
        if (isPrime[i])
        {
            for (long long j = i * i; j <= lim; j += i)
            isPrime[j] = false;
            for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isSeg[j - L] = false;
        }
    }
    if (L == 1) isSeg[0] = false;
    return isSeg;
}

const int MOD = 1e9+7, N = 1e6+5;

vector<int> fact(N), inv(N);

void precalc() {
    fact[0] = 1;
    
    for (int i = 1; i < N; ++i) 
        fact[i] = fact[i - 1] * i % MOD;

    inv[N - 1] = mod_pow(fact[N - 1], MOD - 2);
    
    for (int i = N - 2; i >= 0; --i)
        inv[i] = inv[i + 1] * (i + 1) % MOD;   
}

long long nCr(int n, int r)
{
    if (r < 0 || r > n) return 0;
    return fact[n] * inv[r] % MOD * inv[n - r] % MOD;
}

int legendre(int n, int p)
{
    int ans = 0;
    int b = p;
    while(n>=b)
    {
        ans += (n/b);
        n/=b;
        b*=p;
    }

    return ans;
}