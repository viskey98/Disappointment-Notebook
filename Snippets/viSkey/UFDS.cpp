int FindSet(int i)
{
	return (parent[i]==i)? (i):(parent[i]=FindSet(parent[i]));
}
bool IsSameSet(int i , int j)
{
	if(FindSet(i)==FindSet(j))
		return true;
	else return false;
}
void UnionSet(int i , int j)
{
	if(IsSameSet(i,j))
		return;
	int x = FindSet(i);
	int y = FindSet	(j);
	if(rnk[x]>rnk[y])
		parent[y]=x;
	else 
	{
		if(rnk[x]==rnk[y])
		rnk[x]++;
		parent[y]=x;
	}
}
