template<class T>
class shared_ptr {
private:
    T *_t;
    int *count;

public:
    shared_ptr(T *t) {
        _t = t;
        count = new int(1);
    }

    template<class D>
    shared_ptr(shared_ptr<D> &d) {
        _t = d.Get();
        count = d.GetCount();
        *count = (*count) + 1;
    }

    ~shared_ptr() {
        *count = (*count) - 1;

        if (*count == 0)
            delete _t;
    }

    template<class D>
    shared_ptr<T> &operator=(shared_ptr<D> &d) {
        if (this->Get() != d.Get()) {
            *count = (*count) - 1;
            if (*count == 0)
                delete _t;

            _t = d.Get();
            count = d.GetCount();
            *count = *count + 1;
        }

        return *this;
    }

    T *Get() { return _t; }

    int *GetCount() { return count; }
};
