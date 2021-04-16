template <typename T>
struct Array {
    //member variables
    T* ptr;
    int size;
  
    //member methods
    Array(T arr[], int s);
    void print();
};
  
template <typename T>
Array<T>::Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++){
        ptr[i] = arr[i];
    }
}
  
template <typename T>
void Array<T>::print(){
    for (int i = 0; i < size; i++){
        std::cout << " " << *(ptr + i);
    }
    std::cout << endl;
}