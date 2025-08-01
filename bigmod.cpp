
int MOD= 1e9+7;

inline int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a; b >>= 1;
    }
    return res;
}

inline int modpow(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m; b >>= 1;
    } return res;
}

inline int modinv(int b, int m = MOD) {
    
    return modpow(b, m - 2, m);
}

inline int modadd(int a, int b)
{
    return ((a%MOD)+(b%MOD))%MOD;
}

inline int modsub(int a, int b)
{
    return ((a%MOD)-(b%MOD)+MOD)%MOD;
}

inline int modmul(int a, int b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}

inline int moddiv(int a, int b, int m = MOD) {
    return (a % m * modinv(b, m)) % m;
}


