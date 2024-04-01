#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& v1, T& v2){
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename U>
U const & min(U const & v1, U const & v2){
	return ((v1 < v2) ? v1 : v2);
}

template <typename V>
V const & max(V const & v1, V const & v2){
    return ((v1 > v2) ? v1 : v2);
}

#endif