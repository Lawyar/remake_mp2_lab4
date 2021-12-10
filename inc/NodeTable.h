#pragma once
#include <string>
#include "polinom.h"

class NodeTable
{
private:
  std::string name;
	Polinom* element;
public:
	NodeTable();
	NodeTable(const NodeTable& r);
	NodeTable(const std::string& name_, Polinom* elem);

  std::string GetKey() const;
	Polinom* GetElement() const;
	NodeTable& operator=(const NodeTable& r);
	bool operator==(const NodeTable& r) const;
};
