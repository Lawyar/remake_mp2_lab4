#pragma once
#include "monom.h"
#include <list>

class Polinom
{
private:
	std::list<monom> polinom;
public:
	Polinom();
	Polinom(const Polinom &x);

	void addElement(monom x);
	void addElementToBack(monom x);
	int getLength() const;
	
	void Simplify();

	monom& operator[](int pos);
	friend Polinom& operator + (const Polinom& left, const Polinom& right);
	friend Polinom& operator - (const Polinom& left, const Polinom& right);
	friend Polinom& operator * (const Polinom& left, const monom& right);
	friend Polinom& operator * (const Polinom& left, const Polinom& right);
	friend Polinom& operator += (Polinom& left, const Polinom& right);

	Polinom& operator = (const Polinom &right);
};