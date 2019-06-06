#include "pch.h"
#include <iostream>
#include <list>

int main()
{
	std::list<int> flist{ 2,3,-1,3,-4,4,-4,-2,5,5,1 };
	std::list<int> reslist;
	bool flag = false;
	for (auto& iter : flist)
	{
		if (!flag)
		{
			reslist.push_back(iter);
		}
		flag = iter == 4;
	}
	reslist.reverse();
	flist = reslist;
	reslist.clear();
	flag = false;
	for (auto& iter : flist)
	{
		if (flag)
		{
			reslist.push_back(0);
		}
		reslist.push_back(iter);
		flag = iter == 1;
	}
	reslist.reverse();
	for (auto& iter : reslist)
	{
		std::cout << iter << '\n';
	}
}