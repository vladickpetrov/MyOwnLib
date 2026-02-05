#pragma once
#include <sys/cdefs.h>

template<typename T>
class SimpleVector {
public:
    SimpleVector();
    ~SimpleVector();

    void push_back(const T& value);
    int size() const;
    T& operator[](int index);
    const T& operator[](int index) const;
private:
    T* data_;
    int size_;
    int capacity_;
};

template<typename T>
SimpleVector<T>::SimpleVector() {

}

template<typename T>
SimpleVector<T>::~SimpleVector() {

}

template<typename T>
void SimpleVector<T>::push_back() {

}

template<typename T>
int SimpleVector<T>::size() {

}

template<typename T>
 SimpleVector<T>::size() {

}