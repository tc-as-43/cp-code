void sieve()
{
    prm.reserve(N);

    mark[0] = mark[1] = false;
    rep(i, 2, N)
    {
        if(mark[i]==true)
        {
            loop(j, i*2, N, i) mark[j] = false;
        }
    }

    rep(i, 1, N)
    {
        if(mark[i]==true) prm.push_back(i);
    }
}
