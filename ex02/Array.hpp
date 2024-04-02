#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{

public:
										
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	Array & operator=(const Array & other);
	T & operator[](unsigned int index);

	unsigned int size(void);

	class	InvalidIndexException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

private:
	
	unsigned int sizeA;
	T* array;

};

template<typename T>
Array<T>::Array(): sizeA(0){
	array = new T[sizeA];
}

template<typename T>
Array<T>::Array(unsigned int n): sizeA(n){
	array = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other): sizeA(other.sizeA){
	array = NULL;
	*this = other;
}

template<typename T>
Array<T>::~Array(){
	if (array != NULL)
		delete [] array;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array& other){
	if (array != NULL)
		delete [] array;
	sizeA = other.sizeA;
	array = new T[sizeA]
	for (unsigned int i = 0; i < other.sizeA; i++)
		array[i] = other.array[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index){
	if (index >= sizeA || array == NULL)
		throw Array<T>::InvalidIndexException();
	return array[index];
}

template<typename T>
unsigned int Array<T>::size(void){
	return sizeA;
}

template<typename T>
const char	*Array<T>::InvalidIndexException::what() const throw(){
	return "Array Exception : Index out of bounds";
}

#endif