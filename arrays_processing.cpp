//
// Created by al_sah on 01.07.20.
//

#include "arrays_processing.h"

//[0]=Type *
//[0]={size_t , Type*}
//[0]= std::vector<Type> *


namespace alx {

    template<typename Type>
    void print_stepped_jagged_array(Type **array, size_t rows, const uint32_t *sizes_array, int set_w){
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < sizes_array[y]; x++) {
                std::cout << std::setw(set_w) << array[y][x] << " ";
            }
            std::cout << std::endl;
        }
    }

    template<typename Type>
    void fill_stepped_jagged_array_randomly_in_range(Type **array, size_t rows, const uint32_t *sizes_array, int range){
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < sizes_array[y]; x++) {
                array[y][x] = rand() % (2 * range) - range;
            }
        }
    }

    template<typename Type>
    void fill_stepped_jagged_array_randomly_non_negative_numbers(Type **array, size_t rows, const uint32_t *sizes_array, int range){
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < sizes_array[y]; x++) {
                array[y][x] = rand() % range;
            }
        }
    }
    template<typename Type>
    void fill_stepped_jagged_array_randomly_non_positive_numbers(Type **array, size_t rows, const uint32_t *sizes_array, int range){
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < sizes_array[y]; x++) {
                array[y][x] = rand() % range - range;
            }
        }
    }






    template<typename Type>
    void print_jagged_array(Type **arr, size_t rows, size_t cols, int set_w) {
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                std::cout << std::setw(set_w) << arr[y][x] << " ";
            }
            std::cout << std::endl;
        }
    }

    template<typename Type>
    void fill_jagged_array_in_order(Type **arr, size_t rows, size_t cols) {
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                arr[y][x] = y * 10 + x;
            }
        }
    }

/*     template<typename Type>
     void fill_jagged_arr_from_user(Type **arr, size_t rows, size_t cols) {
         for (int y = 0; y < rows; y++) {
             for (int x = 0; x < cols; x++) {
                 std::cout << " el [" << y << "]["<< x << "]\n";
*//*                 Type el;
                 std::cin >> el;*//*
                 std::cin >> arr[y][x];
             }
         }
     }*/

    template<typename Type>
    void fill_jagged_arr_randomly_in_range(Type **arr, size_t rows, size_t cols, int range) {
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                arr[y][x] = rand() % (2 * range) - range;
            }
        }
    }


    template<typename Type>
    void fill_jagged_arr_randomly_non_negative_numbers(Type **arr, size_t rows, size_t cols, int range) {
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                arr[y][x] = rand() % range;
            }
        }
    }

    template<typename Type>
    void fill_jagged_arr_randomly_non_positive_numbers(Type **arr, size_t rows, size_t cols, int range) {
        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                arr[y][x] = rand() % range - range;
            }
        }
    }






    template<typename Type>
    void print_matrix(void * arr, size_t rows, size_t cols,  int set_w){
        auto vla = (Type (*)[cols]) arr;
        std::cout << "\nprint_matrix[ "<< rows << " : "<< cols <<" ]\n";
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                std::cout << std::setw(set_w) << vla[y][x] << " ";
            }
            std::cout << std::endl;
        }
    }

    template<typename Type>
    void fill_matrix_in_order(void * arr, size_t rows, size_t cols){
        auto vla = (Type (*)[cols]) arr;
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                vla[y][x] = y*10 + x;
            }
        }
    }

    template<typename Type>
    void fill_matrix_in_range(void * arr, size_t rows, size_t cols, int range){
        auto vla = (Type (*)[cols]) arr;
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                vla[y][x] = rand() % (2 * range) - range;
            }
        }
    }

    template<typename Type>
    void fill_matrix_non_negative_numbers(void * arr, size_t rows, size_t cols, int range){
        auto vla = (Type (*)[cols]) arr;
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                vla[y][x] = rand() % range;
            }
        }
    }

    template<typename Type>
    void fill_matrix_non_positive_numbers(void * arr, size_t rows, size_t cols, int range){
        auto vla = (Type (*)[cols]) arr;
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                vla[y][x] = rand() % range - range;
            }
        }
    }


    template<typename Type>
    void fill_identity_matrix(void * arr, size_t rows, size_t cols){
        if(rows != cols){
            std::cerr << "Error: (rows != cols). Your matrix can`t be single";
            return;
        }
        auto vla = (Type (*)[cols]) arr;
        for(int y = 0;y<rows;y++){
            for(int x = 0;x<cols;x++){
                if( x == y){
                    vla[x][y] = 1;
                } else{
                    vla[x][y] = 0;
                }
            }
        }
    }


#define instantiate_set_with_integer_value_jagged_arrays(function) \
\
template void function<int>(int **array, size_t rows, size_t cols, int value);\
template void function<int64_t>(int64_t **array, size_t rows, size_t cols, int value);\
template void function<int16_t>(int16_t **array, size_t rows, size_t cols, int value);\
template void function<int8_t>(int8_t **array, size_t rows, size_t cols, int value);\
\
template void function<uint>(uint **array, size_t rows, size_t cols, int value);\
template void function<uint64_t>(uint64_t **array, size_t rows, size_t cols, int value);\
template void function<uint16_t>(uint16_t **array, size_t rows, size_t cols, int value);\
template void function<uint8_t>(uint8_t **array, size_t rows, size_t cols, int value);\
\
template void function<float>(float **array, size_t rows, size_t cols, int value);\
template void function<double>(double **array,size_t rows, size_t cols, int value);\
template void function<long double>(long double **array, size_t rows, size_t cols, int value);\
\
template void function<char>(char **array, size_t rows, size_t cols, int value);\
template void function<char16_t>(char16_t **array,size_t rows, size_t cols, int value);\
template void function<char32_t>(char32_t **array, size_t rows, size_t cols, int value);\
template void function<wchar_t>(wchar_t **array, size_t rows, size_t cols, int value);\
\
template void function<long long >(long long **array, size_t rows, size_t cols, int value);\
\
template void function<bool>(bool **array, size_t rows, size_t cols, int value);\

#define instantiate_set_with_integer_value_sizes_arr_jagged_arrays(function) \
\
template void function<int>(int **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<int64_t>(int64_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<int16_t>(int16_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<int8_t>(int8_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
\
template void function<uint>(uint **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<uint64_t>(uint64_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<uint16_t>(uint16_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<uint8_t>(uint8_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
\
template void function<float>(float **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<double>(double **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<long double>(long double **array, size_t rows, const uint32_t *sizes_arr, int value);\
\
template void function<char>(char **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<char16_t>(char16_t **array,size_t rows, const uint32_t *sizes_arr, int value);\
template void function<char32_t>(char32_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
template void function<wchar_t>(wchar_t **array, size_t rows, const uint32_t *sizes_arr, int value);\
\
template void function<long long >(long long **array, size_t rows, const uint32_t *sizes_arr, int value);\
\
template void function<bool>(bool **array, size_t rows, const uint32_t *sizes_arr, int value);\

#define instantiate_set_with_sizes_arr_stepped_jagged_arrays(function) \
\
template void function<int>(int **array, size_t rows, const uint32_t *sizes_arr);\
template void function<int64_t>(int64_t **array, size_t rows, const uint32_t *sizes_arr);\
template void function<int16_t>(int16_t **array, size_t rows, const uint32_t *sizes_arr);\
template void function<int8_t>(int8_t **array, size_t rows, const uint32_t *sizes_arr);\
\
template void function<uint>(uint **array, size_t rows, const uint32_t *sizes_arr);\
template void function<uint64_t>(uint64_t **array, size_t rows, const uint32_t *sizes_arr);\
template void function<uint16_t>(uint16_t **array, size_t rows, const uint32_t *sizes_arr);\
template void function<uint8_t>(uint8_t **array, size_t rows, const uint32_t *sizes_arr);\
\
template void function<float>(float **array, size_t rows, const uint32_t *sizes_arr);\
template void function<double>(double **array, size_t rows, const uint32_t *sizes_arr);\
template void function<long double>(long double **array, size_t rows, const uint32_t *sizes_arr);\
\
template void function<char>(char **array, size_t rows, const uint32_t *sizes_arr);\
template void function<char16_t>(char16_t **array,size_t rows, const uint32_t *sizes_arr);\
template void function<char32_t>(char32_t **array, size_t rows, const uint32_t *sizes_arr);\
template void function<wchar_t>(wchar_t **array, size_t rows, const uint32_t *sizes_arr);\
\
template void function<long long >(long long **array, size_t rows, const uint32_t *sizes_arr);\
\
template void function<bool>(bool **array, size_t rows, const uint32_t *sizes_arr);\


#define instantiate_set_with_integer_value_void_pointer(function) \
\
template void function<int>(void * arr, size_t rows, size_t cols, int value);\
template void function<int64_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<int16_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<int8_t>(void * arr, size_t rows, size_t cols, int value);\
\
template void function<uint>(void * arr, size_t rows, size_t cols, int value);\
template void function<uint64_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<uint16_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<uint8_t>(void * arr, size_t rows, size_t cols, int value);\
\
template void function<float>(void * arr, size_t rows, size_t cols, int value);\
template void function<double>(void * arr, size_t rows, size_t cols, int value);\
template void function<long double>(void * arr, size_t rows, size_t cols, int value);\
\
template void function<char>(void * arr, size_t rows, size_t cols, int value);\
template void function<char16_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<char32_t>(void * arr, size_t rows, size_t cols, int value);\
template void function<wchar_t>(void * arr, size_t rows, size_t cols, int value);\
\
template void function<long long >(void * arr, size_t rows, size_t cols, int value);\
\
template void function<bool>(void * arr, size_t rows, size_t cols, int value);\

#define instantiate_set_without_int_val_void_pointer(function) \
\
template void function<int>(void * arr, size_t rows, size_t cols);\
template void function<int64_t>(void * arr, size_t rows, size_t cols);\
template void function<int16_t>(void * arr, size_t rows, size_t cols);\
template void function<int8_t>(void * arr, size_t rows, size_t cols);\
\
template void function<uint>(void * arr, size_t rows, size_t cols);\
template void function<uint64_t>(void * arr, size_t rows, size_t cols);\
template void function<uint16_t>(void * arr, size_t rows, size_t cols);\
template void function<uint8_t>(void * arr, size_t rows, size_t cols);\
\
template void function<float>(void * arr, size_t rows, size_t cols);\
template void function<double>(void * arr, size_t rows, size_t cols);\
template void function<long double>(void * arr, size_t rows, size_t cols);\
\
template void function<char>(void * arr, size_t rows, size_t cols);\
template void function<char16_t>(void * arr, size_t rows, size_t cols);\
template void function<char32_t>(void * arr, size_t rows, size_t cols);\
template void function<wchar_t>(void * arr, size_t rows, size_t cols);\
\
template void function<long long >(void * arr, size_t rows, size_t cols);\
\
template void function<bool>(void * arr, size_t rows, size_t cols);\


#define instantiate_string_set(function) \
template void function<std::string>(std::string **array, size_t rows, size_t cols, int value);\
template void function<std::wstring>(std::wstring **array, size_t rows, size_t cols, int value);\
template void function<const char *>(const char* **array, size_t rows, size_t cols, int value);\

#define instantiate_set_without_int_val_jagged_arrays(function) \
\
template void function<int>(int **array, size_t rows, size_t cols);\
template void function<int64_t>(int64_t **array, size_t rows, size_t cols);\
template void function<int16_t>(int16_t **array, size_t rows, size_t cols);\
template void function<int8_t>(int8_t **array, size_t rows, size_t cols);\
\
template void function<uint>(uint **array, size_t rows, size_t cols);\
template void function<uint64_t>(uint64_t **array, size_t rows, size_t cols);\
template void function<uint16_t>(uint16_t **array, size_t rows, size_t cols);\
template void function<uint8_t>(uint8_t **array, size_t rows, size_t cols);\
\
template void function<float>(float **array, size_t rows, size_t cols);\
template void function<double>(double **array,size_t rows, size_t cols);\
template void function<long double>(long double **array, size_t rows, size_t cols);\
\
template void function<char>(char **array, size_t rows, size_t cols);\
template void function<char16_t>(char16_t **array,size_t rows, size_t cols);\
template void function<char32_t>(char32_t **array, size_t rows, size_t cols);\
template void function<wchar_t>(wchar_t **array, size_t rows, size_t cols);\
\
template void function<long long >(long long **array, size_t rows, size_t cols);\
\
template void function<bool>(bool **array, size_t rows, size_t cols);\

#define instantiate_set_with_std_string(function) \
template void function<std::string>(std::string **array, size_t rows, size_t cols);\
template void function<std::wstring>(std::wstring **array, size_t rows, size_t cols);\
template void function<const char *>(const char* **array, size_t rows, size_t cols);\

    instantiate_set_with_integer_value_jagged_arrays(print_jagged_array)
    instantiate_set_with_integer_value_jagged_arrays(fill_jagged_arr_randomly_non_negative_numbers)
    instantiate_set_with_integer_value_jagged_arrays(fill_jagged_arr_randomly_non_positive_numbers)
    instantiate_set_with_integer_value_jagged_arrays(fill_jagged_arr_randomly_in_range)

    instantiate_set_with_integer_value_void_pointer(print_matrix)
    instantiate_set_with_integer_value_void_pointer(fill_matrix_in_range)
    instantiate_set_with_integer_value_void_pointer(fill_matrix_non_negative_numbers)
    instantiate_set_with_integer_value_void_pointer(fill_matrix_non_positive_numbers)


    instantiate_set_without_int_val_jagged_arrays(fill_jagged_array_in_order)
    //instantiate_set_without_int_val_jagged_arrays(fill_jagged_arr_randomly_from_user)

    instantiate_set_without_int_val_void_pointer(fill_matrix_in_order)
    instantiate_set_without_int_val_void_pointer(fill_identity_matrix)

    instantiate_set_with_integer_value_sizes_arr_jagged_arrays(print_stepped_jagged_array)
    instantiate_set_with_integer_value_sizes_arr_jagged_arrays(fill_stepped_jagged_array_randomly_in_range)
    instantiate_set_with_integer_value_sizes_arr_jagged_arrays(fill_stepped_jagged_array_randomly_non_negative_numbers)
    instantiate_set_with_integer_value_sizes_arr_jagged_arrays(fill_stepped_jagged_array_randomly_non_positive_numbers)
}