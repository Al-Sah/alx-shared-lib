//
// Created by al_sah on 30.06.20.
//

#include "sorting_algorithms.h"

namespace alx {
#define INLINE_TEMP_STORAGE_SWAP(v1, v2) {auto tmp=v1;v1=v2;v2=tmp;}
#define INLINE_ARITHMETIC_SWAP(v1, v2) {v1+= v2;v2=v1-v2;v1=v1-v2;}

    template<typename my_type>
    void temp_storage_swap(my_type &v1, my_type &v2) {
        my_type temp = v1;
        v1 = v2;
        v2 = temp;
    }

    template<typename my_type>
    void arithmetic_swap(my_type &v1, my_type &v2) {
        v1 += v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }


// bubble_sorts   ***************************************************

    template<typename my_type>
    void bubble_sort_standard_swap(my_type *arr, size_t size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j + 1], arr[j]);
                }
            }
        }
    }

    template<typename my_type>
    void bubble_sort_external_storage_swap(my_type *arr, size_t size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp_storage_swap(arr[j + 1], arr[j]);
                }
            }
        }
    }

    template<typename my_type>
    void bubble_sort_external_arithmetic_swap(my_type *arr, size_t size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    arithmetic_swap(arr[j + 1], arr[j]);
                }
            }
        }
    }

    template<typename my_type>
    void bubble_sort_inline_temp_storage_swap(my_type *arr, size_t size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    INLINE_TEMP_STORAGE_SWAP(arr[j + 1], arr[j])
                }
            }
        }
    }

    template<typename my_type>
    void bubble_sort_inline_arithmetic_swap(my_type *arr, size_t size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    INLINE_ARITHMETIC_SWAP(arr[j + 1], arr[j])
                }
            }
        }
    }





// shaker_stop_sorts  *******************************************


    template<typename my_type>
    void shaker_stop_sort_standard_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            int counter = 0;
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    std::swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    std::swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            right--;
        }
    }

    template<typename my_type>
    void shaker_stop_sort_external_storage_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            int counter = 0;
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    temp_storage_swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    temp_storage_swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            right--;
        }
    }

    template<typename my_type>
    void shaker_stop_sort_external_arithmetic_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            int counter = 0;
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    arithmetic_swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    arithmetic_swap(arr[i - 1], arr[i]);
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            right--;
        }
    }

    template<typename my_type>
    void shaker_stop_sort_inline_temp_storage_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            int counter = 0;
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_TEMP_STORAGE_SWAP(arr[i - 1], arr[i])
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_TEMP_STORAGE_SWAP(arr[i - 1], arr[i])
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            right--;
        }
    }

    template<typename my_type>
    void shaker_stop_sort_inline_arithmetic_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            int counter = 0;
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_ARITHMETIC_SWAP(arr[i - 1], arr[i])
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_ARITHMETIC_SWAP(arr[i - 1], arr[i])
                    ++counter;
                }
            }
            if (counter == 0) {
                return;
            }
            right--;
        }
    }


    //  my_shaker_sorts  *******************************************

    template <typename my_type>
    void shaker_sort_standard_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    std::swap(arr[i - 1], arr[i]);
                }
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    std::swap(arr[i - 1], arr[i]);
                }
            }
            right--;
        }
    }
    template <typename my_type>
    void shaker_sort_external_storage_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    temp_storage_swap(arr[i - 1], arr[i]);
                }
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    temp_storage_swap(arr[i - 1], arr[i]);
                }
            }
            right--;
        }
    }
    template <typename my_type>
    void shaker_sort_external_arithmetic_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    arithmetic_swap(arr[i - 1], arr[i]);
                }
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    arithmetic_swap(arr[i - 1], arr[i]);
                }
            }
            right--;
        }
    }
    template <typename my_type>
    void shaker_sort_inline_temp_storage_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_TEMP_STORAGE_SWAP(arr[i - 1], arr[i])
                }
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_TEMP_STORAGE_SWAP(arr[i - 1], arr[i])
                }
            }
            right--;
        }
    }
    template <typename my_type>
    void shaker_sort_inline_arithmetic_swap(my_type *arr, size_t size) {
        size_t left, right;
        left = 1;
        right = size - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_ARITHMETIC_SWAP(arr[i - 1], arr[i])
                }
            }
            left++;
            for (int i = left; i <= right; i++) {
                if (arr[i - 1] > arr[i]) {
                    INLINE_ARITHMETIC_SWAP(arr[i - 1], arr[i])
                }
            }
            right--;
        }
    }


    //insertion_sorts
    template <typename my_type>
    void insertion_sort_standard_swap(my_type *arr, size_t size ){
        for(int i=1;i<size;i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
                std::swap(arr[j - 1], arr[j]);
            }
        }
    }
    template <typename my_type>
    void insertion_sort_external_storage_swap(my_type *arr, size_t size ){
        for(int i=1;i<size;i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
                temp_storage_swap(arr[j - 1], arr[j]);
            }
        }
    }
    template <typename my_type>
    void insertion_sort_external_arithmetic_swap(my_type *arr, size_t size ){
        for(int i=1;i<size;i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
                arithmetic_swap(arr[j - 1], arr[j]);
            }
        }
    }
    template <typename my_type>
    void insertion_sort_inline_temp_storage_swap(my_type *arr, size_t size ){
        for(int i=1;i<size;i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
                INLINE_TEMP_STORAGE_SWAP(arr[j - 1], arr[j])
            }
        }
    }
    template <typename my_type>
    void insertion_sort_inline_arithmetic_swap(my_type *arr, size_t size ){
        for(int i=1;i<size;i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
                INLINE_ARITHMETIC_SWAP(arr[j - 1], arr[j])
            }
        }
    }


// explicit instantiation.    _ЧИСТО МАГИЯ_
#define instantiate_set_without_int_val_jagged_arrays(function) \
\
template void function<int>(int *array, size_t size);\
template void function<int64_t>(int64_t *array, size_t size);\
template void function<int16_t>(int16_t *array, size_t size);\
template void function<int8_t>(int8_t *array, size_t size);\
\
template void function<uint>(uint *array, size_t size);\
template void function<uint64_t>(uint64_t *array, size_t size);\
template void function<uint16_t>(uint16_t *array, size_t size);\
template void function<uint8_t>(uint8_t *array, size_t size);\
\
template void function<float>(float *array, size_t size);\
template void function<double>(double *array, size_t size);\
template void function<long double>(long double *array, size_t size);\
\
template void function<char>(char *array, size_t size);\
template void function<char16_t>(char16_t *array, size_t size);\
template void function<char32_t>(char32_t *array, size_t size);\
template void function<wchar_t>(wchar_t *array, size_t size);\
\
template void function<long long >(long long *array, size_t size);\
\
template void function<bool>(bool *array, size_t size);

#define instantiate_string_set(function) \
template void function<std::string>(std::string *array, size_t size);\
template void function<std::wstring>(std::wstring *array, size_t size);\
template void function<const char *>(const char* *array, size_t size);

    instantiate_set_without_int_val_jagged_arrays(bubble_sort_inline_arithmetic_swap)
    instantiate_set_without_int_val_jagged_arrays(bubble_sort_inline_temp_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(bubble_sort_external_arithmetic_swap)
    instantiate_set_without_int_val_jagged_arrays(bubble_sort_external_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(bubble_sort_standard_swap)

    instantiate_set_without_int_val_jagged_arrays(shaker_stop_sort_standard_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_stop_sort_external_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_stop_sort_external_arithmetic_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_stop_sort_inline_temp_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_stop_sort_inline_arithmetic_swap)

    instantiate_set_without_int_val_jagged_arrays(shaker_sort_standard_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_sort_external_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_sort_external_arithmetic_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_sort_inline_temp_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(shaker_sort_inline_arithmetic_swap)

    instantiate_set_without_int_val_jagged_arrays(insertion_sort_standard_swap)
    instantiate_set_without_int_val_jagged_arrays(insertion_sort_external_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(insertion_sort_external_arithmetic_swap)
    instantiate_set_without_int_val_jagged_arrays(insertion_sort_inline_temp_storage_swap)
    instantiate_set_without_int_val_jagged_arrays(insertion_sort_inline_arithmetic_swap)


    instantiate_string_set(bubble_sort_standard_swap)
    instantiate_string_set(bubble_sort_external_storage_swap)
    instantiate_string_set(bubble_sort_inline_temp_storage_swap)

    instantiate_string_set(shaker_stop_sort_standard_swap)
    instantiate_string_set(shaker_stop_sort_inline_temp_storage_swap)
    instantiate_string_set(shaker_stop_sort_external_storage_swap)

    instantiate_string_set(shaker_sort_standard_swap)
    instantiate_string_set(shaker_sort_inline_temp_storage_swap)
    instantiate_string_set(shaker_sort_external_storage_swap)

    instantiate_string_set(insertion_sort_standard_swap)
    instantiate_string_set(insertion_sort_inline_temp_storage_swap)
    instantiate_string_set(insertion_sort_external_storage_swap)

#if 0
    template void bubble_sort_temp_storage<int64_t>(int64_t *array, size_t size);
    template void bubble_sort_temp_storage<int>(int *array, size_t size);
    template void bubble_sort_temp_storage<int16_t>(int16_t *array, size_t size);
    template void bubble_sort_temp_storage<int8_t>(int8_t *array, size_t size);

    template void bubble_sort_temp_storage<float>(float *array, size_t size);
    template void bubble_sort_temp_storage<double>(double *array, size_t size);

    template void bubble_sort_temp_storage<char>(char *array, size_t size);
    template void bubble_sort_temp_storage<char16_t>(char16_t *array, size_t size);
    template void bubble_sort_temp_storage<char32_t>(char32_t *array, size_t size);
    template void bubble_sort_temp_storage<wchar_t>(wchar_t *array, size_t size);

    template void bubble_sort_temp_storage<long long >(long long *array, size_t size);

    template void bubble_sort_temp_storage<bool>(bool *array, size_t size);
#endif
}
