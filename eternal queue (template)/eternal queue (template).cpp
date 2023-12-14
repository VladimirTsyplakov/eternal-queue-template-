#include<iostream>
using namespace std;
const int siz = 2;

template<class Ap>
class que
{
private:
	Ap mas[siz];
	int top = 0;
	int tail = -1;
	int sch = 0; int turn = 0;
public:
	que() {}
	void putd(Ap a)
	{
		if (tail >= siz - 1)tail = -1;
		if (sch >= siz)top++;
		if (top > siz - 1) { top = 0; turn += 2; }
		mas[++tail] = a;
		sch++;
	}
	void getd();
};

template<class Ap>
void que<Ap>::getd()
{
	if (top == siz)top = 0;
	cout << mas[top++] << endl;
	sch--;
	if (sch == 1)//
	{
		cout << "очередь пуста"; exit(0);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	que<int> a;
	a.putd(3);
	a.putd(8);
	a.putd(4);
	a.getd();
	a.getd();
	//exit() в выводе
	que<double> b;
	b.putd(23);
	b.putd(12);
	b.putd(34);
	b.getd();
	b.getd();
}