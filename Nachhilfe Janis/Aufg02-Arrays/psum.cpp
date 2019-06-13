int* psum(int* a, int length){
  int* result = new int[length];
  result[0] = a[0];
  for (int i = 1; i < length; i++){
      result[i] = result[i-1] + a[i];
  }
  return result;
}