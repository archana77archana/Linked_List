#include"List_Int.h"

using namespace std;
/* Program entry point. */
int main(){
	List_Int l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);
	l1.push_back(60);
	l1.push_back(70);
	List_Int::iterator j(l1.begin());
	cout << l1;
	++j;
	List_Int::iterator s(j);
	s=l1.erase(j);
	cout << "\n After erassing 1.\n";
	cout << l1;
	List_Int::iterator k(l1.begin());
	++k; ++k; ++k; ++k;
	List_Int::iterator t(l1.begin());
	t = l1.erase(k);
	cout << *t;
	++s, ++s;
	List_Int::iterator f(s);
	f=l1.erase(s,t);
	cout << "\n After erassing 2.\n";
	cout << l1;
	cout << "overloaded Constructor";
	List_Int l2(5, 10);
	cout << l2;
	List_Int::iterator m(l1.begin());
	l1.insert(m,33);
	cout << *m;
	cout << *t;
	++m;
	l1.insert(m,33);
	Iterator_Node g(l1.end());
	l1.insert(g,33);
	List_Int l3(m,t);
	cout << "\nl3 :"<<l3;
	List_Int l4(l3);
	cout << "L4 :" << l4;
	cout<<l4;
	cout << "L4 after Clear";
	l4.clear();
	cout << l4;
	cout<<"Swap";
	l1.swap(l2);
	cout<<"l1 :"<<l1<<"l2 :"<<l2;

	cout<<"end";

	return 0;
}
