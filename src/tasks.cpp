#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if ((lhs != nullptr) && (rhs != nullptr)) {
        int value = *lhs;
        *lhs = *rhs;
        *rhs = value;
    }
}
// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ((num_rows >= 1) && (num_cols >= 1)) {
        int **array_2d = new int *[num_rows];
        for (int str_index = 0; str_index < num_rows; str_index++) {
            array_2d[str_index] = new int[num_cols]{};
        }
        for (int str_index = 0; str_index < num_rows; str_index++){
            for (int cols_index = 0; cols_index < num_cols; cols_index++ ){
                array_2d[str_index][cols_index] = init_value;
            }
        }
        return array_2d;
    } else {
        return nullptr;
    }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if ((arr_2d_source == nullptr) || (arr_2d_target == nullptr) || (num_rows <= 0) || (num_cols <= 0)) {
        return false;
    } else {
        for (int str_index = 0; str_index < num_rows; str_index++) {
            copy(arr_2d_source[str_index],arr_2d_source[str_index]+ num_cols, arr_2d_target[str_index]);
        }
    } return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int arr_size = arr.size();
    for (int elmnt = 0; elmnt < arr_size; elmnt++) {
        if (elmnt >= arr_size - elmnt - 1) {
            break;
        }
        int value = arr[elmnt];
        arr[elmnt] = arr[arr_size - elmnt - 1];
        arr[arr_size - elmnt - 1] = value;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    return {};
}
