#pragma once

#include "polinom.h"
#include <string>
#include <list>

using namespace std;

class Table
{
protected:
	virtual int Find(string key) = 0;
public:	
	virtual void Insert(string key, Polinom *p) = 0;
	virtual void Delete(string key) = 0;
	virtual Polinom* GetNode(string key) = 0 ;
};
