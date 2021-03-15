/*
dream Renderer
author: forDream
*/

#pragma once
#include<vector>
#include<iostream>

template <typename T>
class Vector2
{
public:
	Vector2();
	Vector2(T x_, T y_);
	Vector2(const Vector2<T> &v);
	Vector2<T>& operator=(const Vector2<T> &v);
	Vector2<T> operator+(const Vector2<T> &v);
	Vector2<T>& operator+=(const Vector2<T> &v);
	Vector2<T> operator-(const Vector2<T> &v);
	Vector2<T>& operator-=(const Vector2<T> &v);
	Vector2<T> operator*(const Vector2<T> &v);
	Vector2<T>& operator*=(const Vector2<T> &v);
	Vector2<T> operator/(const Vector2<T> &v);
	Vector2<T>& operator/=(const Vector2<T> &v);
	Vector2<T> operator-() const;
	T& operator[](int i);
	float Length() const;
	float LengthSquared() const;

	T x;				
	T y;
};


template <typename T>
class Vector3
{
public:
	Vector3();
	Vector3(T x_, T y_, T z_);
	Vector3(const Vector3<T> &v);
	Vector3<T>& operator=(const Vector3<T> &v);
	Vector3<T> operator+(const Vector3<T> &v);
	Vector3<T>& operator+=(const Vector3<T> &v);
	Vector3<T> operator-(const Vector3<T> &v);
	Vector3<T>& operator-=(const Vector3<T> &v);
	Vector3<T> operator*(const Vector3<T> &v);
	Vector3<T>& operator*=(const Vector3<T> &v);
	Vector3<T> operator/(const Vector3<T> &v);
	Vector3<T>& operator/=(const Vector3<T> &v);
	Vector3<T> operator-() const;
	T& operator[](int i);
	float Length() const;
	float LengthSquared() const;

	T x;
	T y;
	T z;
};


template <typename T, int n>
class Matrix
{
public:
	Matrix();
	Matrix(const T mat[n][n]);
	bool operator==(const Matrix<T, n> &m_) const;

	T m[n][n];
};


template <typename T>
inline T Dot(const Vector3<T> &v1, const Vector3<T> &v2) {}

template <typename T>
inline Vector3<T> Cross(const Vector3<T> &v1, const Vector3<T> &v2) {}

typedef Vector3<int> vec3i;
typedef Vector3<float> vec3f;

typedef Vector2<int> vec2i;
typedef Vector2<float> vec2f;


