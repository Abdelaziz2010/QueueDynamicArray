#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Queue :private vector<T>
{
public:
	void Enqueue(T item)
	{
		this->insert(this->begin(), item);
	}

	T Dequeue()
	{
		T item = this->back();
		this->pop_back();
		return item;
	}

	bool IsEmpty()
	{
		return this->size() == 0;
	}
};

void main()
{
	Queue<int> x;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number: ";
		int n;
		cin >> n;
		x.Enqueue(n);
	}

	while (!x.IsEmpty())
	{
		cout << x.Dequeue() << endl;
	}
}