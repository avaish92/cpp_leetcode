#include <iostream>
#include <vector>

using namespace std;

template <typename Aman>
Aman &findMax(std::vector<Aman> &a){
	int maxIndex = 0;
	for(int i = 0;i<a.size();++i){
		if(a[maxIndex] < a[i])	maxIndex = i;
	}
	return a[maxIndex];
}

int main(int argc, char const *argv[])
{
	std::vector<int> v = { 43,764,32, 65,897,423 };
	std::vector<string > v1 = { "fnkdsfnksl", "nfsife","cndncsodc","fbakflskd" };
	cout<< findMax(v) << endl;
	cout<< findMax(v1) << endl;
	return 0;
}
