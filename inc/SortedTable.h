#include "Table.h"
#include "NodeTable.h"

class SortedTable : public Table
{
private:
	int count_data;
	int max_size;
	NodeTable* data;

	bool IsFull();
	void AddOrderly(string key, Polinom* p);
	void MoreMem();
	int Find(string key);
public:
	SortedTable();
	int GetCountData();
	void Insert(string key, Polinom* p);
	void Delete(string key);
	Polinom* GetNode(string key);
};
