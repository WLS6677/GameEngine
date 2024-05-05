#include "../include/hVector2.h"



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
hVector2::hVector2(const double& inputX, const double& inputY)
{
	x = inputX;
	y = inputY;
}
hVector2::hVector2(const hVector2& otherVector)
{
	this->x = otherVector.x;
	this->y = otherVector.y;
}
hVector2::~hVector2()
{

}
void hVector2::SetX(const double& input)
{
	this->x = input;
}
double hVector2::GetX()
{
	return this->x;
}
void hVector2::SetY(const double& input)
{
	this->y = input;
}
double hVector2::GetY()
{
	return this->y;
}
void hVector2::operator=(const hVector2& secondVector)
{
	this->x = secondVector.x;
	this->y = secondVector.y;
}
void hVector2::operator+=(const hVector2& secondVector)
{
	this->x += secondVector.x;
	this->y += secondVector.y;
}
void hVector2::operator-=(const hVector2& secondVector)
{
	this->x -= secondVector.x;
	this->y -= secondVector.y;
}
hVector2 hVector2::operator+(const hVector2& secondVector)
{
	hVector2 Output{ this->x + secondVector.x,this->y + secondVector.y };
	return Output;
}
hVector2 hVector2::operator-(const hVector2& secondVector)
{
	hVector2 Output{ this->x - secondVector.x,this->y - secondVector.y };
	return Output;
}
hVector2 hVector2::operator*(const double& input)
{
	hVector2 Output{ this->x * input,this->y * input };
	return Output;
}
hVector2 hVector2::operator/(const double& input)
{
	hVector2 Output{ this->x / input,this->y / input };
	return Output;
}
hVector2 hVector2::GetNormal()
{
	return *this * (double)Q_rsqrt((this->x * this->x) + (this->y * this->y));
}
double hVector2::GetMagnitude()
{
	return 1 / Q_rsqrt((this->x * this->x) + (this->y * this->y));
}