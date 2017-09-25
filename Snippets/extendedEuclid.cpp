//solve a*x+b*y = gcd(a,b) i.e finds x,y and d=gcd

ll x,y,d;

void exteuclid(ll a, ll b){
	if (b==0)
	{
		x = 1;
		y = 0;
		d = a;
		return;
	}

	exteuclid(b, a%b);
	ll x1 = y;
	ll y1 = x - (a/b)*y;
	x = x1;
	y = y1;
}