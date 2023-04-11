#include <iostream>
using namespace std;
#include<string>
int getPower(int num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}
	else
	{
		return num * (getPower(num, --pow));
	}
}
int get_count(string b, int size)
{
	cout << size << endl;
	int count = 0;
	if (size == 0)
	{
		return count;
	}
	else
	{
		count = count + get_count(b,size-1);
		if (b[size-1] == 'a' || b[size-1] == 'e' || b[size-1] == 'i' || b[size-1] == 'o' || b[size-1] == 'u' || b[size-1] == 'A' || b[size-1 ]== 'E' || b[size-1] == 'I' || b[size-1] == 'O' || b[size-1] == 'U')
		{
		return count;
		}
		else
		{
			count++;
			return count;
		}
	}
}
int get_consonents(string a)
{
	return get_count(a, size(a));
}
int main()
{
	string str = "abdulrehmaaadddan";
	cout<<get_consonents(str);
	/*cout << getPower(4, 3);*/
}