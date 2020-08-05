//
// Created by al_sah on 01.07.20.
//

#ifndef TEST_SHARED_LIB_ARRAYS_PROCESSING_H
#define TEST_SHARED_LIB_ARRAYS_PROCESSING_H
#include <iostream>
#include <iomanip>

namespace alx {


    template<typename Type>
    void print_stepped_jagged_array(Type **arr, size_t rows, const uint32_t *sizes_array, int set_w = 2);
    template<typename Type>
    void fill_stepped_jagged_array_randomly_in_range(Type **array, size_t rows, const uint32_t *sizes_array, int range = 100);
    template<typename Type>
    void fill_stepped_jagged_array_randomly_non_negative_numbers(Type **array, size_t rows, const uint32_t *sizes_array, int range = 100);
    template<typename Type>
    void fill_stepped_jagged_array_randomly_non_positive_numbers(Type **array, size_t rows, const uint32_t *sizes_array, int range = 100);



    template<typename Type>
    void print_jagged_array(Type **arr, size_t rows, size_t cols, int set_w = 2);
    template<typename Type>
    void fill_jagged_array_in_order(Type **arr, size_t rows, size_t cols);
    //template<typename Type>
    //void fill_jagged_arr_from_user(Type **arr, size_t rows, size_t cols);
    template<typename Type>
    void fill_jagged_arr_randomly_in_range(Type **arr, size_t rows, size_t cols, int range = 100);
    template<typename Type>
    void fill_jagged_arr_randomly_non_negative_numbers(Type **arr, size_t rows, size_t cols, int range = 100);
    template<typename Type>
    void fill_jagged_arr_randomly_non_positive_numbers(Type **arr, size_t rows, size_t cols, int range = 100);



    template<typename Type>
    void print_matrix(void * arr, size_t rows, size_t cols,  int set_w = 2);
    template<typename Type>
    void fill_matrix_in_order(void * arr, size_t rows, size_t cols);
    template<typename Type>
    void fill_matrix_in_range(void * arr, size_t rows, size_t cols, int range = 100);
    template<typename Type>
    void fill_matrix_non_negative_numbers(void * arr, size_t rows, size_t cols, int range = 100);
    template<typename Type>
    void fill_matrix_non_positive_numbers(void * arr, size_t rows, size_t cols, int range = 100);
    template<typename Type>
    void fill_identity_matrix(void * arr, size_t rows, size_t cols);


}
#endif //TEST_SHARED_LIB_ARRAYS_PROCESSING_H
