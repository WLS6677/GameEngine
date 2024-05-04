







struct Vector2
	{
	private:
		double x, y;
	public:
		Vector2(const double& inputX = 0.0, const double& inputY = 0.0);
		Vector2(const Vector2& otherVector);
		~Vector2();

		void SetX(const double& input);
		double GetX();

		void SetY(const double& input);
		double GetY();

		void operator=(const Vector2& secondVector);
		void operator+=(const Vector2& secondVector);
		void operator-=(const Vector2& secondVector);

		Vector2 operator+(const Vector2& secondVector);
		Vector2 operator-(const Vector2& secondVector);
		Vector2 operator*(const double& input);
		Vector2 operator/(const double& input);

		Vector2 GetNormal();
		double GetMagnitude();
	};