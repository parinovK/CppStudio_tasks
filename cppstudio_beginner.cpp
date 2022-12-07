// cppstudio_beginner.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

void Switch(int number_exercise);
void Exercise1();
double Exercise2();
void Exercise3();
double Exercise4();
void Exercise5();
void Exercise6();
void Exercise7();
void Exercise8();
void Exercise9();
void Exercise10();

int main()
{
    setlocale(0, "");
    cout << "В проекте приведено решение 10-и задач.\n" << endl;
    cout << "1.Деление числа на разряды\n2.Запрограммировать математическое выражение\n3.Перевод в верхний регистр\n4.Перевод числа из метров в километры\n5.Преобразование значения типа int в char\n";
    cout << "6.Программно нарисовать домик\n7.Прямоугольный треугольник\n8.Рамка на титул\n9.Сравнение чисел используя оператор ветвления\n10.Увеличение переменных с оператором if\n";

    int number_exercise;
    cout << "\nВведите номер нужной задачи: ";
    cin >> number_exercise;
    Switch(number_exercise);
    return 0;
}

void Switch(int number_exercise) {
    switch (number_exercise) {
    case 1:
        Exercise1();
        break;
    case 2:
        cout << "Результат выражения = " << Exercise2();
        break;
    case 3:
        Exercise3();
        break;
    case 4:
        cout << "В километрах = " << Exercise4();
        break;
    case 5:
        Exercise5();//не понял задачи как таковой
        break;
    case 6:
        Exercise6();
        break;
    case 7:
        Exercise7();
        break;
    case 8:
        Exercise8();//лень делать
        break;
    case 9:
        Exercise9();
        break;
    case 10:
        Exercise10();
        break;
    default:
        cout << "Введите число в диапазоне [1;10]";
    }
}

void Exercise1() {
    system("cls");
    cout << "Введите пятизначное число:";
    int digit;
    cin >> digit;
    string str = "";
    int k = 0;
    while (digit != 0) {
        str += to_string(digit % 10);
        digit /= 10;
        k++;
    }
    if (k != 5) cout << "Введенно не пятизначное число!\n";
    else {
        reverse(str.begin(), str.end());
        for (int i = 0; i < 5; i++) {
            cout << "Цифра на " << i + 1 << " месте равна " << str[i]  << endl;
        }
    }
}

double Exercise2() {
    system("cls");
    cout << "Введите цифры a, b и f (через пробел): ";
    int a, b, f;
    cin >> a >> b >> f;
    return (a + b - f / a) + f * a * a - (a + b);
}

void Exercise3() {
    system("cls");
    cout << "Введите букву нижнего регистра: ";
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        ch = toupper(ch);
        cout << "Буква в верхнем регистре = " << ch;
    }
    else if (ch >= 'A' && ch <= 'Z') cout << "Введите букву нижнего регистра. Вы ввели букву верхнего регистра!\n";
    else if (ch >= '0' && ch <= '9') cout << "Необходимо ввести букву, а не цифру!\n";

}

double Exercise4() {
    system("cls");
    cout << "Введите количество метров: ";
    int meters;
    cin >> meters;
    return (double)meters / 1000;
}

void Exercise5() {
    system("cls");
    cout << "Введите код символа: ";
    int ascii;
    cin >> ascii;
    cout << char(ascii);
}

void Exercise6() {
    system("cls");
    cout << "\t     / \\\n";
    cout << "\t    /   \\\n";
    cout << "\t   /     \\\n";
    cout << "\t  /-------\\\n";
    cout << "\t / |    |  \\\n";
    cout << "\t   |    | \n";
    cout << "\t   |    | \n";
    cout << "\t   |____| \n";
}

void Exercise7() {
    system("cls");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void Exercise8() {

}

void Exercise9() {
    system("cls");
    cout << "Введите два числа: ";
    int d1, d2;
    cin >> d1 >> d2;
    if (d1 > d2) cout << "больше\n";
    else if (d1 < d2) cout << "меньше\n";
    else cout << "Числа равны\n";
}

void Exercise10() {
    system("cls");
    cout << "Введите три числа: ";
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 == d2 || d1 == d3 || d2 == d3) cout << "Первое число = " << d1 + 5 << "\nВторое число = " << d2 + 5 << "\nТретье число = " << d3 + 5;
    else cout << "Равных чисел нет\n";
}