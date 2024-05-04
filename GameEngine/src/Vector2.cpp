#include "../include/Vector2.h"



/////////////////////////////////////////////
//				      ||
//					  ||
//		not my code   \/
//
float Q_rsqrt(float number)
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long*)&y;                       // evil floating point bit level hacking
	i = 0x5f3759df - (i >> 1);               // what the fuck?
	y = *(float*)&i;
	y = y * (threehalfs - (x2 * y * y));   // 1st iteration
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}
//
// everything else is
// 
////////////////////////////////////////////////////



//struct Vector2
Vector2::Vector2(const double& inputX, const double& inputY)
{
	x = inputX;
	y = inputY;
}
Vector2::Vector2(const Vector2& otherVector)
{
	this->x = otherVector.x;
	this->y = otherVector.y;
}
Vector2::~Vector2()
{

}
void Vector2::SetX(const double& input)
{
	this->x = input;
}
double Vector2::GetX()
{
	return this->x;
}
void Vector2::SetY(const double& input)
{
	this->y = input;
}
double Vector2::GetY()
{
	return this->y;
}
void Vector2::operator=(const Vector2& secondVector)
{
	this->x = secondVector.x;
	this->y = secondVector.y;
}
void Vector2::operator+=(const Vector2& secondVector)
{
	this->x += secondVector.x;
	this->y += secondVector.y;
}
void Vector2::operator-=(const Vector2& secondVector)
{
	this->x -= secondVector.x;
	this->y -= secondVector.y;
}
Vector2 Vector2::operator+(const Vector2& secondVector)
{
	Vector2 Output{ this->x + secondVector.x,this->y + secondVector.y };
	return Output;
}
Vector2 Vector2::operator-(const Vector2& secondVector)
{
	Vector2 Output{ this->x - secondVector.x,this->y - secondVector.y };
	return Output;
}
Vector2 Vector2::operator*(const double& input)
{
	Vector2 Output{ this->x * input,this->y * input };
	return Output;
}
Vector2 Vector2::operator/(const double& input)
{
	Vector2 Output{ this->x / input,this->y / input };
	return Output;
}
Vector2 Vector2::GetNormal()
{
	return *this * (double)Q_rsqrt((this->x * this->x) + (this->y * this->y));
}
double Vector2::GetMagnitude()
{
	return 1 / Q_rsqrt((this->x * this->x) + (this->y * this->y));
}