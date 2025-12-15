#include "vect2.hpp"

vect2::vect2() : x(0) , y(0)
{

};

vect2::vect2(int num1, int num2) : x(num1), y(num2)
{

};

vect2::vect2(const vect2 &other) : x(other.x), y(other.y)
{

};

vect2::~vect2()
{

};

vect2 &vect2::operator=(const vect2 &other)
{
	if(this != &other)
	{
		x = other.x;
		y = other.y;
	}
	return *this;
}

vect2 &vect2::operator+=(const vect2 &other)
{
	x += other.x;
	y += other.y;

	return *this;
}

vect2 &vect2::operator-=(const vect2 &other)
{
	x -= other.x;
	y -= other.y;

	return *this;
}

vect2 &vect2::operator*=(const int scalar)
{
	x *= scalar;
	y *= scalar;

	return *this;
}


vect2 vect2::operator+() const
{
	return *this;
}

vect2 vect2::operator-() const
{
	return(vect2(-x, -y));
}

vect2 &vect2::operator++()
{
	x++;
	y++;
	return *this;
}

vect2 vect2::operator++(int)
{
	vect2 temp = *this;
	x++;
	y++;
	return temp;
}

vect2 &vect2::operator--()
{
	x--;
	y--;
	return *this;
}

vect2 vect2::operator--(int)
{
	vect2 temp = *this;
	x--;
	y--;
	return temp;
}

bool vect2::operator==(const vect2 &other) const
{
	return((this->x == other.x && this->y == other.y));
}

bool vect2::operator!=(const vect2 &other) const
{
	return!(*this == other);
}

int &vect2::operator[](int i)
{
	if(i == 0)
		return x;
	else
		return y;
}

const int &vect2::operator[](int i) const
{
	if(i == 0)
		return x;
	else
		return y;
}


vect2 vect2::operator+(const vect2 &other) const
{
	int num1 = this->x + other.x;
	int num2 = this->y + other.y;

	return(vect2(num1, num2));
}


vect2 vect2::operator-(const vect2 &other) const
{
	int num1 = this->x - other.x;
	int num2 = this->y - other.y;

	return(vect2(num1, num2));
}


vect2 vect2::operator*(const int scalar) const
{
	int num1 = this->x * scalar;
	int num2 = this->y * scalar;

	return(vect2(num1, num2));
}


std::ostream &operator<<(std::ostream &os, const vect2 &v)
{
	os << "{" << v.x << "," << v.y << "}" << std::endl;
	return os;
}

vect2 operator*(const int scalar, const vect2 &other)
{
	return(other * scalar);
}
