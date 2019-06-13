void printArray(int* a, int length){
    std::cout << "{ ";
    for (int i = 0; i < length; i++)
        std::cout << a[i] << " ";
    std::cout << "}" << std::endl;
}