// 给auto指明具体的返回类型。
template<class T, class U>
auto multiply2(T const& lhs, U const& rhs) -> decltype(lhs * rhs) {
    return lhs * rhs;
}

// 从C++ 11开始，可以自动推断。
template<class T, class U>
auto multiply(T const &lhs, U const &rhs) {
    return lhs * rhs;
}


int main() {

}