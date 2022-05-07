#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    int l =0, r = arr.size() - 1;
    while (l <= r) {
      if (arr[l] == search_elem) {
        return l;
      }
      if (arr[r] == search_elem) {
        return r;
      }
      l += 1;
      r -= 1;
    }
    return std::nullopt;
  }

}  // namespace assignment