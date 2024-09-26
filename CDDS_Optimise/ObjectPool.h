#pragma once

template<typename T>
class ObjectPool
{
	T* data;

	size_t size;
	size_t capacity;

	ObjectPool();

	size_t Size();
	size_t Capacity();
	T& operator[](size_t);
	T* Respawn();
	void Destroy(T*);
};