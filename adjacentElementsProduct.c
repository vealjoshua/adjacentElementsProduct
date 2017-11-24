// typedef struct arr_integer {
//   int size;
//   int *arr;
// } arr_integer;

// arr_integer alloc_arr_integer(int len) {
//   arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
//   return a;
// }


int adjacentElementsProduct(arr_integer inputArray) {
  int maxProduct = inputArray.arr[0] * inputArray.arr[1];
  for (int i = 0; i < inputArray.size - 1; i++)
  {
    int product = inputArray.arr[i] * inputArray.arr[i + 1];
    if (product > maxProduct)
      maxProduct = product;
  }
  
  return maxProduct;
}
