#include <iostream>
#include <cmath>
#include <stdlib.h>

class vec3
{
public:
	int x, y, z;

	vec3() : x(0), y(0), z(0) { }
	vec3(int px, int py, int pz) : x(px), y(py), z(pz) { }
	vec3(const vec3& v) :x(v.x), y(v.y), z(v.z) {}

	vec3 operator+(const vec3& v) const
	{
		vec3 newv;
		newv.x = x + v.x;
		newv.y = y + v.y;
		newv.z = z + v.z;
		return newv;
	}
	vec3 operator-(const vec3& v) const
	{
		vec3 newv;
		newv.x = x - v.x;
		newv.y = y - v.y;
		newv.z = z - v.z;
		return newv;
	}
	void operator+=(const vec3& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;
	}
	void operator-=(const vec3& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}
	void operator=(const vec3& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
	}
	bool operator==(const vec3& v) const
	{
		if (x == v.x && y == v.y && z == v.z)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	vec3 Normalize()
	{
		vec3 newv;
		int length;
		length = sqrt((x ^ 2) + (y ^ 2) + (z ^ 2));
		newv.x = x / length;
		newv.y = y / length;
		newv.z = z / length;
		return newv;
	}
	void Zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	bool IsZero()
	{
		if (x == 0 && y == 0 && z == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	float DistanceTo(const vec3& v)
	{
		int d;
		d = sqrt(((v.x - x) ^ 2) + ((v.y - y) ^ 2) + ((v.z - z) ^ 2));
		return d;
	}
};

int main()
{
	//vec3 a = { 1, 2, 3 };
	//vec3 b = { a };
	//vec3 c = {};
	//std::cout << "a: " << a.x << a.y << a.z << std::endl;
	//std::cout << "b: " << b.x << b.y << b.z << std::endl;
	//std::cout << "c: " << c.x << c.y << c.z << std::endl;
	//if (c.IsZero() == true)
	//{
	//	std::cout << "c equals to 0" << std::endl;
	//}
	//std::cout << "Normalize: " << a.Normalize().x << a.Normalize().y << a.Normalize().z << std::endl;
	//c = a + b;
	//std::cout << "+: " << c.x << c.y << c.z << std::endl;
	//c = a - b;
	//std::cout << "-: " << c.x << c.y << c.z << std::endl;
	//c += a;
	//std::cout << "+=: " << c.x << c.y << c.z << std::endl;
	//b -= a;
	//std::cout << "-=: " << b.x << b.y << b.z << std::endl;
	//b = a;
	//std::cout << "=: " << b.x << b.y << b.z << std::endl;
	//if (a == b)
	//{
	//	std::cout << "They're the same" << std::endl;
	//}
	//a = { 5, 3, 1 };
	//std::cout << "Distance between a and b: " << a.DistanceTo(b) << std::endl;
	//std::cout << "Zero: " << a.Zero().x << a.Zero().y << a.Zero().z << std::endl;
	system("pause");
	return 0;
}