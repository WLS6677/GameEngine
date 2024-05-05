







struct hVector2 {
private:
	double x, y;
public:
	hVector2(const double& inputX = 0.0, const double& inputY = 0.0);
	hVector2(const hVector2& otherVector);
	~hVector2();

	void SetX(const double& input);
	double GetX();

	void SetY(const double& input);
	double GetY();

	void operator=(const hVector2& secondVector);
	void operator+=(const hVector2& secondVector);
	void operator-=(const hVector2& secondVector);

	hVector2 operator+(const hVector2& secondVector);
	hVector2 operator-(const hVector2& secondVector);
	hVector2 operator*(const double& input);
	hVector2 operator/(const double& input);

	hVector2 GetNormal();
	double GetMagnitude();
};