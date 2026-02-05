#pragma once

template<typename T>
class SimpleVector {
public:
    SimpleVector();
    ~SimpleVector();

    void push_back(const T& value);
    int size() const;
    // T& operator[](int index);
    // const T& operator[](int index) const;
private:
    T* data_;
    int size_;
    int capacity_;
};

template<typename T>
SimpleVector<T>::SimpleVector() : data_(nullptr), size_(0), capacity_(0) {
}

template<typename T>
SimpleVector<T>::~SimpleVector() {
    delete[] data_;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value) {
    if (capacity_ == 0) {
        data_ = new T[1];
        data_[0] = value;
        ++size_;
        ++capacity_;
    } else {
    }
}

template<typename T>
int SimpleVector<T>::size() const {
    return size_;
}