/*
dream Renderer
author: forDream
*/

#pragma once
#include "geometry.h"

template <typename T>
Vector2<T>::Vector2()
{
	this->x = this->y = 0;
}

template <typename T>
Vector2<T>::Vector2(T x_, T y_): x(x_), y(y_) {}

template <typename T>
Vector2<T>::Vector2(const Vector2<T> &v)
{
	this->x = v.x;
	this->y = v.y;
}

template <typename T>
Vector2<T>& Vector2<T>::operator=(const Vector2<T> &v)
{
	this->x = v.x;
	this->y = v.y;
	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator+(const Vector2<T> &v)
{
	return Vector2(this->x + v.x, this->y + v.y);
}

template <typename T>
Vector2<T>& Vector2<T>::operator+=(const Vector2<T> &v)
{
	this->x += v.x;
	this->y += v.y;
	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator-(const Vector2<T> &v)
{
	return Vector2(this->x - v.x, this->y - v.y);
}

template <typename T>
Vector2<T>& Vector2<T>::operator-=(const Vector2<T> &v)
{
	this->x -= v.x;
	this->y -= v.y;
	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator*(const Vector2<T> &v)
{
	return Vector2(this->x * v.x, this->y * v.y);
}

template <typename T>
Vector2<T>& Vector2<T>::operator*=(const Vector2<T> &v)
{
	this->x *= v.x;
	this->y *= v.y;
	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator/(const Vector2<T> &v)
{	
	//todo judge divided by 0
	return Vector2(this->x / v.x, this->y / v.y);
}

template <typename T>
Vector2<T>& Vector2<T>::operator/=(const Vector2<T> &v)
{
	//todo judge divided by 0
	this->x /= v.x;
	this->y /= v.y;
	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator-() const
{
	return Vector2(-this->x, -this->y);
}

template <typename T>
T& Vector2<T>::operator[](int i)
{
	if (i == 0)
	{	
		return this->x;
	}
	return this->y;
}

template <typename T>
float Vector2<T>::LengthSquared() const
{
	return this->x * this-> + this->y * this->y;
}

template <typename T>
float Vector2<T>::Length() const
{
	return std::sqrt(this->LengthSquared());
}

template <typename T>
Vector3<T>::Vector3()
{
	this->x = this->y = this->z = 0;
}

template <typename T>
Vector3<T>::Vector3(T x_, T y_, T z_) : x(x_), y(y_), z(z_) {}

template <typename T>
Vector3<T>::Vector3(const Vector3<T> &v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
}

template <typename T>
Vector3<T>& Vector3<T>::operator=(const Vector3<T> &v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator+(const Vector3<T> &v)
{
	return Vector3(this->x + v.x, this->y + v.y, this->z + v.z);
}

template <typename T>
Vector3<T>& Vector3<T>::operator+=(const Vector3<T> &v)
{
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator-(const Vector3<T> &v)
{
	return Vector3(this->x - v.x, this->y - v.y, this->z - v.z);
}

template <typename T>
Vector3<T>& Vector3<T>::operator-=(const Vector3<T> &v)
{
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator*(const Vector3<T> &v)
{
	return Vector3(this->x * v.x, this->y * v.y, this->z * v.z);
}

template <typename T>
Vector3<T>& Vector3<T>::operator*=(const Vector3<T> &v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator/(const Vector3<T> &v)
{
	//todo judge divided by 0
	return Vector3(this->x / v.x, this->y / v.y, this->z / v.z);
}

template <typename T>
Vector3<T>& Vector3<T>::operator/=(const Vector3<T> &v)
{
	//todo judge divided by 0
	this->x /= v.x;
	this->y /= v.y;
	this->z /= v.z;
	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator-() const
{
	return Vector3(-this->x, -this->y, -this->z);
}

template <typename T>
T& Vector3<T>::operator[](int i)
{
	if (i == 0)
	{
		return this->x;
	}
	elif(i == 1)
	{
		return this->y;
	}
	return this->z;
}

template <typename T>
float Vector3<T>::LengthSquared() const
{
	return this->x * this-> + this->y * this->y + this-z * this->z;
}

template <typename T>
float Vector3<T>::Length() const
{
	return std::sqrt(this->LengthSquared());
}

template <typename T, int n>
Matrix<T, n>::Matrix()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if (i == j)
			{
				this->m[i][j] = 1.0f;
			}
			else
			{
				this->m[i][j] = 0.0f;
			}
		}
	}
}

template <typename T, int n>
Matrix<T, n>::Matrix(const T m_[n][n])
{
	for (int i = 0; i < n:i++)
	{
		for (int j = 0; j < n:j++)
		{
			this->m[i][j] = m_[i][j];
		}
	}
}

template <typename T, int n>
bool Matrix<T, n>::operator==(const Matrix<T, n> &m_) const
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (this->m[i][j] != m_[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

