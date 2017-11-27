#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

int count = 1;
class Widget {
public:
	Widget() { std::cout << "Default Constructor" << std::endl; }
	Widget(const Widget&) { std::cout << count++ << "Copy Constructor" << std::endl; }

};
Widget f(Widget u)
{
	Widget v(u);
	Widget w = v;
	return w;
}
int main() 
{
	Widget x;
	/*
	Widget y =
	*/
	f(f(x));
	//
	int a[] = { 1,2,3,4 };
	auto a1 = sizeof(a);
	std::cout << a1 << std::endl;
	std::vector<int> ivec1;
	std::vector<int>::iterator iter1(ivec1.begin());
	for (int i = 0; i != 4; ++i)
	{
		iter1 = ivec1.insert(iter1, a[i]);
		++iter1;
		//std::cout << *iter1 << std::endl;此时iter1的值变了
	}
	std::vector<int> ivec2;
	ivec2.push_back(1);
	std::cout << ivec2.capacity() << std::endl;
	ivec2.reserve(10);
	int a2[11] = { 1,2,3,4,5,6 };
	std::cout << ivec2.size()<<std::endl;
	std::cout << ivec2.capacity() << std::endl;
	ivec2.insert(ivec2.begin(),a2,a2+6);
	ivec1.assign(a, a + 3);
	for (const auto& iter2 : ivec2)
		std::cout << iter2 << std::endl;
	for (auto& iter11 : ivec1)
	{
		std::cout <<"==="<< ++iter11 << std::endl;
	}
	getchar();
}
