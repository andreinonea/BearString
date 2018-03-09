#include <iostream>
#include <string>

struct Vector2
{
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator+ (const Vector2&other) const
	{
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
	Vector2 operator* (const Vector2&other) const
	{
		return Multiply(other);
	}
	Vector2 operator* (const float factor) const
	{
		return Vector2(x * factor, y * factor);
	}

	bool operator== (const Vector2& other) const
	{
		return x == other.x && y == other.y ? true : false;
	}

	bool operator!= (const Vector2& other) const
	{
		return x != other.x || y != other.y ? true : false;
	}

};

std::ostream& operator<< (std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}