 // 556 leetcode
 
   int nextGreaterElement(int n) {
    auto digits = to_string(n);
    next_permutation(begin(digits), end(digits));
    auto res = stoll(digits);
    return (res > INT_MAX || res <= n) ? -1 : res;
}
 // std::stoll(): This function converts a string,
 provided as an argument in the function call, to long long int.
 It parses str interpreting its content as an integral number of the specified base,
 which is returned as a value of type long long int.
 
