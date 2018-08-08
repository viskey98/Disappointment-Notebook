vi p, r, s; 
void initialize(int N) 
{
		r.assign(N, 0);
		s.assign(N, 1);
		p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; 
}
int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j)
{
	if (!isSameSet(i, j))
	{
		int x = findSet(i), y = findSet(j);
		if (r[x] > r[y]) 
		{
			p[y] = x; 
			s[x] +=s[y];
		}
		else 
		{
			p[x] = y;
			s[y] += s[x];
			if (r[x] == r[y]) r[y]++;
		}
	}
}
int sizeOfSet(int i){return s[findSet(i)];}