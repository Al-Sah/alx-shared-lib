//
// Created by al_sah on 30.06.20.
//

#ifndef TEST_SHARED_LIB_SORTING_ALGORITHMS_H
#define TEST_SHARED_LIB_SORTING_ALGORITHMS_H
#include <iostream>

namespace alx {

    //bubble_sorts
    template<typename Type>
    void bubble_sort_standard_swap(Type *arr, size_t size);

    template<typename Type>
    void bubble_sort_external_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void bubble_sort_external_arithmetic_swap(Type *arr, size_t size);

    template<typename Type>
    void bubble_sort_inline_temp_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void bubble_sort_inline_arithmetic_swap(Type *arr, size_t size);

    //shaker_stop_sorts
    template<typename Type>
    void shaker_stop_sort_standard_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_stop_sort_external_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_stop_sort_external_arithmetic_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_stop_sort_inline_temp_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_stop_sort_inline_arithmetic_swap(Type *arr, size_t size);

    //shaker_sorts
    template<typename Type>
    void shaker_sort_standard_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_sort_external_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_sort_external_arithmetic_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_sort_inline_temp_storage_swap(Type *arr, size_t size);

    template<typename Type>
    void shaker_sort_inline_arithmetic_swap(Type *arr, size_t size);

    //insertion_sorts

    template <typename Type>
    void insertion_sort_standard_swap(Type *arr, size_t size );

    template <typename Type>
    void insertion_sort_external_storage_swap(Type *arr, size_t size );

    template <typename Type>
    void insertion_sort_external_arithmetic_swap(Type *arr, size_t size );

    template <typename Type>
    void insertion_sort_inline_temp_storage_swap(Type *arr, size_t size );

    template <typename Type>
    void insertion_sort_inline_arithmetic_swap(Type *arr, size_t size );

    

};
#endif //TEST_SHARED_LIB_SORTING_ALGORITHMS_H
