#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {
    int left = 0;
    int right = static_cast<int>(arr.size() - 1);

    while (left <= right) {
      int mid = (left + right) / 2;
      if (arr[mid] == search_elem){ return mid; }
      if (search_elem < arr[mid]){
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return std::nullopt;
  }
}  // namespace assignment