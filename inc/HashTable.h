#include "NodeTable.h"
#include "table.h"

class HashTable : public Table
{
private:
	list<NodeTable>** data;
	int max_size;

	int hashfunc(string s);
	int Find(string key) { return 0; };
public:
	HashTable();

	void Insert(string key, Polinom* p);
	void Delete(string key);
	Polinom* GetNode(string key);
};
