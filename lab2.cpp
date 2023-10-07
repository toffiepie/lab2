#include <iostream>

// Определяем структуру TwoInts, содержащую два целых числа.
struct TwoInts
{
    int a;
    int b;
};

// Определяем структуру StructWithArray, содержащую массив и указатель на целое число.
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создаем экземпляр структуры TwoInts с именем i2 и инициализируем его нулевыми значениями.
    TwoInts i2 = { };
    i2.a = 5;  // Задаем i2.a значение 5.
    i2.b = 7;  // Задаем i2.b значение 7.

    std::cout << i2.a << std::endl;  // Выводим значение i2.a (5).
    std::cout << i2.b << std::endl;  // Выводим значение i2.b (7).

    // Создаем экземпляр структуры StructWithArray с именем s и инициализируем его нулевыми значениями.
    StructWithArray s = { };
    s.arr[0] = 10;  // Задаем s.arr[0] значение 10.

    // Создаем еще один экземпляр структуры StructWithArray с именем s1 и инициализируем его нулевыми значениями.
    StructWithArray s1 = { };
    s1.arr[0] = 15;  // Задаем s1.arr[0] значение 15.

    // Создаем указатель sPointer и устанавливаем его на адрес структуры s.
    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;  // Задаем значение s.arr[0] через указатель sPointer.

    std::cout << s.arr[0] << std::endl;  // Выводим значение s.arr[0] (20).
    s.arr[0] = 25;  // Изменяем значение s.arr[0] непосредственно.
    std::cout << s.arr[0] << std::endl;  // Выводим значение s.arr[0] (25).
    sPointer->arr[0] = 30;  // Задаем значение s.arr[0] через указатель sPointer.
    std::cout << s.arr[0] << std::endl;  // Выводим значение s.arr[0] (30).

    // Переходим к другому экземпляру с использованием указателя sPointer и задаем значение arr[0].
    sPointer = &s1;
    sPointer->arr[0] = 35;  // Задаем значение s1.arr[0] через указатель sPointer.
    std::cout << s.arr[0] << std::endl;  // Выводим значение s.arr[0] (35).
    std::cout << s1.arr[0] << std::endl;  // Выводим значение s1.arr[0] (35).

    // Создаем массив структур StructWithArray с именем structArray.
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;  // Задаем значение arr[3] первой структуры.
    structArray[1].someNumber = &structArray[0].arr[3];  // Задаем указатель someNumber второй структуры на arr[3] первой.

    // Устанавливаем указатель pointer на arr[3] через указатель sPointer.
    sPointer = &s;
    int* pointer = &sPointer->arr[3];
    s.arr[3] = 72;  // Задаем значение arr[3] через s.arr.
    std::cout << *pointer;  // Выводим значение, на которое указывает указатель (72).

    // Создаем экземпляр StructWithArray с именем memory и заполняем его нулевыми значениями.
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    return 0;
}
