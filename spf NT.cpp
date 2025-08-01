int N= 1e5+5;
vi spf(N);

void precalc()
{
    rep(i, 0, N-1)spf[i]  = i;

    rep(i, 2, N-1)
    {
        if(spf[i] == i)
        {
            for(int j = i*2; j<=N; j+=i)
            {
               if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

}
