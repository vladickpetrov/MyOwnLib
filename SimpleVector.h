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
    if (capacity_ - size_ == 0) {
        int new_capacity = (capacity_ == 0) ? 1 : capacity_ * 2;
        T* new_data = new T[new_capacity];

        for (int i = 0; i < size_; ++i) {
            new_data[i] = data_[i];
        }
        delete [] data_;
        data_ = new_data;
        capacity_ = new_capacity;
    }
    data_[size_] = value;
    ++size_;
}

template<typename T>
int SimpleVector<T>::size() const {
    return size_;
}