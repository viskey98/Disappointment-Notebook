ll fast_exp(ll base, ll exp)
  {
    lli res=1;
    while(exp>0)
      {
        if(exp%2==1) res=(res*base)%mod;
        base=(base*base)%mod;
        exp/=2;
      }
    return res%mod;
  }

ll getInverse(ll n)
  {
    return fast_exp(n, mod-2) ;
  }

ll divide(ll a, ll b)
  {
    a=a%mod ;
    b=b%mod ;
    return (a*(getInverse(b)%mod))%mod ;
  }
