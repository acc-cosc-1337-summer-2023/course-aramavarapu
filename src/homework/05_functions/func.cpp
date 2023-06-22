//add include statements
#include <vector>
#include <algorithm>
//add function code here
int get_vector_max_value(const std::vector<int>& vect) {
    if (vect.empty()) {
        return 0;
    }
    auto max = std::max_element(vect.begin(), vect.end());
    return *max;
}
std::vector<int> get_square_of_each_element(const std::vector<int>& vect) {
    std::vector<int> end;
    for (const auto& num : vect) {
        int square = num * num;
        end.push_back(square);
    }
    return end;
}

