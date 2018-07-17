#pragma once
#ifndef DATA_H_
#define DATA_H_

template<typename Type> 
class Element
{
public:
	Type GetKey()
	{
		return key;
	}

	void SetKey(Type item)
	{
		key = item;
	}

public:
	// ÖØÔØ·û
	Element<Type>& operator= (Element<Type> copy)
	{
		key = copy.key;
		return *this;
	}

	bool operator==(Element<Type> item)
	{
		return this->key == item.key;
	}

	bool operator>=(Element<Type> item)
	{
		return this->key >= item.key;
	}

	bool operator<=(Element<Type> item)
	{
		return this->key <= item.key;
	}

private:
	Type key;
};

template<typename Type> class Sort;
template<typename Type> class DataList
{
public:
	// ÓÑÔªÀà
	friend class Sort<Type>;
};









#endif //DATA_H_