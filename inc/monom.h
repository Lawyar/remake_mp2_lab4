#pragma once

class monom
{
private:
	double coefficient;
	int degree;
public:
	monom(double coefficient = 0, short degree = -1);
	monom(const monom &x);
	double GetCoefficient() const;
	short GetDegree() const;
	void SetCoefficient(double c = 0);
	void SetDegree(short d = 0);

	friend bool operator ==(const monom& left, const monom& right);
	friend bool operator !=(const monom& left, const monom& right);
	friend bool operator <(const monom& left, const monom& right);
	friend bool operator >(const monom& left, const monom& right);

	monom& operator = (const monom& right);

	friend monom operator + (const monom& left,const monom& right);
	friend monom operator - (const monom& left,const monom& right);
	friend monom operator * (const monom& left, const monom& right);
};