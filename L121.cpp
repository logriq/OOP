#include <iostream>

class Numbers
{
public:
    int num1;
    int num2;

    void set(int first, int second)
    {
        num1 = first;
        num2 = second;
    }

    void print()
    {
        std::cout << num1 << ", " << num2;
    }
};

int main()
{
    Numbers n1;
    n1.set(1, 2);
    Numbers n2{ 3, 4 };
    n1.print();
    n2.print();
    return 0;
}

//Завдання 2
//Відповідь : Клас Numbers містить як змінні, так і методи, тому ми повинні використовувати клас.Ми не повинні використовувати структури з об’єктами, які мають методи