struct compare 
{
    bool operator() (const int &lhs, const int &rhs) const
	{
         return (lhs > rhs);
    }
};
set<int, compare> st ;