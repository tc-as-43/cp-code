int b = 43;
int MOD= 1e9+7;
/* 1e9+7 | 1e9+9 | 1000004329 | 1000075057 
   1000111103 | 1763922631 | 1977326753 
   2122331213 | 3149403637 | 5769213841 */
 

//bigmod function here....

int returnhash(string s, int base=b, int m=MOD)
{
    int hshval = 0; int pwr=1;

    each(c, s){
        hshval = (hshval+ (c-'a'+1)*pwr) % m;
        pwr = (pwr*base)%m;
    }

    return hshval;
}

vector <int> rangehash(string s, string t, int base=b, int m=MOD)
{
    int l = s.length();
    vector <int> pwr(l);
    pwr[0] = 1;

    rep(i, 1, l-1)
    {
        pwr[i] = (pwr[i-1] * base) % m;
    }

    vector<int> hsh (l+1);

    hsh [0] = 0;

    fr(i, l)
    {
        hsh[i+1] = (hsh[i] + (s[i]-'a'+1)*pwr[i]) % m;
    }

    int T  = sz(t);
    vector <int> rnghsh (l-T+1);

    for(int i=0; i+T <= l; i++)
    {
        int curr = modsub( hsh[i+T] , hsh[i] );
        rnghsh[i] = moddiv(curr, pwr[i]);
    }

    return rnghsh;
}
