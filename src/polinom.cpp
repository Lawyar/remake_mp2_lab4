#include "polinom.h"
#include <iostream>

Polinom::Polinom()
{
	polinom.clear();
}

Polinom::Polinom(const Polinom& x)
{
	this->polinom = x.polinom;
}

void Polinom::addElement(monom x)
{
	polinom.push_back(x);
}

void Polinom::addElementToBack(monom x)
{
	polinom.push_back(x);
}

int Polinom::getLength() const
{
	return polinom.size();
}

monom& Polinom::operator[](int pos)
{
	if(pos > polinom.size())
	{
		throw "Incorrect position";
	}
	int i = 0;
	for(monom& it : polinom)
	{
		if(i == pos)
		{
			return it;
		}
		i++;
	}
}

void Polinom::Simplify()
{
	if (getLength() == 1)
	{
		return;
	}
	std::list<monom>::iterator current = polinom.begin();
	if(current == polinom.begin())
	{
	  return;
	}
  ++current;
	std::list<monom>::iterator prev = polinom.begin();

	while (current != polinom.end())
	{
		if (*current == *prev)
		{
			*prev = *prev + *current;
			prev = polinom.erase(current);
			current = prev;

			continue;
		}
		if (current == polinom.end())
		{
			break;
		}
		prev = current;
		++current;
	}
}

Polinom& Polinom::operator = (const Polinom &right) {
	if (this == &right) 
	{
		return *this;
	}

	this->polinom = right.polinom;
	return *this;
}

Polinom& operator + (const Polinom& left, const Polinom& right)
{
	Polinom *res = new Polinom;

	auto current_left = left.polinom.begin();
	auto current_right = right.polinom.begin();

	if (left.getLength() == 0)
	{
		res->Simplify();
		return *res = right;
	}
	if (right.getLength()==0)
	{
		res->Simplify();
		return *res = left;
	}
	while (current_left != left.polinom.end() && current_right != right.polinom.end())
	{
		if (*current_left > *current_right)
		{
			res->addElementToBack(*current_left);
			++current_left;
		}
		else
		{
			res->addElementToBack(*current_right);
			++current_right;
		}
	}
	if (current_left != left.polinom.end())
	{
		while (current_left != left.polinom.end()) 
		{
			res->addElementToBack(*current_left);
			++current_left;
		}
	}
	else
	{
		while (current_right != right.polinom.end()) 
		{
			res->addElementToBack(*current_right);
			++current_right;
		}
	}
	res->Simplify();
	return *res;
}

Polinom& operator-(const Polinom& left, const Polinom& right)
{
	Polinom *res = new Polinom;
	if (right.getLength()==0)
	{
		return *res = left;
	}
	if (left.getLength() == 0)
	{
		return *res = right*(monom(-1,0));
	}

	*res = left + right*monom(-1,0);
	res->Simplify();

	return *res;
}

Polinom& operator*(const Polinom& left, const monom& right)
{
	Polinom *res = new Polinom;
	auto current = left.polinom.begin();
	while (current != left.polinom.end())
	{
		res->addElement(*current * right);
		++current;
	}
	return *res;
}

Polinom& operator*(const Polinom& left, const Polinom& right)
{
	Polinom *res = new Polinom;
	Polinom temp;
	auto current = left.polinom.begin();
	auto current_right = right.polinom.begin();
	while (current != left.polinom.end()) 
	{
		temp = right * *current;
		*res += temp;
		++current;
	}
	return *res;
}

Polinom& operator+=(Polinom& left, const Polinom& right)
{
	auto current = right.polinom.begin();
	while (current != right.polinom.end()) 
	{
		left.addElement(*current);
		++current;
	}
	left.Simplify();

	return left;
}