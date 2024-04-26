//
//  main.cpp
//  FT_4
//
//  Created by Эмиль Саубанов on 26.04.2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = arr;
    int elem  = *(ptr + 3);
    std::cout << "Четвертый элемент: " << elem << std::endl;
}
