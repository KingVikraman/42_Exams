#include "vect2.hpp"


vect2::vect2() : x_val(0), y_val(0)
{

};

vect2::vect2(int num1, int num2) : x_val(num1), y_val(num2)
{

};

vect2::vect2(const vect2 &other) : x_val(other.x_val), y_val(other.y_val)
{

};

vect2::~vect2()
{

};

vect2 &vect2::operator=(const vect2 &other)
{
	if(this != &other)
	{
		x_val = other.x_val;
		y_val = other.y_val;
	}
	return(*this);
}

vect2 &vect2::operator+=(const vect2 &other)
{
	x_val += other.x_val;
	y_val += other.y_val;

	return(*this);
}

vect2 &vect2::operator-=(const vect2 &other)
{
	x_val -= other.x_val;
	y_val -= other.y_val;

	return(*this);
}

vect2 &vect2::operator*=(const int scalar)
{
	x_val *= scalar;
	y_val *= scalar;

	return(*this);
}

vect2 vect2::operator+() const
{
	return(*this);
}

vect2 vect2::operator-() const
{
	return(vect2(-x_val, -y_val));
}

vect2 &vect2::operator++()
{
	x_val++;
	y_val++;
	return(*this);
}

vect2 vect2::operator++(int)
{
	vect2 temp = *this;
	x_val++;
	y_val++;
	return(temp);
}

vect2 &vect2::operator--()
{
	x_val--;
	y_val--;
	return(*this);
}

vect2 vect2::operator--(int)
{
	vect2 temp = *this;
	x_val--;
	y_val--;
	return(temp);
}

bool vect2::operator==(const vect2 &other) const
{
	return(this->x_val == other.x_val && this->y_val == other.y_val);
}

bool vect2::operator!=(const vect2 &other) const
{
	return(!(*this == other));
}

int &vect2::operator[](int i)
{
	if(i == 0)
		return x_val;
	else
	 	return y_val;
}

const int &vect2::operator[](int i) const
{
	if(i == 0)
		return x_val;
	else
	 	return y_val;
}

vect2 vect2::operator+(const vect2 &other) const
{
	int num1 = this->x_val + other.x_val;
	int num2 = this->y_val + other.y_val;

	return(vect2(num1, num2));
}

vect2 vect2::operator-(const vect2 &other) const
{
	int num1 = this->x_val - other.x_val;
	int num2 = this->y_val - other.y_val;

	return(vect2(num1, num2));
}


vect2 vect2::operator*(const int scalar) const
{
	int num1 = this->x_val * scalar;
	int num2 = this->y_val * scalar;

	return(vect2(num1, num2));
}

std::ostream &operator<<(std::ostream &os, const vect2 &v)
{
	os << "{" << v.x_val << "," << v.y_val << "}";
	return os;
}

vect2 operator*(const int scalar, const vect2 &other)
{
	return(other * scalar);
}
