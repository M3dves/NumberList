#include "NumberList.h"

int main()
{
	int a[10], n;
    NumberList v;
    std::cin >> n;
    v.Init();
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        v.Add(a[i]);
    }
    v.Print();
    v.Sort();
    v.Print();

}


