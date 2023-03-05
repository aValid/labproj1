#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <list>
#include <array>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <map>




using namespace std;

struct CarInfo {
    string brand;
    string number;
    string owner;
};

string answer, tasknumber, labnumber;
const double PI = 3.141592653589793;
const int ROWS5_7 = 3;
const int COLS5_7 = 4;
const int ROWS5_8 = 5;
const int COLS5_8 = 2;
const int ROWS5_9 = 3;
const int COLS5_9 = 3;

const int ROWS3_4 = 6;
const int COLS3_4 = 9;
const int N3_4 = 100;

int m, n;
const int MAX_SIZE = 100;
int A[MAX_SIZE][MAX_SIZE];

const int N3_6 = 3;

const int N5_1 = 10;
const int M5_1 = 5;

//Описание структуры Student
struct Student {
    string name;
    int group;
    int ses[M5_1];
};
struct Train {
    string nazn;
    int num;
    string time;
};
struct worker {
    string name;
    string pos;
    int year;
};

void sortWorkers(worker* tabl, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tabl[j].year > tabl[j + 1].year) {
                worker temp = tabl[j];
                tabl[j] = tabl[j + 1];
                tabl[j + 1] = temp;
            }
        }
    }
}

//Функция сравнения студентов для сортировки
bool cmp(Student a, Student b) {
    return a.name < b.name;
}

double calculateCharges(double hours) {
    double charge = 2.0;
    if (hours > 3) {
        charge += 0.5 * (hours - 3);
    }
    if (charge > 10.0) {
        charge = 10.0;
    }
    return charge;
}

int count_smaller_than_c(double* arr, int n, double c) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < c) {
            count++;
        }
    }
    return count;
}
double sum_of_positive_after_first(double* arr, int n) {
    double sum = 0;
    bool first_positive = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (!first_positive) {
                first_positive = true;
            }
            else {
                sum += arr[i];
            }
        }
    }
    return sum;
}
void rearrange(double* arr, int n, int a, int b) {
    double* temp = new double[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        int x = floor(arr[i]);
        if (x >= a && x <= b) {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        int x = floor(arr[i]);
        if (!(x >= a && x <= b)) {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
}


void find_min(int matrix[][N3_6], int& min_value, int& row)
{
    min_value = matrix[0][0];
    row = 0;
    for (int i = 0; i < N3_6; i++)
    {
        for (int j = 0; j < N3_6; j++)
        {
            if (matrix[i][j] < min_value)
            {
                min_value = matrix[i][j];
                row = i;
            }
        }
    }
}

void read_matrix() {
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
}
void find_max_element(int& max_element, int& max_i, int& max_j) {
    max_element = A[0][0];
    max_i = 0;
    max_j = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(A[i][j]) > abs(max_element)) {
                max_element = A[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
}
double findMinValue(double matrix[ROWS3_4][COLS3_4], int rows, int cols) {
    double minValue = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
        }
    }
    return minValue;
}
double findMaxValue(double matrix[ROWS3_4][COLS3_4], int rows, int cols) {
    double maxValue = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }
    return maxValue;
}

template <typename T>
T maximum(T x, T y, T z) {
    T max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}
template <typename T>
T min(T x, T y, T z) {
    T min = x;
    if (y < min) min = y;
    if (z < min) min = z;
    return min;
}
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void inputArray(int a[], int& n) {
    cout << "Введите количество элементов массива: ";
    cin >> n;
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void outputArray(int a[], int n) {
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
void minMaxAvg(int a[], int n, int& min, int& max, float& avg) {
    min = max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    avg = (float)(min + max) / 2;
}

void multiplyMatrices(int** A, int** B, int n, int m, int l, int** C) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void summMatrix() {

    const int n = 6;
    const int m = 6;
    int A[n][m];
    int sums[n];

    // Заполнение матрицы А
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    // Вычисление суммы элементов каждой строки матрицы А
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += A[i][j];
        }
        sums[i] = sum;
    }
    // Определение наибольшего значения сумм
    int max_sum = sums[0];
    for (int i = 1; i < n; i++) {
        if (sums[i] > max_sum) {
            max_sum = sums[i];
        }
    }
    cout << "Наибольшее значение сумм элементов строк матрицы A: " << max_sum << endl;

}

void EnterStar() {
    cout << "*";
}
void EnterSpace() {
    cout << " ";
}
void GetPI(int piNum, int num) {

    if (piNum == num) {

    }

}
int nod(int x, int y) {
    if (y == 0) return x;
    else return nod(y, x % y);
}
void MistakeEnter() {
    system("cls");
    cout << "Вводите числа только от 1 до 9!\n\n";
    return;
}
int Factorial(int num) {
    if (num < 0) {
        return 0;
    }
    else if (num == 0) {
        return 1;
    }
    else if (num > 0) {
        return  num * Factorial(num - 1);
    }
}
int integerPower(int base, int exponent) {

    int num = base;
    for (int i = 1; i < exponent; i++)
    {
        base = base * num;
    }
    return base;
}
int multiple(int firstNum, int secondNum) {
    int multi = secondNum / firstNum;
    if (multi % 2 == 1) {
        cout << "первое число не кратно второму\n";
        return 1;
    }
    else if (multi == 0) {
        cout << "первое число кратно второму\n";
        return 0;
    }
}
void createSquare(int side) {
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
double function1_4(double a, double b, double c) {
    double answer = ((2 * a) - b - sin(c)) / (5 + fabs(c));
    return answer;
}
double function1_5(double a, double b, double c) {
    double answer = (max(a, a + b) + max(a, b + c)) / (1 + max(a + b * c, 1.15));
    return answer;
}
int function1_6(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
void function1_7(int num) {
    int perfectNum = 0;
    perfectNum = num / 2 + 2 + 1;
    if (num == perfectNum) {
        cout << num << " | Это идеальное число\n";
    }
    else {
        cout << num << " | Это обычное число\n";
    }
}
void function1_8(double num) {
    double simpleNum = 0;
    for (int i = 2; i < num; i++)
    {
        simpleNum = num / i;
        //string number = typeid(simpleNum).name();
        if (floor(simpleNum) == simpleNum) {
            cout << "\nэто число не простое | " << num;
            num = num * 0;
            simpleNum = simpleNum * 0;
            return;
        }

    }

    cout << "\nэто число простое | " << num;
    num = num * 0;
    simpleNum = simpleNum * 0;
    return;
}
int functionFlip1_9() {
    int random = rand() % 2;
    return random;
}
void triangle(double a, double b, double& c, double& s) {  //task 1 lab 2.2
    c = sqrt(a * a + b * b);
    s = 0.5 * a * b;
}
void triangle(double a, double b, double* c, double* s) {
    *c = sqrt(a * a + b * b);
    *s = 0.5 * a * b;
}
void cylinder_properties(double radius, double height, double& area, double& volume) {
    area = PI * pow(radius, 2);
    volume = area * height;
}
void calculate(double dollarRate, double rubleRate, int som, double& dollars, double& rubles)
{
    dollars = som / dollarRate;
    rubles = som / rubleRate;
}
int calculateSeconds(int hours, int minutes, int seconds) {
    return (hours * 3600 + minutes * 60 + seconds) % 43200;
}
double Celsius(double f) {
    return (f - 32) / 1.8;
}
double Fahrenheit(double c) {
    return c * 1.8 + 32;
}
int quality_Points(double avg) {
    if (avg >= 90 && avg <= 100) return 4;
    if (avg >= 80 && avg <= 89) return 3;
    if (avg >= 70 && avg <= 79) return 2;
    if (avg >= 60 && avg <= 69) return 1;
    return 0;
}
int tripleCallByValue(int count) {
    return count * 3;
}
void tripleByReference(int& count) {
    count *= 3;
}

void SolutionLab_1Task_1(array<string, 10> tasksLab1) {
    system("cls");
    double radius, length, area;
    cout << tasksLab1[1]
        << "\nВведите радиус: ";
    cin >> radius;
    length = radius * PI * 2;
    area = PI * pow(radius, 2);
    cout << "\nДлина окружности равна: " << length;
    cout << "\nПлощадь окружности равна: " << area
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_2(array<string, 10> tasksLab1) {
    system("cls");
    int firstNum, secondNum, area, hypotenuse, sumPowNums;
    cout << tasksLab1[2]
        << "Введите первый катет: \n";
    cin >> firstNum;
    cout << "Введите второй катет: \n";
    cin >> secondNum;
    area = (firstNum * secondNum) / 2;
    hypotenuse = sqrt(pow(firstNum, 2) + pow(secondNum, 2));
    cout << "Площадь треугольника = " << area
        << "\nГипотинуза треугольника = " << hypotenuse
        << "\npress any characterS to continue: ";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_3(array<string, 10> tasksLab1) {
    system("cls");
    double area, radius2;
    cout << tasksLab1[3]
        << "Введите внутренний радиус (r>20)\n";
    cin >> radius2;
    if (radius2 < 20) {
        system("cls");
        cout << "Вводите число меньше 20!\n";
        return;
    }
    const int radius1 = 20;
    area = (PI * pow(radius2, 2)) - (PI * pow(radius1, 2));
    cout << "Площадь кольца равна =" << area
        << "\npress any characterS to continue: ";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_4(array<string, 10> tasksLab1) {
    system("cls");
    double a, b, x, y, z;
    string variant;
    cout << tasksLab1[4]
        << "Выберите вариант (A OR B)\n";
    cin >> variant;
    cout << "Введите x\n";
    cin >> x;
    cout << "Введите y\n";
    cin >> y;
    cout << "Введите z\n";
    cin >> z;
    if (variant == "a" || variant == "A") {
        a = (sqrt(fabs(x - 1)) - pow(fabs(y), 1 / 3)) / (1 + (pow(x, 2) / 2) + (pow(y, 2) / 4));
        b = x * (atan(z) + exp(-x - 3));
        cout << "\nчисло a = " << a
            << "\nчисло b = " << b
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else if (variant == "b" || variant == "B")
    {
        a = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2))));
        b = pow(cos(atan(1 / z)), 2);
        cout << "\nчисло a = " << a
            << "\nчисло b = " << b
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else {
        system("cls");
        cout << "Вводите только варианты А или Б!\n\n";
        return;
    }
    system("cls");
}
void SolutionLab_1Task_5(array<string, 10> tasksLab1) {
    system("cls");
    double a, b, area, corner;
    cout << tasksLab1[5]
        << "Введите основание а: ";
    cin >> a;
    cout << "Введите основание b: ";
    cin >> b;
    if (a < b) {
        system("cls");
        cout << "а должно быть больше чем б\n\n";
        return;
    }
    cout << "Введите угол А: ";
    cin >> corner;

    area = 0.5 * ((pow(a, 2) - pow(b, 2)) * tan(corner));
    if (area < 0) {
        area = area * -1;
    }
    cout << "\nПлощадь трапеции равна: " << area
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_6(array<string, 10> tasksLab1) {
    system("cls");
    double a, b, c, p, area;
    cout << tasksLab1[6]
        << "Введите сторону а: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите сторону с: ";
    cin >> c;

    if (a < 0 && b < 0 && c < 0) {
        system("cls");
        cout << "\nДлина люой из сторон не должна быть отрицательной ";
        return;
    }
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "\nПлощадь треугольника равна: " << area
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_7(array<string, 10> tasksLab1) {
    system("cls");
    double a, b, average1, average2;
    cout << tasksLab1[7]
        << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    average1 = (a + b) / 2;
    average2 = sqrt(fabs(a) * fabs(b));
    cout << "\nСреднее арифметическое чисел a и b равно: " << average1
        << "\nСреднее Геометрическое модулей чисел  a и b равно: " << average2
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_8(array<string, 10> tasksLab1) {
    system("cls");
    double X1, X2, Y1, Y2, length;
    cout << tasksLab1[8]
        << "Введите координату X1: ";
    cin >> X1;
    cout << "Введите координату Y1: ";
    cin >> Y1;
    cout << "Введите координату X2: ";
    cin >> X2;
    cout << "Введите координату Y2: ";
    cin >> Y2;

    length = sqrt(fabs(pow((X2 - X1), 2)) + fabs(pow((Y2 - Y1), 2)));

    cout << "\nРасстояние между точками X1Y1 и X2Y2 равно: " << length
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_1Task_9(array<string, 10> tasksLab1) {
    system("cls");
    string number;
    cout << tasksLab1[9] <<
        "Введите четырехзначное число: ";
    cin >> number;
    if (number.length() != 4) {
        system("cls");
        cout << "Вводите только четырехзначные числа\n\n";
        return;
    }
    char ones = number[0], tens = number[1],
        hundreds = number[2], thousands = number[3];


    cout << thousands << " - Тысячи \n"
        << hundreds << "- Сотни \n"
        << tens << "- Десятки \n"
        << ones << "- Единицы \n"
        << "press any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab_2Task_1(array<string, 11> tasksLab2) {
    system("cls");

    double x, y = 1;
    cout << tasksLab2[1]
        << "\nВведите число x: ";
    cin >> x;

    y = Factorial(x);

    if (x > y) {
        y = (x + y) / 2;
        x = (x * y) * 2;
    }
    else if (x < y) {
        x = (x + y) / 2;
        y = (x * y) * 2;
    }
    else {
        cout << "числа равны\n";
    }

    cout << "число x = " << x
        << "\nчисло y = " << y
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_2(array<string, 11> tasksLab2) {
    system("cls");
    double x, y, z, sum;
    cout << tasksLab2[2]
        << "\nВведите x: ";
    cin >> x;
    cout << "\nВведите y: ";
    cin >> y;
    cout << "\nВведите z: ";
    cin >> z;

    sum = x + y + z;
    if (sum < 1) {
        if (x < y && x < z) {
            x = (y + z) / 2;
        }
        else if (y < x && y < z) {
            y = (x + z) / 2;
        }
        else (z < x&& z < y); {
            z = (x + y) / 2;
        }
    }
    else {
        if (x < y) {
            x = (x + z) / 2;
        }
        else if (y < x) {
            x = (x + z) / 2;
        }
    }
    cout << "\nчисло x = " << x
        << "\nчисло y = " << y
        << "\nчисло z = " << z
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_3(array<string, 11> tasksLab2) {
    system("cls");
    double a, func;
    cout << tasksLab2[3]
        << "Введите число a: ";
    cin >> a;
    if (a <= 0) {
        func = 0;
    }
    else if (a > 0 && a <= 1) {
        func = pow(a, 2) - a;
    }
    else {
        func = pow(a, 2) - sin(PI * pow(a, 2));
    }


    cout << " f(a) = \n" << func
        << "press any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_4(array<string, 11> tasksLab2) {
    system("cls");
    double a, b, c, x, y, Descr;
    cout << tasksLab2[4]
        << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;

    Descr = pow(b, 2) - 4 * a * c;
    if (Descr < 0) {
        cout << "Корней нет";
        system("cls");
        return;
    }
    else {
        x = (pow(b, 2) + sqrt(Descr)) / (2 * a);
        y = (pow(b, 2) - sqrt(Descr)) / (2 * a);
    }

    cout << " x1 = \n" << x
        << "x2 = \n" << y
        << "press any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_5(array<string, 11> tasksLab2) {
    system("cls");
    double x, y, z, sum;
    cout << tasksLab2[5]
        << "Введите любую длину стороны треуголника x: ";
    cin >> x;
    cout << "Введите теперь любую длину стороны треуголника y: ";
    cin >> y;
    cout << "И раз уж у нас треугольник введите длину оставшийся стороны z: ";
    cin >> z;

    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        cout << "Треугольник с заданными длинами сторон реализуем.\n";
    }
    else
    {
        cout << "Треугольник с заданными длинами сторон невозможно построить.\n";
    }

    cout << "press any characterS to continue: ";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_6(array<string, 11> tasksLab2) {
    system("cls");
    double x, y, z, powX, powY, powZ;
    cout << tasksLab2[6]
        << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число z: ";
    cin >> z;
    powX = pow(x, 2);
    powY = pow(y, 2);
    powZ = pow(z, 2);
    if (x >= 0) {
        cout << powX << "; Возведенное в квадрат число x.\n";
    }
    else if (y >= 0) {
        cout << powY << "; Возведенное в квадрат число y.\n";
    }
    else if (z >= 0) {
        cout << powZ << "; Возведенное в квадрат число z.\n";
    }
    cout << "press any characterS to continue: ";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_7(array<string, 11> tasksLab2) {
    system("cls");
    double x, y, z;
    cout << tasksLab2[7]
        << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число Z: ";
    cin >> z;

    if (x >= 1 && x <= 3) {
        cout << x << "число x входит в интервал [1,3]\n";
    }
    if (y >= 1 && y <= 3) {
        cout << y << "число y входит в интервал [1,3]\n";
    }
    if (z >= 1 && z <= 3) {
        cout << z << "число z входит в интервал [1,3]\n";
    }

    cout << "\n Это все числа которые входят в интервал"
        << "press any characterS to continue:";
    cin >> answer;
    system("cls");

}
void SolutionLab_2Task_8(array<string, 11> tasksLab2) {
    system("cls");
    double x;
    cout << tasksLab2[8]
        << "Введите сколько вам лет: ";
    cin >> x;

    if (x > 100) {
        cout << "Вводите только числа до 100";
    }
    else if (x == 1 || x == 51 || x == 21 || x == 31 || x == 41 || x == 61 || x == 71 || x == 81 || x == 91) {
        cout << "Вам " << x << " гоД \n";
    }
    else if (x == 2 || x == 22 || x == 32 || x == 42 || x == 52 || x == 62 || x == 72 || x == 82 || x == 92
        || x == 3 || x == 53 || x == 23 || x == 33 || x == 43 || x == 63 || x == 73 || x == 83 || x == 93
        || x == 4 || x == 54 || x == 24 || x == 34 || x == 44 || x == 64 || x == 74 || x == 84 || x == 94) {
        cout << "Вам " << x << " годА \n";
    }

    else {
        cout << "Вам " << x << " ЛЕТ \n";
    }


    cout << "press any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_9(array<string, 11> tasksLab2) {
    system("cls");
    double a, b, c, a2 = 0, b2 = 0, c2 = 0, fabsA, fabsB, fabsC;
    cout << tasksLab2[9]
        << "Введите число a: ";
    cin >> a;
    cout << "\n число b: ";
    cin >> b;
    cout << "\n число c: ";
    cin >> c;

    a2 = a * 2;
    b2 = b * 2;
    c2 = c * 2;

    fabsA = fabs(a);
    fabsB = fabs(b);
    fabsC = fabs(c);
    if (a >= b && b >= c) {

        cout << "\n Условие выполнилось"
            << "\na = " << a2
            << "\nb = " << b2
            << "\nc = " << c2;
    }
    else {

        cout << "\n Условие не выполнилось"
            << "\na = " << fabsA
            << "\nb = " << fabsB
            << "\nc = " << fabsC;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_2Task_10(array<string, 11> tasksLab2) {
    system("cls");
    cout << tasksLab2[10];
    string word;
    cout << "\n Введите четырехзначное число: ";
    cin >> word;
    if (word.length() > 4) {
        cout << "\n Вводите только числа 9999 и меньше\n\n";
        return;
    }
    else {
        int len = word.length();
        for (int i = 0; i < len / 2; ++i) {
            if (word[i] != word[len - i - 1]) {

                cout << "\n Это число не полиндром\n"
                    << "\npress any characterS to continue:";
                cin >> answer;
                system("cls");
                return;
            }
        }

    }

    cout << "\n Это слово полиндром!"
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab_3Task_1(array<string, 15> tasksLab3) {
    system("cls");
    double x = 1, y;
    cout << tasksLab3[1];
    for (int i = 1; i < 39; i++) {
        y = 2 * pow(x, 2) + 15;
        x = x + 0.5;
        cout << "При x = [" << x << "] y = [" << y << "]; \n";

    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_2(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[2];
    double x = 0, y;
    for (int i = 1; i < 10; i++) {
        y = 0.8 * x - sin(sqrt(x) - 0.1);
        cout << "При x = [" << x << "] y = [" << y << "]; \n";
        x = x + 2;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_3(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[3];
    double t, a = 0.3, n = 10, b = 1;
    for (int i = 1; i < 11; i++) {
        if (sin((pow(b, 2) / 2)) > 0) {
            t = a * sin((pow(b, 2) / 2));
        }
        else {
            t = cos(b + (1 / n));
        }
        cout << i << ". " << " t = [" << t << "]\n";
        b = b + 1;
    }


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_4(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[4];
    double S, a = 0.3, n = 10, b = 1;
    for (int i = 1; i < 11; i++) {
        if (sin((pow(b, 2) / 2)) > 0) {
            S = a * sin((pow(b, 2) / 2));
        }
        else {
            S = cos(b + (1 / n));
        }
        cout << i << ". " << " t = [" << S << "]\n";
        b = b + 1;
    }


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_5(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[5];
    double sum = 0, pr = 1;
    int i = 1;

    do {
        sum = sum + i;
        pr = pr * i;
        i++;
    } while (i < 11);


    cout << "\nСумма равна: " << sum
        << "\nПроизведение равно:  " << pr
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_6(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[7];
    double i = 1, sum = 0;
    while (i < 101) {

        sum = sum + (1 / pow(i, 2));
        i++;
    }

    cout << "Сумма равна \n" << sum
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_7(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[7];
    double i = 1, a, sum = 1, pow = 1;
    cout << "Введите число а \n";
    cin >> a;
    do {
        pow = 1 / i;
        sum = sum + pow;
        i++;

    } while (a >= sum);


    cout << "Это число равно: \n" << sum
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_8(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[8];
    double x, n, sum = 0;
    cout << "Введите число x \n";
    cin >> x;
    cout << "Введите число n \n";
    cin >> n;
    for (int i = 1; i < n; i++) {
        sum = sum + pow(sin(x), n);
    }

    cout << "\n сумма последовательности равна: " << sum
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_9(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[9];

    double n, sum = 0;
    string variant;
    cout << "Выберите вариант (A, B, C или D)\n";
    cin >> variant;
    cout << "Введите n\n";
    cin >> n;

    if (variant == "a" || variant == "A") {
        for (int i = 1; i <= n; i++) {
            sum = sum + (1 + (1 / pow(i, 2)));
        }

        cout << "\nСумма равна = " << sum
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else if (variant == "b" || variant == "B")
    {
        for (int i = 1; i <= n; i++) {
            sum = sum + 1 / sin(i);
        }
        cout << "\nСумма равна = " << sum
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else if (variant == "c" || variant == "C") {
        for (int i = 1; i <= n; i++) {
            sum = sum + sqrt(2);
        }
        cout << "\nСумма равна = " << sum
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else if (variant == "d" || variant == "D") {
        for (int i = 1; i <= n; i++) {
            sum = sum * (sum + (cos(i) / sin(i)));
        }
        cout << "\nСумма равна = " << sum
            << "\npress any characterS to continue: ";
        cin >> answer;
        system("cls");
        return;
    }
    else {
        system("cls");
        cout << "Вводите только варианты A,B,C или D!\n\n";
        return;
    }
}
void SolutionLab_3Task_10(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[10];
    double n, j, sum = 0, x = 1, y = 1, k = 1;
    cout << "Введите число n:";
    cin >> n;
    cout << "Введите число j:";
    cin >> j;


    for (int i = 2; i < j; i++)
    {
        x = x * 0.3;
        y = x + y;
        do {
            sum = sum + (x / (1 + fabs(y)));
            k++;
        } while (n >= k);
    }
    cout << "Сумма равна = " << sum
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_11(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[11];
    int key;
    array<string, 12> littleBlackComunity = {
        "Выберите этап истории 10 негретят: \n",
        "1.Первый\n",
        "2.Второй\n",
        "3.Третий\n",
        "4.Четвертый\n",
        "5.Пятый\n",
        "6.Шестой\n",
        "7.Седьмой\n",
        "8.Восьмой\n",
        "9.Девятый\n",
        "10.Десятый\n"
        "11.Закончить программу\n"
    };
    for (string niger : littleBlackComunity) {
        cout << niger;
    }
    cin >> key;
    switch (key) {
    case 1:
        cout << "Десять негритят отправились обедать,\n"
            "Один поперхнулся, их осталось девять.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 2:
        cout << "Девять негритят, поев, клевали носом,\n"
            "Один не смог проснуться, их осталось восемь.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 3:
        cout << "Восемь негритят в Девон ушли потом,\n"
            "Один не возвратился, остались всемером.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 4:
        cout << "Семь негритят дрова рубили вместе,\n"
            "Зарубил один себя — и осталось шесть их.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 5:
        cout << "Шесть негритят пошли на пасеку гулять,\n"
            "Одного ужалил шмель, их осталось пять.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 6:
        cout << "Пять негритят судейство учинили,\n"
            "Засудили одного, осталось их четыре.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 7:
        cout << "Четыре негритёнка пошли купаться в море,\n"
            "Один попался на приманку, их осталось трое.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 8:
        cout << "Трое негритят в зверинце оказались,\n"
            "Одного схватил медведь, и вдвоём остались.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 9:
        cout << "Трое негритят в зверинце оказались,\n"
            "Одного схватил медведь, и вдвоём остались.\n";
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 10:
        cout << "Двое негритят легли на солнцепёке,\n"
            "Один сгорел — и вот один, несчастный, одинокий.\n"
            "Последний негритёнок поглядел устало,\n"
            "Он пошёл повесился, и никого не стало.\n";;
        cout << "\npress any characterS to continue:";
        cin >> answer;
        system("cls");
        SolutionLab_3Task_11(tasksLab3);
        break;
    case 11:
        cout << "\npress any characterS to end program:";
        cin >> answer;
        system("cls");
        break;
    }
}
void SolutionLab_3Task_12(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[12];

    double p = 0;// значение Пи
    int delim = 4;// делимое
    int delit = 1;// делитель
    int chlenR = 1;// член ряда

    cout << "PI" << setw(20) << "Slagaemoe" << endl;
    //   cout << "4" << setw(20) << "4 / 1" << endl;

    //   for (int i = 0; i < 3000; i++)
    while (fabs(p - 3.14159) > 5e-6)
    {
        if (chlenR % 2 != 0)
        {
            p += delim / (double)delit;

            //cout << p << setw(20) << delim << " / " << delit << endl;

            delit += 2;
            chlenR++;
        }
        else
        {
            p -= delim / (double)delit;

            //cout << p << setw(20) << delim << " / " << delit << endl;

            delit += 2;
            chlenR++;
        }
    }

    cout << "\n" << p << setw(20) << delim << " / " << delit << "\n" << endl;

    cout << "Членов ряда понадобилось: " << chlenR
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_13(array<string, 15> tasksLab3) {
    system("cls");
    cout << tasksLab3[13]
        << "Введите количество звездочек до 30: ";
    double n;
    string star = "*";
    cin >> n;
    if (n > 30) {
        system("cls");
        cout << "Вводите только числа до 30!\n\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << star;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_3Task_14(array<string, 15> tasksLab3) {
    system("cls");
    int center = 5, limit = 9;
    cout << tasksLab3[14];
    for (int i = 1; i < 10; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j < center; j++) {
                EnterSpace();
            }
            for (int x = 0; x < i; x++) {
                if (i % 2 != 0) {
                    if (i <= 9) {
                        EnterStar();
                    }
                }
            }
            if (i <= 9) {
                cout << endl;
                center--;
            }
        }
    }
    for (int i = 8; i < 10; i--)
    {
        if (i % 2 != 0) {
            for (int j = -1; j < center; j++)
            {
                EnterSpace();
            }
            for (int x = 0; x < i; x++) {
                EnterStar();
            }
            cout << endl;
            center++;
        }
        if (i < 0) {
            break;
        }

    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab_4Task_1(array<string, 8> tasksLab4) {
    system("cls");
    // массив - дни недели
    array<int, 10> weekdayTemp;
    // переменная, обозначающая количество дней с температурой ниже 0
    int belowZero{};
    // общая температура
    double totalTemp = 0;
    // средняя температура
    double averageTemp;

    // ввод температуры
    cout << "Введите температуру:\n";
    for (int i = 0; i < 7; i++) {
        // cout << "day " << i << "\t";
        cin >> weekdayTemp[i];
    }

    // средняя температура
    for (int i = 0; i < 7; i++) {
        totalTemp += weekdayTemp[i];
    }
    averageTemp = totalTemp / 7;

    // нахождение количества дней с температурой ниже нуля
    for (int i = 0; i < 7; i++) {
        if (weekdayTemp[i] < 0) {
            belowZero++;
        }
    }
    cout << "Средняя температура равна " << averageTemp << " градусам." << endl;
    cout << "Количество дней с температурой ниже нуля - " << belowZero << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_2(array<string, 8> tasksLab4) {
    system("cls");
    // длина списка
    int n;
    cout << "Введите длину списка: ";
    cin >> n;
    // объявление списка длиной n
    vector<int> numberArray(n);

    // количество подходящих чисел
    int oddNums = 0;

    cout << "Введите элементы:\n";
    for (int i = 0; i < n; i++) {
        cin >> numberArray[i];
    }

    for (int i = 0; i < n; i++) {
        if (numberArray[i] % 2 == 0) {
            if (i % 2 == 0) {
                oddNums++;
            }
        }
    }
    cout << "Количество чисел, удовлетворяющих условию этой задачи, равно " << oddNums << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_3(array<string, 8> tasksLab4) {
    system("cls");
    // длина списка
    int n;
    cout << "Введите длину списка: ";
    cin >> n;

    // объявление списка длиной n
    vector<int> numberArray(n);


    cout << "Введите элементы:\n";
    for (int i = 0; i < n; i++) {
        cin >> numberArray[i];
    }

    for (int i = 0; i > n;) {
        do {
            i++;
        } while (numberArray[i] >= numberArray[i + 1]);

        if (numberArray[i] < numberArray[i + 1]) {
            cout << "Последовательность не убывающая.";
            break;
        }
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_9(array<string, 8> tasksLab4) {
    system("cls");

    int rainfall[7]; // массив, содержащий данные о количестве осадков в течение недели
    int total = 0; // общее количество осадков

    // заполнение массива
    for (int i = 0; i < 7; i++) {
        cout << "Введите количество осадков за день " << i + 1 << ": ";
        cin >> rainfall[i];
        total += rainfall[i]; // увеличение общего количества осадков
    }

    cout << "Суммарное количество осадков за эту неделю " << total << " ед." << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_10(array<string, 8> tasksLab4) {
    system("cls");
    const int da = 7;
    int temperature[da];
    int belowZeroCount = 0;

    for (int i = 0; i < da; i++) {
        cout << "Введите температуру за " << da << "день: ";
        cin >> temperature[i];
        if (temperature[i] < 0) {
            belowZeroCount++;
        }
    }

    cout << "Количество дней, в которые температура опускалась ниже нуля: " << belowZeroCount << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_11(array<string, 8> tasksLab4) {
    system("cls");

    int array[10] = { 0, 1, 2, 2, 3, 4, 5, 6, 6, 7 };
    int count = 0;

    for (int i = 0; i < 10 - 1; i++) {
        if (array[i] == array[i + 1]) {
            count++;
        }
    }
    cout << "В массиве чисел " << count << " пар одинаковых элементов";

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_4Task_12(array<string, 8> tasksLab4) {
    system("cls");

    int arr[] = { 1, 5, 10, 8, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxIndex = 0;

    // Поиск индекса наибольшего элемента
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Меняем местами первый элемент с наибольшим
    int temp = arr[0];
    arr[0] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Вывод измененного массива
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab_5Task_1(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[1];

    // declaring those vars to use them in for loops
    int rows = 3;
    int colons = 4;

    int twoDimArray[3][4]{};

    // numbers will show maxElem's row and colon number in array
    int maxNumColon = 0;
    int maxNumRow = 0;

    // maximum (is yet 0) 
    int maxElem = 0;

    // creating a 2D array as written in the function below
    cout << "Input every element!" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            cin >> twoDimArray[r][c];
        }
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            if (twoDimArray[r][c] > maxElem) {
                maxElem = twoDimArray[r][c];
                maxNumRow = r;
                maxNumColon = c;
            }
        }
    }

    cout << "Max element is array[" << maxNumRow << "]["
        << maxNumColon << "]" << " is " << maxElem << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_2(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[2];

    // same as in last func
    int rows = 5;
    int colons = 5;

    int twoDimArray[5][5]{};

    // var counting the quantity of positive elements
    int posElemCount = 0;

    // creating a 2D array as written in the function below
    cout << "Input every element!" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            cin >> twoDimArray[r][c];
        }
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            if (twoDimArray[r][c] > 0) {
                posElemCount++;
            }
        }
    }

    cout << "Positive elements quantity is " << posElemCount << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_3(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[3];

    int rows = 3;
    int colons = 6;

    int twoDimArray[3][6]{};

    double sum = 0;
    double colSum = 0;
    double average;


    // creating a 2D array as written in the function below
    cout << "Input every element!" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            cin >> twoDimArray[r][c];
        }
    }

    for (int r = 0; r < rows; r++) {
        sum = 0; colSum = 0;
        for (int c = 0; c < colons; c++) {
            if (twoDimArray[r][c] > 0) {
                sum += twoDimArray[r][c];
                colSum++;
            }
        }
        average = sum / colSum;
        cout << "Среднее арифметическое столбца равно " << average << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_4(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[4];

    // declaring those vars to use them in for loops
    int rows = 4;
    int cols = 4;

    int twoDimArray[4][4]{};

    // creating a 2D array as written in the function below
    cout << "Input every element!" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> twoDimArray[r][c];
        }
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (c >= r) {
                twoDimArray[r][c] = 0;
            }
        }
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << twoDimArray[r][c] << " ";
        }
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_5(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[5];
    // declaring those vars to use them in for loops
    int rows = 8;
    int colons = 8;

    int currentNumber;
    int power = 1;

    int twoDimArray[8][8]{};

    for (int c = 0; c < colons; c++) {
        twoDimArray[0][c] = 2 + rand() % 8;
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            currentNumber = pow(twoDimArray[0][c], power);
            twoDimArray[r][c] = currentNumber;
        }
        power++;
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            cout << twoDimArray[r][c] << " ";
        }
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_6(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[6];
    // declaring those vars to use them in for loops
    int rows = 10;
    int colons = 10;

    int winCount = 0;
    int maxWin = 0;
    int winningTeam;
    int winOrDrawCount;

    int twoDimArray[10][10]{};

    /*
      randomizing every element in the array
      except elements in main diagonal
      where col_number == row_number
    */
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            if (r == c) {
                twoDimArray[r][c] = 0;
            }
            else {
                twoDimArray[r][c] = rand() % 3;
            }
        }
    }

    // printing out the array 
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            cout << twoDimArray[r][c] << " ";
        }
        cout << endl;
    }

    cout << "______________________________________";

    // first task
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < colons; c++) {
            if (twoDimArray[r][c] == 2) {
                winCount++;
            }
        }
        if (winCount > maxWin) {
            maxWin = winCount;
            winningTeam = r;
        }
    }
    cout << winningTeam << "are winning!";

    cout << "______________________________________";


    // second task 
    for (int r = 0; r < rows; r++) {
        winOrDrawCount = 0;
        for (int c = 0; c < colons; c++) {
            if (r != c && twoDimArray[r][c] == 0) {
                cout << "Team #" << r + 1 << " does not have 100% winrate." << endl;
                break;
            }
            else {
                winOrDrawCount++;
            }
        }
        if (winOrDrawCount == 9) {
            cout << "Team" << r + 1 << " has a 100% winrate! They are amazing!" << endl;
        }
    }

    cout << "______________________________________";
    // third task
    for (int r = 0; r < rows; r++) {
        winCount = 0;
        for (int c = 0; c < colons; c++) {
            if (twoDimArray[r][c] == 2) {
                winCount++;
            }
        }
        if (winCount > 4) {
            cout << "Team #" << r + 1 << "has more than 50% winrate.";
        }
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_7(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[7];
    int arr[ROWS5_7][COLS5_7] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    for (int i = 0; i < ROWS5_7; ++i) {
        for (int j = 0; j < COLS5_7; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Этот код содержит инициализацию двухмерного массива arr размера ROWS5_7 x COLS5_7. Далее вызывается функция sortArray,
    //которая сортирует последнюю строку массива arr, используя алгоритм сортировки sort из библиотеки algorithm и алгоритм сравнения greater<int>.
    //В конце выполняется цикл, который выводит все элементы массива arr на экран, каждый элемент на новой строке.

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab_5Task_8(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[8];
    cout << "Before sorting: " << endl;
    int arr[ROWS5_8][COLS5_8] = { {1, 2}, {5, 1}, {9, 4}, {3, 8}, {2, 0} };
    for (int i = 0; i < ROWS5_8; ++i) {
        for (int j = 0; j < COLS5_8; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS5_8 - 1; ++i) {
        for (int j = i + 1; j < ROWS5_8; ++j) {
            if (arr[i][0] > arr[j][0]) {
                int temp[COLS5_8];
                for (int k = 0; k < COLS5_8; ++k) {
                    temp[k] = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp[k];
                }
            }
        }
    }

    cout << "\nAfter sorting: " << endl;
    for (int i = 0; i < ROWS5_8; ++i) {
        for (int j = 0; j < COLS5_8; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nPress any key to continue:";
    cin >> answer;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Этот код является частью программы, которая сортирует элементы двумерного массива arr размером ROWS5_8 x COLS5_8 в порядке возрастания,
    //используя функцию compare. После сортировки элементы массива выводятся на экран. После этого пользователь может нажать любую клавишу, 
    //чтобы продолжить, и экран будет очищен с помощью функции system("cls").
}
void SolutionLab_5Task_9(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[9];
    int a[ROWS5_9][COLS5_9];
    for (int i = 0; i < ROWS5_9; ++i) {
        for (int j = 0; j < COLS5_9; ++j) {
            a[i][j] = i * j;
        }
    }
    for (int i = 0; i < ROWS5_9; ++i) {
        for (int j = 0; j < COLS5_9; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этом решении мы определяем массив a с размером 3 строки и 3 столбца. 
    //Затем мы вычисляем каждый элемент массива используя формулу i * j. Наконец, мы выводим массив на экран.
}
void SolutionLab_5Task_10(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[10];
    int A[5][5];
    int B[5][5];
    int C[5][5];

    // Заполнение матрицы A
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
    }

    // Заполнение матрицы B
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
                B[i][j] = A[i][j];
            else
                B[i][j] = A[j][i];
        }
    }

    // Заполнение матрицы C
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
                C[i][j] = -A[i][j];
            else
                C[i][j] = A[i][j];
        }
    }

    // Вывод матрицы B
    cout << "Матрица B:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    // Вывод матрицы C
    cout << "Матрица C:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Данный код решает задачу по созданию двух новых квадратных матриц B и C, 
    //элементы которых определяются по указанным формулам. Для начала создаются две матрицы с размерами 5x5.
    //Для каждой ячейки матрицы B и C вычисляется значение по указанным формулам.
    //В цикле перебираются все элементы матрицы A, и для каждой ячейки вычисляется соответствующее значение в матрице B или C.
    //Если j >= 0, то элемент B(i, j) присваивается значение A(i, j), если j <= i, то элемент B(i, j)
    //присваивается значение A(j, i).Если j < i, то элемент C(i, j) присваивается значение A(i, j), если j >= i, то элемент C(i, j) 
    //присваивается значение - A(i, j).
    //В конце кода выводятся матрицы B и C на экран.
}
void SolutionLab_5Task_11(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[11];
    int n = 4;
    int C[4][4];
    int max = INT_MIN;
    int row = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> C[i][j];
            if (i == j && C[i][j] > max) {
                max = C[i][j];
                row = i;
            }
        }
    }
    cout << "Max element: " << max << endl;
    cout << "Row: " << row << endl;
    cout << "Elements in row: ";
    for (int j = 0; j < n; j++) {
        cout << C[row][j] << " ";
    }
    cout << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этом коде создается двумерный массив C размером 4 x 4,
    //с помощью циклов for заполняется случайными числами в диапазоне от 0 до 100. Затем, 
    //с помощью вложенных циклов for, проходится по главной диагонали матрицы C, сравниваются значения каждого элемента 
    //главной диагонали с максимальным значением max и запоминается индекс элемента с максимальным значением. Наконец,
    //выводится строка, в которой находится максимальный элемент.
}
void SolutionLab_5Task_12(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[12];
    int n, m, l;
    cin >> n >> m >> l;

    int** A = new int* [n];
    int** B = new int* [m];
    int** C = new int* [n];

    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        C[i] = new int[l];
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        B[i] = new int[l];
        for (int j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            C[i][k] = 0;
            for (int j = 0; j < m; j++) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В данном решении для вычисления произведения двух матриц A и B, размера n x m и m x l соответственно, 
    //создаются третья матрица С размером n x l. Для каждой строки i матрицы С вычисляется сумма произведений 
    //элементов из i-й строки матрицы A и j-го столбца матрицы B, которые соответствуют друг другу. Это происходит
    //циклом for, внутри которого вычисляется сумма, которую записывается в матрицу С.
}
void SolutionLab_5Task_13(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[13];
    const int N = 6, M = 6;
    int A[N][M];
    int max_sum = 0;

    // Заполняем матрицу случайными числами
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = rand() % 10;
        }
    }

    // Вычисляем сумму элементов каждой строки матрицы
    int sum;
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += A[i][j];
        }

        // Определяем наибольшее значение этих сумм
        if (sum > max_sum)
        {
            max_sum = sum;
        }
    }

    cout << "Max sum of elements in a row: " << max_sum << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Этот код решает задачу по вычислению суммы элементов каждой строки матрицы 6x6 и определению наибольшего значения этих сумм.

   // Сначала мы объявляем матрицу A размером N x M(6x6) и переменную max_sum для хранения максимальной суммы.

     //   Далее, мы заполняем матрицу случайными числами с помощью функции rand() % 10

     //   Затем, мы вычисляем сумму
}
void SolutionLab_5Task_14(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[14];
    srand(time(0));
    int rows = 6, columns = 9;
    double min = INT_MAX, max = INT_MIN, sum = 0;
    double** matrix = new double* [rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new double[columns];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % 100;
            sum += matrix[i][j];
            if (matrix[i][j] > max)
                max = matrix[i][j];
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }

    double avg_max = max / (rows * columns);
    double avg_min = min / (rows * columns);
    cout << "Average of maximum element: " << avg_max << endl;
    cout << "Average of minimum element: " << avg_min << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Код создает двумерный массив matrix размером 6х9 и заполняет его случайными числами от 0 до 99.
    //Переменные min и max хранят минимальное и максимальное значение элементов массива.
    //Циклы for перебирают все элементы массива и обновляют значения min и max при необходимости. 
    //В конечном итоге, среднее арифметическое наибольшего и наименьшего значения ее элементов рассчитывается и выводится на экран.
}
void SolutionLab_5Task_15(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[15];
    const int m = 4, n = 4;


    int A[m][n];

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int max_element = INT_MIN;
    int max_element_i = -1, max_element_j = -1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(A[i][j]) > max_element)
            {
                max_element = abs(A[i][j]);
                max_element_i = i;
                max_element_j = j;
            }
        }
    }

    cout << "The maximum absolute value element is " << max_element << " at (" << max_element_i << ", " << max_element_j << ")" << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этом коде мы сначала инициализируем переменные maxValue и maxI, maxJ значением A[0][0].
    //Это нужно, чтобы при дальнейшем переборе массива мы могли сравнивать значения с этими индексами.

   // Затем мы выполняем циклы for для перебора всех элементов массива A.Внутри этих циклов мы используем условие if,
    //чтобы сравнить значение текущего элемента со значением maxValue.Если текущее значение по модулю больше maxValue,
    //мы обновляем значение maxValue и запоминаем индексы текущего элемента.

    //    В конце циклов мы выводим значение maxValue и индексы maxI и maxJ, чтобы показать, 
    //где расположен элемент с наибольшим по модулю значением.
}
void SolutionLab_5Task_16(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[16];
    int N;
    cout << "Enter the order of the matrix: ";
    cin >> N;

    int** matrix = new int* [N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int row_with_min = 0;
    int min_element = matrix[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
                row_with_min = i;
            }
        }
    }

    int sum = 0;
    for (int j = 0; j < N; j++) {
        sum += matrix[row_with_min][j];
    }

    cout << "The sum of elements in the row with the minimum element is: " << sum << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этом коде мы выделяем память для двумерной матрицы с помощью оператора new. 
    //Затем мы вводим элементы матрицы с помощью циклов for. Далее, мы находим индекс строки с элементом с наименьшим значением
    //с помощью двух циклов for. В конце, мы считаем сумму элементов этой строки и выводим ее на экран.
}
void SolutionLab_5Task_17(array<string, 18> tasksLab4) {
    system("cls");
    cout << tasksLab4[17];
    int n;
    cout << "Enter the order of the matrix: ";
    cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    int count = 1;
    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = n - 1;

    while (count <= n * n) {
        for (int i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = count++;
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = count++;
        }
        colEnd--;

        for (int i = colEnd; i >= colStart; i--) {
            matrix[rowEnd][i] = count++;
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = count++;
        }
        colStart++;
    }

    cout << "The matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Этот код генерирует квадратную матрицу порядка n, где n является введенным числом, и заполняет ее элементами, расположенными по спирали.
}



void SolutionLab2_1Task1(array<string, 10> tasksLab2_1) {
    system("cls");
    int base = 1, exponent = 1;
    cout << tasksLab2_1[1]
        << "Введите число base: ";
    cin >> base;
    cout << "Введите число exponent: ";
    cin >> exponent;
    base = integerPower(base, exponent);
    cout << "base = " << base << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task2(array<string, 10> tasksLab2_1) {
    system("cls");
    int firstNum, secondNum, answer;
    cout << tasksLab2_1[2] << "Введите первое число";
    cin >> firstNum;
    cout << "Введите второе число";
    cin >> secondNum;
    answer = multiple(firstNum, secondNum);

    cout << answer << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task3(array<string, 10> tasksLab2_1) {
    system("cls");
    int side;
    cout << tasksLab2_1[3]
        << "Введите число side: ";
    cin >> side;
    createSquare(side);
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task4(array<string, 10> tasksLab2_1) {
    system("cls");
    double t, s, answer;
    cout << tasksLab2_1[4]
        << "Введите число t: ";
    cin >> t;
    cout << "Введите число s: ";
    cin >> s;
    answer = function1_4(t, -2 * s, 1.17) + function1_4(2.2, t, s - t);

    cout << "function = " << answer
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task5(array<string, 10> tasksLab2_1) {
    system("cls");
    double a, b, c, answer;
    cout << tasksLab2_1[5]
        << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    answer = function1_5(a, b, c);

    cout << "function = " << answer
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task6(array<string, 10> tasksLab2_1) {
    system("cls");
    cout << tasksLab2_1[6];
    double a, b, c, d, e, f, g, h;
    cout << "Введите последовательность из 8 целых чисел через пробел: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    a = function1_6(a);
    b = function1_6(b);
    c = function1_6(c);
    d = function1_6(d);
    e = function1_6(e);
    f = function1_6(f);
    g = function1_6(g);
    h = function1_6(h);

    cout << a << " "
        << b << " "
        << c << " "
        << d << " "
        << e << " "
        << f << " "
        << g << " "
        << h << " "
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task7(array<string, 10> tasksLab2_1) {
    system("cls");
    cout << tasksLab2_1[7];
    for (int i = 1; i <= 1000; i++)
    {
        function1_7(i);
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task8(array<string, 10> tasksLab2_1) {
    system("cls");
    string variant;
    double num;
    cout << tasksLab2_1[8]
        << "Выберите вариант задачи a b or c: ";
    cin >> variant;
    if (variant == "a" || variant == "A") {
        cout << "Введите целое число: ";
        cin >> num;
        function1_8(num);
    }
    else if (variant == "b" || variant == "B") {
        for (int i = 1; i <= 10000; i++)
        {
            function1_8(i);
        }
    }
    else if (variant == "c" || variant == "C") {
        SolutionLab2_1Task8(tasksLab2_1);
    }
    else {
        cout << "такого варианта нет";
        SolutionLab2_1Task8(tasksLab2_1);
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_1Task9(array<string, 10> tasksLab2_1) {
    system("cls");
    cout << tasksLab2_1[9];
    int eagles = 0, tails = 0;
    for (int i = 0; i < 100; i++)
    {
        int result = functionFlip1_9();
        if (result == 1) {
            cout << "\nОрёл | " << result;
            eagles++;
        }

        else {
            cout << "\nРешка | " << result;
            tails++;
        }
    }
    cout << "\nEagles = " << eagles
        << "\nTails = " << tails
        << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab2_2Task1(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[1];
    double a, b, c, s;

    cout << "Enter the first cathetus: ";
    cin >> a;
    cout << "Enter the second cathetus: ";
    cin >> b;

    triangle(a, b, c, s);
    cout << "Hypotenuse: " << c << endl;
    cout << "Area: " << s << endl;

    triangle(a, b, &c, &s);
    cout << "Hypotenuse: " << c << endl;
    cout << "Area: " << s << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В данном коде реализованы две функции triangle: одна передает результаты через ссылки,
    //другая через указатели. Они вычисляют гипотенузу (c) и площадь (s) треугольника,
    //используя формулы: c = sqrt(a^2 + b^2) и s = 0.5 * a * b.

    //В функции main пользователь вводит два катета(a и b), а затем вызывает обе функции 
    //triangle, чтобы получить результаты.Результаты выводятся на экран.
}
void SolutionLab2_2Task2(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[2];
    //Площадь основания = π * радиус^2
    //Объем цилиндра = Площадь основания * высота
    double radius, height, area, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cylinder_properties(radius, height, area, volume);

    cout << "The area of the base is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;
    cout << "\npress any characterS to continue:";
    //В этом коде, cylinder_properties является функцией, которая принимает радиус, высоту,
    ///площадь и объем как аргументы. Площадь и объем передаются по ссылке, поэтому значения,
    //вычисленные внутри функции, будут также доступны в главной программе.
    cin >> answer;
    system("cls");
}
void SolutionLab2_2Task3(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[3];
    double dollarRate, rubleRate, dollars, rubles;
    int som;

    cout << "Enter the exchange rate for dollars: ";
    cin >> dollarRate;
    cout << "Enter the exchange rate for rubles: ";
    cin >> rubleRate;
    cout << "Enter the amount of money in som: ";
    cin >> som;

    calculate(dollarRate, rubleRate, som, dollars, rubles);

    cout << som << " som is equal to " << dollars << " dollars and " << rubles << " rubles" << endl;


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //В этой программе, функция calculate принимает курсы доллара и рубля,
    //а также количество денег в сомах. Она вычисляет и возвращает количество денег в долларах
    //и рублях через переменные dollars и rubles, которые передаются в функцию по ссылке.
    //В главной функции SolutionLab2_2Task3 пользователь вводит курсы доллара и рубля,
    //а также количество денег в сомах. Затем вызывается функция calculate, 
    //которая вычисляет количество денег в долларах и рублях, и результаты выводятся на экран.
}
void SolutionLab2_2Task4(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[4];
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter the first time (hours minutes seconds): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter the second time (hours minutes seconds): ";
    cin >> h2 >> m2 >> s2;
    int t1 = calculateSeconds(h1, m1, s1);
    int t2 = calculateSeconds(h2, m2, s2);
    int interval = abs(t2 - t1);
    cout << "The interval between the two moments is " << interval << " seconds" << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В функции calculateSeconds происходит вычисление количества секунд,
    //прошедших с полуночи. Для этого используется формула hours * 3600 + minutes * 60 + seconds,
    //которая переводит часы, минуты и секунды в секунды.
    // 
    //Далее вычисленное значение модульно делится на 43200 
    //(количество секунд в 12 часах), чтобы получить целое число, 
    //которое представляет собой количество секунд, прошедших со времени,
    //когда часы в последний раз показали 12

}
void SolutionLab2_2Task5(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[5];
    cout << "Celsius\tFahrenheit" << endl;
    for (int i = 0; i <= 100; i++) {
        cout << i << "\t\t" << Fahrenheit(i) << endl;
    }
    cout << endl;
    cout << "Fahrenheit\tCelsius" << endl;
    for (int i = 32; i <= 212; i++) {
        cout << i << "\t\t" << Celsius(i) << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //1. Написание функции Celsius, которая преобразует температуру по Фаренгейту
    //в температуру по Цельсию.
    //2 Написание функции Fahrenheit,
    //которая преобразует температуру по Цельсию в температуру по Фаренгейту.
    //3.Использование этих функций для создания таблицы,
    //которая показывает эквивалентные температуры в двух шкалах в заданном диапазоне.
}
void SolutionLab2_2Task6(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[6];
    double avg;
    cout << "Enter the average score: ";
    cin >> avg;
    cout << "Quality points: " << quality_Points(avg) << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //1 В функции quality_Points передается аргумент avg, который является средней оценкой студентов.
    //2 Затем функция quality_Points использует условные операторы if-else, чтобы проверить,
    //в каком диапазоне находится средняя оценка, и возвращает соответствующее число.
    //3 В главной функции SolutionLab2_2Task6 происходит ввод средней оценки с клавиатуры
    //и вызов функции quality_Points.
    //4 Функция quality_Points возвращает число, которое затем выводится на экран.



}
void SolutionLab2_2Task7(array<string, 8> tasksLab2_2) {
    system("cls");
    cout << tasksLab2_2[7];
    int count = 5;

    cout << "count = " << count << endl;

    int tripleCountByValue = tripleCallByValue(count);
    cout << "tripleCountByValue = " << tripleCountByValue << endl;
    cout << "count (after tripleCountByValue) = " << count << endl;

    tripleByReference(count);
    cout << "count (after tripleByReference) = " << count << endl;


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //В этой программе мы используем две функции tripleCallByValue и tripleByReference
    //для утроения значения переменной count.

    //tripleCallByValue принимает переменную count по значению. Это значит, что функция
    //получает копию значения переменной count, а исходная переменная count не изменяется.
    //Функция утраивает значение этой копии и возвращает результат.

    //tripleByReference принимает переменную count по ссылке.
    //Это значит, что функция получает ссылку на исходную переменную count
    //в виде ссылочного параметра. Функция может изменять значение исходной переменной
    //count через этот ссылочный параметр.

    //Таким образом, разница между этими двумя подходами заключается в том,
    //что в первом случае мы используем копию переменной, 
    //во втором - исходную переменную через ее ссылку.

}

void SolutionLab2_3Task1(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[1];
    int a[N3_4], n, min, max;
    float avg;
    inputArray(a, n);
    outputArray(a, n);
    minMaxAvg(a, n, min, max, avg);
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Среднее арифметическое минимального и максимального элементов: " << avg << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //Данный код - это C++ программа, которая выполняет определение минимального, 
    //максимального элемента и среднего арифметического между ними в одномерном массиве.

    //В начале программы определяются функции, которые будут использоваться в дальнейшем:

    //void InputArray(int a[], int size) - функция ввода массива. 
    //Она принимает массив a и его размер size как параметры.

    //void OutputArray(int a[], int size) - функция вывода массива.
    //Она также принимает массив a и его размер size как параметры.

    //void GetMinMax(int a[], int size, int &min, int &max) - функция,
    //которая определяет минимальный и максимальный элементы массива. 
    //Она принимает массив a, его размер size и ссылки на переменные min и 

    //max, куда будут записаны найденные минимальный и максимальный элементы.
}
void SolutionLab2_3Task2(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[2];
    int n, m, l;
    cout << "Введите размерность матрицы А (n x m): ";
    cin >> n >> m;

    int** A = new int* [n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    cout << "Введите элементы матрицы А: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Введите размерность матрицы В (m x l): ";
    cin >> m >> l;

    int** B = new int* [m];
    for (int i = 0; i < m; i++) {
        B[i] = new int[l];
    }

    cout << "Введите элементы матрицы В: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }

    int** C = new int* [n];
    for (int i = 0; i < n; i++) {
        C[i] = new int[l];
    }

    multiplyMatrices(A, B, n, m, l, C);

    cout << "Результирующая матрица C: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //В этом коде мы выводим результирующую матрицу C. Используем вложенный цикл, 
    //чтобы пройтись по всем элементам результирующей матрицы C. Внешний цикл for 
    //перебирает строки, а внутренний цикл for перебирает столбцы. Каждый элемент
    //результирующей матрицы C выводится в консоль. После вывода каждой строки мы
    //выводим переход на новую строку. В конце функция возвращает 0, что указывает
    //на успешное завершение программы.
}
void SolutionLab2_3Task3(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[3];

    summMatrix();

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этом коде, мы сначала заполняем матрицу А с помощью ввода из стандартного
    //потока. Затем, вычисляем сумму элементов каждой строки матрицы А
}
void SolutionLab2_3Task4(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[4];
    double matrix[ROWS3_4][COLS3_4];
    // Ввод матрицы
    for (int i = 0; i < ROWS3_4; i++) {
        for (int j = 0; j < COLS3_4; j++) {
            cin >> matrix[i][j];
        }
    }

    double minValue = findMinValue(matrix, ROWS3_4, COLS3_4);
    double maxValue = findMaxValue(matrix, ROWS3_4, COLS3_4);
    double avg = (minValue + maxValue) / 2;

    cout << "Среднее арифметическое наибольшего и наименьшего значения: " << avg << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Этот код - решение задачи нахождения среднего арифметического наибольшего и наименьшего
    //значений элементов действительной матрицы размера 6x9.
    //1 Объявляется матрица размером 6x9 и заполняется случайными числами.
    //2 Объявляются переменные min и max, в которых будут храниться значения
    //наименьшего и наибольшего элементов матрицы соответственно.
    //3 Вычисляется минимальный и максимальный элементы матрицы,
    //проходясь по всем элементам матрицы.
    //4 Вычисляется сумма всех элементов матрицы.
    //5 Вычисляется среднее арифметическое минимального и максимального значений элементов матрицы.
    //6 Выводится результат вычисления среднего арифметического минимального и максимального значений элементов матрицы.
}
void SolutionLab2_3Task5(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[5];
    read_matrix();
    int max_element, max_i, max_j;
    find_max_element(max_element, max_i, max_j);
    cout << "The maximum element by absolute value is: " << max_element << endl;
    cout << "Its indices are: " << max_i + 1 << " " << max_j + 1 << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //Решение этой задачи заключается в следующем:
    //1. Создание двумерного массива, который будет хранить элементы матрицы.
    //2. Инициализация переменных, в которых будет храниться значение наибольшего элемента и его индексы.
    //3. Обход каждого элемента матрицы и сравнение его модуля с текущим максимальным значением.
    //Если текущий элемент больше, то он становится новым максимальным 
    //значением и его индексы запоминаются.
    //4. Вывод результатов - значение и индексы наибольшего по модулю элемента матрицы.
    //В данном решении мы использовали только стандартные библиотеки C++, не используя библиотеку <algorithm>.

}
void SolutionLab2_3Task6(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[6];
    int matrix[N3_6][N3_6] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int min_value, row;
    find_min(matrix, min_value, row);
    int sum = 0;
    for (int i = 0; i < N3_6; i++)
    {
        sum += matrix[row][i];
    }
    cout << "The sum of elements in the row with the minimum element is: " << sum << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //эта задача была решина используя функцию, которая находит минимальный элемент 
    //матрицы и возвращает его значение и индекс строки, в которой он расположен.
    //Затем мы можем использовать эту информацию, чтобы вычислить сумму элементов строки.


    //Мы создаем две функции: find_min и main.
    //Функция find_min принимает двумерный массив matrix, ссылки на min_value и row.
    //Внутри функции find_min мы инициализируем min_value значением первого элемента матрицы

}
void SolutionLab2_3Task7(array<string, 8> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[7];
    int n;
    double c, a, b;
    cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> c;
    cout << "Number of elements smaller than " << c << ": " << count_smaller_than_c(arr, n, c) << endl;
    cout << "Sum of positive elements after first positive: " << sum_of_positive_after_first(arr, n) << endl;
    cin >> a >> b;
    rearrange(arr, n, a, b);
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этой программе, три функции были написаны для решения трех частей задачи. 
    //Функция "countSmallerThanC" принимает два аргумента - массив и число С.
    // 
    //Она перебирает все элементы массива и считает, сколько из них меньше С. Функция возвращает это количество.
    //
    //Функция "sumAfterFirstPositive" принимает один аргумент - массив.
    //Она находит первый положительный элемент в массиве и суммирует все
    //положительные элементы, расположенные после него. Функция возвращает эту сумму.

    //Функция "sortArray" принимает два аргумента - массив и два числа "a" и "b".
    //Она создает два временных массива - один для элементов, целая часть которых 
    //находится в интервале [a, b], а другой для остальных элементов. Затем она сливает эти два
    //массива в один массив и возвращает е

    //Функция "sortArray" принимает два аргумента - массив и два числа "a" и "b". 
    //Она создает два временных массива - один для элементов, целая часть которых находится
    //в интервале [a, b], а другой для остальных элементов. Затем она сливает эти два массива
    //в один массив и возвращает е

    //"sortArray" функция используется для сортировки элементов массива. Она принимает два аргумента:
    //указатель на массив и его размер.
    //В теле функции "sortArray", сначала используется цикл for, чтобы просмотреть каждый
    //элемент массива.Далее, с помощью условной конструкции if, проверяется, является ли целая
    //часть элемента в диапазоне[a, b].Если элемент подходит под условие, он перемещается в
    //начало массива.

    //После перебора всех элементов массива, функция "sortArray" возвращает указатель
    //на отсортированный массив.

    //Таким образом, "sortArray" функция позволяет сортировать элементы массива согласно
    //условию задачи, и возвращает отсортированный массив для дальнейшей обработки.
}

void SolutionLab2_4Task1(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[1];
    cout << "Наибольшее из целочисленных: " << maximum(3, 19, 7) << std::endl;
    cout << "Наибольшее среди чисел с плавающей запятой: " << maximum(19.14, 5.7, 7.2) << std::endl;
    cout << "Наибольшее среди символов: " << maximum('a', 'c', '1') << std::endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_4Task2(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[2];
    cout << "Наименьшее среди целочисленных: " << min(3, 5, 7) << std::endl;
    cout << "Наименьшее среди чисел с плавающей запятой: " << min(3.14, 5.7, 7.2) << std::endl;
    cout << "Наименьшее среди символов: " << min('a', 'c', 'z') << std::endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_4Task3(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[3];
    cout << "a) Ошибка: незакрытый фигурный скобки {\n";
    cout << "Исправление: закрыть фигурную скобку {\n";

    cout << "b) Ошибка: неправильный оператор вывода « \n";
    cout << "Исправление: использовать правильный оператор вывода <<\n";

    cout << "c) Ошибка: несколько одноименных функций с одинаковым параметром\n";
    cout << "Исправление : использовать уникальные имена для функций или уточнить тип возвращаемого значения\n";
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

}
void SolutionLab2_4Task4(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[4];
    int n;
    cout << "Введите положительно число: ";
    cin >> n;
    cout << n << "-ый элемент ряда Финабочи: " << fibonacci(n) << std::endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}
void SolutionLab2_4Task5(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[5];
    int x, y;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите Второе число: ";
    cin >> y;

    cout << "Набольший общий делитель: " << nod(x, y) << std::endl;


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
}

void SolutionLab2_5Task1(array<string, 4> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[1];
    Student stud1[N5_1];
    bool flag = false;

    // ввод данных
    for (int i = 0; i < N5_1; i++) {
        cout << "Введите ФИО студента: ";
        cin >> stud1[i].name;
        cout << "Введите номер группы: ";
        cin >> stud1[i].group;
        cout << "Введите оценки: ";
        for (int j = 0; j < M5_1; j++) {
            cin >> stud1[i].ses[j];
        }
    }
    // упорядочиваем записи по имени
    for (int i = 0; i < N5_1 - 1; i++) {
        for (int j = i + 1; j < N5_1; j++) {
            if (stud1[i].name > stud1[j].name) {
                swap(stud1[i], stud1[j]);
            }
        }
    }
    // вывод фамилий и номеров групп студентов, имеющих оценки 4 и 5
    for (int i = 0; i < N5_1; i++) {
        for (int j = 0; j < M5_1; j++) {
            if (stud1[i].ses[j] == 4 || stud1[i].ses[j] == 5) {
                flag = true;
                cout << "Фамилия: " << stud1[i].name << endl;
                cout << "Номер группы: " << stud1[i].group << endl;
                break;
            }
        }
    }
    if (!flag) {
        cout << "Нет студентов, имеющих оценки 4 и 5." << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    /*https://docs.google.com/document/d/1tkb_i4yHxKQNEqiosEwDrfuFF5uIaPcrUQdcqV7f7z8/edit?usp=sharing
    */
}
void SolutionLab2_5Task2(array<string, 4> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[2];
    Train rasp[6];
    int n, i, j;

    cout << "Enter the number of trains: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter the destination, number, and departure time of the train: ";
        cin >> rasp[i].nazn >> rasp[i].num >> rasp[i].time;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (rasp[j].num > rasp[j + 1].num) {
                Train temp = rasp[j];
                rasp[j] = rasp[j + 1];
                rasp[j + 1] = temp;
            }
        }
    }

    cout << "Enter the train number you are looking for: ";
    int target;
    cin >> target;

    bool found = false;
    for (i = 0; i < n; i++) {
        if (rasp[i].num == target) {
            found = true;
            cout << "Destination: " << rasp[i].nazn << endl;
            cout << "Number: " << rasp[i].num << endl;
            cout << "Departure time: " << rasp[i].time << endl;
            break;
        }
    }

    if (!found) {
        cout << "No such train found." << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");

    //1. Описывается структура Train с полями nazn, num, time, которые содержат название
    //пункта назначения, номер поезда и время отправления соответственно.

    //2. В массив rasp вводятся данные о 6 поездах с помощью цикла for.

    //3. Далее мы выполняем поиск номера поезда в массиве rasp с помощью цикла for.
    ///В каждой итерации цикла сравниваем номер введенного поезда с номером поезда в текущей записи.
    //Если номера совпадают, выводим информацию о этом поезде, и выходим из цикла. 
    //Если по окончании цикла ничего не нашлось, выводим соответствующее сообщение.
}
void SolutionLab2_5Task3(array<string, 4> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[3];
    int n = 10;
    worker tabl[10];
    for (int i = 0; i < n; i++) {
        cout << "Enter name, position, and year for worker " << i + 1 << ": ";
        cin >> tabl[i].name >> tabl[i].pos >> tabl[i].year;
    }
    sortWorkers(tabl, n);

    int experience;
    cout << "Enter minimum work experience: ";
    cin >> experience;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (2023 - tabl[i].year >= experience) {
            cout << tabl[i].name << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No workers found with work experience greater than or equal to " << experience << endl;
    }
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //1 Опишем структуру worker, содержащую поля name (фамилия),
    //pos (должность) и year (год поступления на работу).
    //2 Считываем данные для 10 работников в массив tabl.
    //3 Сортируем массив tabl по году поступления на работу с помощью функции sortWorkers().
    //4 Считываем минимальный стаж работы, который нужно превышать.
    //5 Теперь, когда мы упорядочили массив tabl, мы можем выполнить поиск в этом массиве 
    //работников со стажем работы более заданного значения.

    /*
    for i in range(10):
    if (current_year - tabl[i].year) > experience:
        print(tabl[i].name)
        found = True
    */

    //Здесь мы используем цикл for, чтобы перебрать все 10 элементов массива tabl.
    //Для каждого элемента мы вычисляем стаж работы вычитанием текущего года из года
    //поступления на работу. Если стаж работы превышает значение, введенное с клавиатуры,
    //мы выводим на экран фамилию работника. Также мы задаем значение 
    //переменной found как True, чтобы показать, что мы нашли хотя бы одного работника с
    //подходящим стажем работы.

    //Наконец, мы проверяем, нашли ли мы хотя бы одного работника с подходящим стажем работы, 
    //и выводим соответствующее сообщени

}

void SolutionLab2_6Task1(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[1];
    // Инициализация двумерного массива
    const int N = 8;
    double arr[N][N];

    // Заполнение массива случайными вещественными числами
    srand(time(NULL)); // Инициализация генератора случайных чисел
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() * 100.0 / RAND_MAX;
        }
    }

    // Вывод массива на экран
    cout << "Двумерный массив:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << fixed << setprecision(2) << setw(6) << arr[i][j];
        }
        cout << endl;
    }

    // Запись массива в файл
    ofstream fout("array.txt");
    if (!fout.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fout << fixed << setprecision(2) << setw(6) << arr[i][j];
        }
        fout << endl;
    }
    fout.close();


    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В данном коде создается двумерный массив размером 8x8, используя вложенные циклы for.
    //Внутренний цикл for генерирует случайные вещественные числа в диапазоне от 0 до 100,
    //которые записываются в ячейку массива. Внешний цикл for запускает внутренний цикл 8 раз,
    //чтобы создать 8 строк массива. После того, как массив будет заполнен случайными числами, 
    //он выводится на экран с помощью вложенных циклов for и выравнивания по правому краю.
    //Также, массив записывается в файл, используя команду ofstream, и значения также
    //выравниваются с двумя знаками после запятой.
}
void SolutionLab2_6Task2(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[2];
    vector<CarInfo> cars;
    map<string, int> brandsCounter;

    ifstream file("cars.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            CarInfo car;
            file >> car.brand >> car.number >> car.owner;
            cars.push_back(car);
            brandsCounter[car.brand]++;
        }
        file.close();
    }
    else {
        cout << "File not found" << endl;
        return;
    }

    // a) Вывести сведения о владельцах и номерах автомобилей каждой марки
    cout << "Owners and numbers of each brand:" << endl;
    for (const auto& car : cars) {
        cout << car.brand << " " << car.number << " " << car.owner << endl;
    }

    // b) Подсчитать количество автомобилей каждой марки
    cout << "Count of cars of each brand:" << endl;
    for (const auto& brandCounter : brandsCounter) {
        cout << brandCounter.first << ": " << brandCounter.second << endl;
    }

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Для решения задачи, нам нужно сначала прочитать файл, в котором содержатся сведения об автомобилях.
    //Это можно сделать с помощью функции fopen() и fscanf(). Затем, нужно использовать структуру для хранения
    //этих сведений в памяти. Для удобства, мы можем использовать карту (map) в C++,
    //чтобы хранить количество каждой марки автомобиля.
    //Далее, мы можем использовать цикл for или while, чтобы прочитать каждый элемент файла, используя fscanf().
    //Каждый раз, когда мы читаем марку автомобиля, мы можем добавить 1 к соответствующему значению в карте / словаре.
    //В конце, мы можем вывести сведения о владельцах и номерах автомобилей каждой марки и количество автомобилей каждой марки.
}
void SolutionLab2_6Task3(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[3];
    cout << "Enter the name of the input file: ";
    string filename;
    cin >> filename;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cout << "Error opening the file!" << endl;
        return;
    }

    string line, result;
    while (getline(input_file, line)) {
        result += line + '\n';
    }
    input_file.close();

    ofstream output_file("Result_file.txt");
    if (!output_file.is_open()) {
        cout << "Error creating the output file!" << endl;
        return;
    }

    int start = 0, end = 60;
    while (end < result.size()) {
        result.insert(end, "\n");
        start = end + 1;
        end = start + 60;
    }

    output_file << result;
    output_file.close();

    cout << "The result was written to the file Result_file.txt" << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");


    //В этом коде мы получаем имя файла с клавиатуры и открываем его с помощью ifstream.
    //Если файл не может быть открыт, выводится сообщение об ошибке.

    //Затем мы читаем файл построчно с помощью getline и добавляем каждую строку в 
    //переменную result. После закрытия файла, мы создаем выходной файл с именем
    //"Result_file.txt" с помощью ofstream. Если файл не может быть создан,
    //выводится сообщение об ошибке.

    //После этого происходит Разделение текста на абзацы по 60 символов и запись в файл Result_file.txt
    //Для разделения текста на абзацы, мы будем использовать цикл while и переменную
    //result, которая будет отслеживать длину текущей строки.
    //Каждый раз, когда длина строки достигнет 60 символов,
    //мы запишем ее в файл Result_file.txt и начнем новую строку.
    //Так же мы добавим условие, что если символ, который мы добавляем в 
    //текущую строку, является символом красной строки ($), мы запишем текущую
    //строку и начнем новую.
}
void SolutionLab2_6Task4(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[4];
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    // Open the input file
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Unable to open the file." << endl;
        return;
    }

    // Open the output file
    ofstream outputFile("Result_file.txt");

    // Read the text from the input file
    string text;
    getline(inputFile, text, '\0');

    // Convert the text to lowercase
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        if (isupper(ch) && (i == 0 || text[i - 1] != '.')) {
            text[i] = tolower(ch);
        }
    }

    // Write the converted text to the output file
    outputFile << text;

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "The text has been successfully converted and saved to Result_file.txt." << endl;
    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //Сначала мы запрашиваем у пользователя имя файла, в котором находится исходный текст.
    //Затем мы открываем входной файл с использованием потока ifstream и проверяем,
    //был ли файл успешно открыт.
    //Далее мы открываем файл вывода Result_file.txt с помощью потока ofstream.
    //затем мы считываем текст из входного файла в переменную text с помощью функции getline().
    //Во входном файле содержится текст. Определите, сколько раз в тексте встречается каждое слово.
    //Результат вывести в файл «Result_file.txt» в виде слова и числа, 
    //разделенные пробелом.
    //цикл for используется для перебора всех символов в входной строке.Он позволяет
    //проверять каждый символ и изменять его, если необходимо.В данном случае,
    //цикл for проверяет, является ли данный символ прописной буквой,
    //и если является, то заменяет его на строчную букву, за исключением случаев,
    //когда символ является первым после точки.Таким образом, цикл for является
    //основным инструментом для реализации условий задачи.
}
void SolutionLab2_6Task5(array<string, 6> tasksLab2_3) {
    system("cls");
    cout << tasksLab2_3[5];
    cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
    double totalCharge = 0.0;
    for (int i = 1; i <= 3; i++) {
        double hours;
        cout << "Enter the hours for car " << i << ": ";
        cin >> hours;
        double charge = calculateCharges(hours);
        totalCharge += charge;
        cout << setw(3) << i << setw(10) << hours << setw(10) << charge << endl;
    }
    cout << "TOTAL" << setw(7) << "" << setw(10) << totalCharge << endl;

    cout << "\npress any characterS to continue:";
    cin >> answer;
    system("cls");
    //В этой программе функция calculateCharges используется для вычисления платы
    //за парковку для каждого клиента. В функции проверяется, сколько часов автомобиль
    //парковался, и в соответствии с этим рассчитывается плата

    //В цикле for программа спрашивает у пользователя количество часов,
    //за которые парковался каждый из трех клиентов. Затем при помощи функции
    //calculateCharges рассчитывается плата за парковку для каждого клиента.
    //Общий вчерашний доход также считается и выводится в конце пр
}



void SolutionLab_1() {
    system("cls");
    array<string, 10> tasksLab1 =
    {
        "Выберите номер задание:\n",
        "1. Дан радиус окружности. Вычислить длину окружности и площадь круга.\n",
        "2. Даны 2 катета прямоугольного треугольника. Найти гипотенузу и площадь треугольника.\n",
        "3. Найти площадь кольца, внутренний радиус которого равен 20, а внешний – заданному числу r (r>20).\n",
        "4. Даны x, y, z. Вычислить a, b в выражениях представленных в программе.\n",
        "5. Найти площадь равнобочной трапеции с основаниями a и b и углом  при большем основании a.\n(Примечание: углы компилятор принимает в радианах).\n",
        "6. Известны длины трех сторон треугольника. Вычислить площадь треугольника.\n",
        "7. Даны два целых числа. Найти среднее арифметическое этих чисел и среднее геометрическое их модулей.\n",
        "8. Вычислить расстояние между двумя точками X1,Y1 и X2,Y2.\n",
        "9. Дано четырехзначное целое число Х. Определить цифры числа. \nОтвет выдать в виде, например:/7 – thousands/3 – hundreds/4 – tens/6 - ones./\n",
    };
    for (string task : tasksLab1)
        cout << task;
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab_1Task_1(tasksLab1);
    }
    else if (tasknumber == "2") {
        SolutionLab_1Task_2(tasksLab1);
    }
    else if (tasknumber == "3") {
        SolutionLab_1Task_3(tasksLab1);
    }
    else if (tasknumber == "4") {
        SolutionLab_1Task_4(tasksLab1);
    }
    else if (tasknumber == "5") {
        SolutionLab_1Task_5(tasksLab1);
    }
    else if (tasknumber == "6") {
        SolutionLab_1Task_6(tasksLab1);
    }
    else if (tasknumber == "7") {
        SolutionLab_1Task_7(tasksLab1);
    }
    else if (tasknumber == "8") {
        SolutionLab_1Task_8(tasksLab1);
    }
    else if (tasknumber == "9") {
        SolutionLab_1Task_9(tasksLab1);
    }
    else {
        MistakeEnter();
    }
}
void SolutionLab_2() {
    system("cls");
    array<string, 11> tasksLab2 =
    {
      "Выберите номер Задание: \n",
      "1. Даны действительные числа x и y (x!=y). \n"
         "Меньшее из них заменить полусуммой чисел, а большее – удвоенным произведением.\n",
      "2. Если сумма 3 действительных чисел x,y,z <1,\n"
        "то наименьшее из этих чисел заменить полусуммой двух других,\n"
        "в противном случае заменить меньшее из x и  y полусуммой двух оставшихся значений.\n",
      "3. Дано действительное число а. Вычислить f(a),\n"
        "используя математическую функцию представленную в программе \n",
      "4. Даны действительные числа a, b, c. Найти корни квадратного уравнения ax2+bx+c=0,\n"
        "в противном случае ответом должно служить сообщение, что корней нет.\n",
      "5. Даны действительные числа x, y, z. Выяснить, существует ли треугольник с длинами сторон  x, y, z.\n",
      "6. Даны три действительных числа. Возвести в квадрат те из них, значения которых неотрицательны.\n",
      "7. Даны действительные числа. Выбрать из них, те которые принадлежат интервалу [1,3].\n",
      "8. Программа запрашивает у пользователя «Сколько Вам лет?» . Вы вводите положительное число до 100.\n"
        "Программа должна выдать полный ответ « Вам Х (или  лет или года или год).\n",
      "9. Даны действительные числа a, b, c.Удвоить эти числа, если a>=b>=c,\n"
        "и заменить их абсолютными значениями, если это не так.\n",
      "10. Дано натуральное  число n (n>=9999). Является ли это число палиндромом (перевертышем)\n"
        "с учетом четырех цифр, как , например, числа 2222, 6116, 0440 и т.д.\n"
    };
    for (string task : tasksLab2) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab_2Task_1(tasksLab2);
    }
    else if (tasknumber == "2") {
        SolutionLab_2Task_2(tasksLab2);
    }
    else if (tasknumber == "3") {
        SolutionLab_2Task_3(tasksLab2);
    }
    else if (tasknumber == "4") {
        SolutionLab_2Task_4(tasksLab2);
    }
    else if (tasknumber == "5") {
        SolutionLab_2Task_5(tasksLab2);
    }
    else if (tasknumber == "6") {
        SolutionLab_2Task_6(tasksLab2);
    }
    else if (tasknumber == "7") {
        SolutionLab_2Task_7(tasksLab2);
    }
    else if (tasknumber == "8") {
        SolutionLab_2Task_8(tasksLab2);
    }
    else if (tasknumber == "9") {
        SolutionLab_2Task_9(tasksLab2);
    }
    else if (tasknumber == "10") {
        SolutionLab_2Task_10(tasksLab2);
    }
}
void SolutionLab_3() {
    system("cls");
    array<string, 15> tasksLab3 =
    {
      "Выберите номер Задания: \n",
      "1. Вычислить значение функции y=2x^2 + 15 при х изменяющемся от 1 до 20 с шагом 0.5\n",
      "2. Вычислить значение функции   при х изменяющемся от 0 до 16 с шагом 2.\n",
      "3. Вычислить значение функции приведенной в программе при помощи цикла\n"
       "(a=0.3,  n=10, i изменяется от 1 до 10 с шагом 1.)\n",
      "4. Вычислить значение функции приведенной в программе при помощи цикла\n"
        " (a=2.6,  b=5,  x изменяется от 0 до 10 с шагом 0.5)\n",
      "5. Найти сумму и произведение последовательности 10 целых чисел от 1 до 10.\n"
        "Использовать  оператор do…while \n",
      "6. Вычислить 1/1^2 + 1/2^2 + 1/3^2 + ... + 1/100^2 \n"
        "Использовать  оператор while \n",
      "7. Дано действительное число а. Найти среди чисел 1, 1 + 1/2, 1 + 1/2 + 1/3 ... первое большее a \n"
        "Использовать  оператор do…while \n",
      "8. Даны натуральное n и действительное х. Вычислить sin x + sin^2 x + sin^n x\n"
        "Использовать  оператор for \n",
      "9. Дано натуральное n.  Вычислить выражения представленный в условии программы\n",
      "10. Дано натуральное n. Найти решение выражения представленного в условии программы\n"
        " х1=у1=1; xi=0.3xi-1; yi=xi-1+yi-1, i=2,3,…   Использовать  оператор do…while\n",
      "11. Песня «Двенадцать дней рождества») Напишите программу, использующую повторение\n"
        " и структуры switch для печати текста песни «Двенадцать дней рождества». Одна структура\n"
        " switch должна использоваться для печати дня («Первый», «Второй» и т.д.). Другая структура\n"
        " switch должна использоваться для печати остальной части каждого куплета (возможно проще иметь\n"
        " дело с более знакомой  песней того же типа «Двенадцать негритят»).\n",
      "12. . Рассчитайте значение Пи на основании бесконечного ряда\n"
        "π = 4 - 4 / 3 + 4 / 5 - 4 / 7 + 4 / 9 - 4 / 11 + ...\n"
        "Напечатайте таблицу, которая покажет, как значение π  аппроксимируется одним членом этого ряда,\n"
        "двумя членами, тремя и т.д.Сколько членов ряда потребовалось для получения значения\n"
        "3.14 ? 3.141 ? 3.1415 ? 3.14159 ?\n",
      "13. Напишите программу, которая читает пять чисел (каждое между 1 и 30). \n"
        "Для каждого просчитанного числа ваша программа должна напечатать строку,\n"
        " содержащую соответствующее число смежных звездочек. Например, если ваша программа прочла число 7,\n"
        " она должна напечатать *******.\n",
      "14 Напишите программу, которая напечатает следующий ромб. Вы можете использовать операторы вывода,\n"
        " которые печатают или одну звездочку (*), или один пробел. Максимально используйте повторение \n"
        "(с вложенными структурами for) и минимизируйте число операторов вывода. \n",
    };
    for (string task : tasksLab3) {
        cout << task;
    }
    cin >> tasknumber;

    if (tasknumber == "1") {
        SolutionLab_3Task_1(tasksLab3);
    }
    else if (tasknumber == "2") {
        SolutionLab_3Task_2(tasksLab3);
    }
    else if (tasknumber == "3") {
        SolutionLab_3Task_3(tasksLab3);
    }
    else if (tasknumber == "4") {
        SolutionLab_3Task_4(tasksLab3);
    }
    else if (tasknumber == "5") {
        SolutionLab_3Task_5(tasksLab3);
    }
    else if (tasknumber == "6") {
        SolutionLab_3Task_6(tasksLab3);
    }
    else if (tasknumber == "7") {
        SolutionLab_3Task_7(tasksLab3);
    }
    else if (tasknumber == "8") {
        SolutionLab_3Task_8(tasksLab3);
    }
    else if (tasknumber == "9") {
        SolutionLab_3Task_9(tasksLab3);
    }
    else if (tasknumber == "10") {
        SolutionLab_3Task_10(tasksLab3);
    }
    else if (tasknumber == "11") {
        SolutionLab_3Task_11(tasksLab3);
    }
    else if (tasknumber == "12") {
        SolutionLab_3Task_12(tasksLab3);
    }
    else if (tasknumber == "13") {
        SolutionLab_3Task_13(tasksLab3);
    }
    else if (tasknumber == "14") {
        SolutionLab_3Task_14(tasksLab3);
    }

}
void SolutionLab_4() {
    system("cls");

    array<string, 8> tasksLab4 = {
        "Введите номер задания: \n",

        "1.Даны температуры воздуха за неделю. Определить среднюю температуру воздуха за неделю\n"
        "и сколько раз температура опускалась ниже 0 градусов.\n",

        "2.Даны натуральные числа  N, a0, a1,…., a(N-1).\n"
        "Определить количество членов последовательности имеющих четные порядковые номера и являющихся нечетными числами.\n",

        "3.Определить является ли данная последовательность убывающей (во избежание лишних проверок использовать оператор break).\n",

        "9.Информация о количестве выпавших в течение недели осадках задана в виде массива.\n"
        "Определить общее количество осадков за неделю.\n",

        "10.Информация о температуре воздуха за месяц задана в виде массива.\n"
        "Определить, сколько раз температура опускалась ниже 0 градусов.\n",

        "11.Дан массив чисел. Определить, сколько в нем пар одинаковых соседних элементов.\n"

        "12.Дан массив чисел. Найти наибольший элемент, поставить его первым.\n"
    };

    for (string task : tasksLab4) {
        cout << task;
    }
    cin >> tasknumber;

    if (tasknumber == "1") {
        SolutionLab_4Task_1(tasksLab4);
    }
    else if (tasknumber == "2") {
        SolutionLab_4Task_2(tasksLab4);
    }
    else if (tasknumber == "3") {
        SolutionLab_4Task_3(tasksLab4);
    }
    else if (tasknumber == "9") {
        SolutionLab_4Task_9(tasksLab4);

    }
    else if (tasknumber == "10") {
        SolutionLab_4Task_10(tasksLab4);

    }
    else if (tasknumber == "11") {
        SolutionLab_4Task_11(tasksLab4);

    }
    else if (tasknumber == "12") {
        SolutionLab_4Task_12(tasksLab4);
    }


}
void SolutionLab_5() {
    system("cls");

    array<string, 18> tasksLab5 = {
        "Выберите номер задания \n",
        "1.Задан двумерный массив, содержащий 3 строки и 4 столбца. Найти наибольший элемент массива,\n"
            " номер строки и столбца, в которых он расположен.\n",
        "2.Определить количество положительных элементов каждого столбца двумерного массива, содержащего 5 строк и 5 столбцов.\n",
        "3.Составить программу для вычисления средних арифметических значений положительных элементов\n"
            " каждого столбца двумерного массива, содержащего 6 столбцов и три строки. При условии, \n"
            "что в каждом столбце есть хотя бы один положительный элемент.\n",
        "4.Дана действительная квадратная матрица. Заменить нулями все элементы, расположенные на главной диагонали и  выше нее.\n",
        "5.	Даны 8 действительных чисел х1, х2, …, х8. Получить квадратную матрицу 8х8   \n"
            "х1   х2   … х8\n"
            "х12  х22 … х82\n"
            "…..\n"
            "х18  х28 … х88\n",
        "6.Таблица футбольного чемпионата задана квадратной матрицей порядка n, в которой  все элементы,\n"
            "принадлежащие главной диагонали, равны нулю, а каждый элемент, не принадлежащий главной диагонали,\n"
            "равен 2, 1 или 0 (числу очков, набранных в игре: 2 – выигрыш, 1- ничья, 0 – проигрыш).\n"
        "а) Найти число команд, имеющих больше побед, чем поражений.\n"
        "б) Определить номера команд, прошедших чемпионат без поражений.\n"
        "в) Выяснить, имеется ли хотя бы одна команда, выигравшая больше половины игр.",
        "7.Дан двумерный массив, содержащий 3 строки и 4 столбца. Упорядочить массив по убыванию элементов 3-ей строки.\n",
        "8.Дан двумерный массив, содержащий 5 строк и 2 столбца. Упорядочить массив по возрастанию элементов 2-го столбца.\n",
        "9.Даны целые числа  . Получить целочисленную матрицу  b каждый элемент, которой определяется  по следующей формуле \n",
        "10.Дана квадратная матрица А, содержащая 5 строк и 5 столбцов. Получить две квадратные матрицы В и С,\n"
        " элементы которых определяются по следующим формулам \n",
        "11.Найти наибольший элемент главной диагонали матрицы С размером 4х4 и вывести на печать всю строку, в которой он находится.\n",
        "12.Перемножить матрицы А размером nхm и В размером mхl. Элементы результирующей матрицы получить с помощью формулы представленной в задании\n",
        "13.Вычислить суммы элементов каждой строки матрицы А размером 6х6, определить наибольшее значение этих сумм.\n",
        "14.Дана действительная матрица размера 6х9. Найти среднее арифметическое наибольшего и наименьшего значений ее элементов\n",
        "15.В квадратной матрице размера mxn найти значение наибольшего по модулю элемента матрицы, а также определить индексы этого элемента. Предполагается, что такой элемент единственный.\n",
        "16.В данной действительной  квадратной матрице  порядка N найти сумму элементов строки, в которой расположен элемент с наименьшим значением. Предполагается, что такой элемент единственный.\n",
        "17.Получить целочисленную квадратную матрицу порядка n, элементами которой являются числа 1, 2, 3, …, n2 , расположенные по спирали\n",
    };
    for (string task : tasksLab5) {
        cout << task;
    }
    cin >> tasknumber;

    if (tasknumber == "1") {
        SolutionLab_5Task_1(tasksLab5);
    }
    else if (tasknumber == "2") {
        SolutionLab_5Task_2(tasksLab5);
    }
    else if (tasknumber == "3") {
        SolutionLab_5Task_3(tasksLab5);
    }
    else if (tasknumber == "4") {
        SolutionLab_5Task_4(tasksLab5);
    }
    else if (tasknumber == "5") {
        SolutionLab_5Task_5(tasksLab5);
    }
    else if (tasknumber == "6") {
        SolutionLab_5Task_6(tasksLab5);
    }
    else if (tasknumber == "7") {
        SolutionLab_5Task_7(tasksLab5);
    }
    else if (tasknumber == "8") {
        SolutionLab_5Task_8(tasksLab5);
    }
    else if (tasknumber == "9") {
        SolutionLab_5Task_9(tasksLab5);
    }
    else if (tasknumber == "10") {
        SolutionLab_5Task_10(tasksLab5);
    }
    else if (tasknumber == "11") {
        SolutionLab_5Task_11(tasksLab5);
    }
    else if (tasknumber == "12") {
        SolutionLab_5Task_12(tasksLab5);
    }
    else if (tasknumber == "13") {
        SolutionLab_5Task_13(tasksLab5);
    }
    else if (tasknumber == "14") {
        SolutionLab_5Task_14(tasksLab5);
    }
    else if (tasknumber == "15") {
        SolutionLab_5Task_15(tasksLab5);
    }
    else if (tasknumber == "16") {
        SolutionLab_5Task_16(tasksLab5);
    }
    else if (tasknumber == "17") {
        SolutionLab_5Task_17(tasksLab5);
    }
}

void SolutionLab2_1() {
    system("cls");
    array<string, 10> tasksLab2_1{
      "Выберите номер Задания: \n",
      "1.Напишите функцию integerPower(base,exponent), которая возвращает значение baseexponent .\n"
        " Например, integerPower(3,4)=3*3*3*3. Предположим, что exponent является положительным ненулевым целым,\n"
        " а base целым. Для управления вычислением функция integerPower(base,exponent) должна применять цикл for.\n"
        " Не используйте никаких функций математической библиотеки.\n",
      "2.Напишите функцию multiple для двух целых, которая определяет,\n"
        " кратно ли второе число первому. Функция должна получать два целых\n"
        " аргумента и возвращать 1, если второе число кратно первому и 0 в противном случае.\n"
        " Используйте эту функцию в программе, которая вводит серию пар целых чисел.\n",
      "3.Напишите функцию, которая выводит у левой границы экрана сплошной квадрат из символов\n"
        " заданного символа (например, * ), сторона которого определяется целым параметром side.\n"
        " Например, если side  равно 4, функция выведет следующее изображение\n"
        "****\n"
        "****\n"
        "****\n"
        "****\n",
      "4.Даны действительные числа s и t. Используйте функции и вычислите  уровнения приведенные в программе\n",
      "5. Даны действительные числа a,b,c.  Использовать функции и получить решение\n",
      "6.Напишите программу,  которая  вводит  последовательность  целых  чисел и передает\n"
        " их по одному функции even, использующей  операцию вычисления остатка для определения\n"
        " четности числа.  Функция должна принимать целый аргумент и возвращать 1, если аргумент\n"
        " — четное число, и 0 —  в противном случае.\n ",
      "7.Говорят, что целое число является совершенным, если его  сомножители,\n"
        " включая 1 (но не само число) в сумме дают это число.  Например,\n"
        " 6 — это совершенное число, так как 6=1 + 2 + 3.  Напишите функцию perfect,\n"
        " которая определяет, является ли параметр number совершенным числом. Используйте эту функцию в программе,\n"
        " которая определяет и печатает все совершенные числа в диапазоне от 1 до 1000.\n"
        " Напечатайте сомножители каждого совер¬шенного числа, чтобы убедиться, что число действительно совер¬шенное. \n",
      "8.Говорят, что целое число является простым числом,\n"
        " если оно, де¬лится только на 1 и на само себя. Например, 2, 3, 5 — простые  числа, а 4, 6, 8 — нет.\n"
        "a) Напишите функцию, определяющую, является ли число простым  или нет. \n"
        "b)Используйте эту функцию в программе, которая определяет  и печатает все простые числа, лежащие в диапазоне от 1 до 10000. \n "
        "c) Вначале вы могли бы подумать, что верхней границей, до которой  вы должны проводить проверку,\n"
        " чтобы увидеть, является ли число  n простым, является n/2, но в действительности вам нужно прове¬рить \n"
        "количество чисел, равное корню квадратному из п. Почему?  Перепишите программу и запустите ее для обоих способов.\n"
        " Оценитеулучшение производительности.\n"
      "9.Напишите программу, моделирующую бросание монеты. Для каж¬дого броска монеты программа должна печатать Орел или Решка.\n"
        " Промоделируйте с помощью этой программы бросание  100 раз и  подсчитайте, сколько раз появилась каждая сторона монеты.\n"
        " Напечатайте результаты. Программа должна вызывать отдельную функ¬цию flip,\n"
        " которая не принимает никаких аргументов и возвращает 0 для Орла и 1 для Решки.\n "
        "Замечание: если программа действи¬тельно моделирует бросание монеты, каждая сторона монеты\n"
        " должна появляться примерно в половине случаев.\n"
    };
    for (string task : tasksLab2_1) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab2_1Task1(tasksLab2_1);
    }
    else if (tasknumber == "2") {
        SolutionLab2_1Task2(tasksLab2_1);
    }
    else if (tasknumber == "3") {
        SolutionLab2_1Task3(tasksLab2_1);
    }
    else if (tasknumber == "4") {
        SolutionLab2_1Task4(tasksLab2_1);

    }
    else if (tasknumber == "5") {
        SolutionLab2_1Task5(tasksLab2_1);

    }
    else if (tasknumber == "6") {
        SolutionLab2_1Task6(tasksLab2_1);

    }
    else if (tasknumber == "7") {
        SolutionLab2_1Task7(tasksLab2_1);

    }
    else if (tasknumber == "8") {
        SolutionLab2_1Task8(tasksLab2_1);

    }
    else if (tasknumber == "9") {
        SolutionLab2_1Task9(tasksLab2_1);

    }

}
void SolutionLab2_2() {
    system("cls");
    array<string, 8> tasksLab2_2{
         "Выберите номер Задания: \n",
         "1.Даны два катета прямоугольного треугольника. Написать функ-цию, определяющую гипотенузу и площадь треугольника. \n"
             "Функция не долж-на возвращать значение. Результат передается в главную программу main че-рез список параметров. \n"
             "Функция должна иметь 4 параметра: 1-й катет, 2-й ка-тет, гипотенузу, площадь. \n"
             "Реализовать передачу двух последних параметров по ссылке и по указателю.\n",
         "2.Даны радиус основания и высота цилиндра. Написать функцию, вычисляющую площадь основания и объем цилиндра. \n"
             "Результат в главную программу передается через список параметров по указателю или по ссылке. \n",
         "3.Даны курсы доллара и рубля к сому. Написать функцию, опреде-ляющую количество денег в долларах и рублях. \n"
             "Функция имеет 5 парамет-ров: курс доллара, курс рубля, количество денег в сомах, в долларах и руб-лях.\n",
         "4.Напишите функцию, которая воспринимает время как три целых  аргумента (часы, минуты я секунды) и возвращает количество се¬кунд,\n"
            " прошедших со времени, когда часы в последний раз показали  12. Используй-те эту функцию для вычисления интервала времени в секундах\n"
            " между двумя моментами, находящимися внутри двенад¬цатичасового цикла.\n",
         "5.Разработайте следующие целые функции:\n"
            "a)  функцию Celsius, которая возвращает температуру по Цельсию,  эк - вивалентную температуре по Фаренгейту;\n"
            "b)  функцию Fahrenheit, которая возвращает температуру по Фарен - гейту, эквивалентную температуре по Цельсию;\n"
            "c)  используйте эти функции для написания программы, которая  печатает таблицу, показывающую эквивалент по Фаренгейту\n"
            " всех температур по Цельсию от 0 до 100 градусов и эквивалент по Цельсию всех температур по Фаренгейту от 32 до 212 градусов.\n"
            "Сделайте листинг в аккуратном табули - рованном формате, с минималь¬ным количеством строк при сохранении хо - рошей читаемости.\n",
         "6.Напишите функцию quality_Points, которая вводит среднюю оценку  студентов и если она в диапазоне 90-100, то возвращает 4,  если   в диапазоне 80-89,\n"
        " возвращает 3, если  в диапазоне 70-79, возвращает 2, если в диапазоне 60-69, возвращает 1, и если средняя оценка меньше 60, то возвращает 0.\n",
         "7. Напишите программу на C++ с двумя указанными  ниже аль-тернативными функциями, каждая из которых просто ут¬раивает пере-менную count,\n"
        " определенную в main.  Затем сравните  и противопо-ставьте эти два подхода. Вот эти две функции:\n"
            "a)  функция tripleCallByValue,  в которую передается копия count по значению, в функции эта копия утраивается и возвращается соответствующее значение;\n"
            "b) функция tripleByReference, в которую передается count по ссылке  посредством ссылочного параметра, а функция утраивает исходную копию count через ее псевдоним(т.е.ссылочный параметр).\n",
    };
    for (string task : tasksLab2_2) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab2_2Task1(tasksLab2_2);
    }
    else if (tasknumber == "2") {
        SolutionLab2_2Task2(tasksLab2_2);
    }
    else if (tasknumber == "3") {
        SolutionLab2_2Task3(tasksLab2_2);
    }
    else if (tasknumber == "4") {
        SolutionLab2_2Task4(tasksLab2_2);
    }
    else if (tasknumber == "5") {
        SolutionLab2_2Task5(tasksLab2_2);
    }
    else if (tasknumber == "6") {
        SolutionLab2_2Task6(tasksLab2_2);

    }
    else if (tasknumber == "7") {
        SolutionLab2_2Task7(tasksLab2_2);
    }
}
void SolutionLab2_3() {
    system("cls");
    array<string, 8> tasksLab2_3{
        "Выберите номер Задания: \n",
        "1.Дан одномерный массив. Написать функцию, определяющую ми-нимальный, максимальный элементы массива и  среднее арифметическое ми-нимального и максимального элементов.\n"
        " Кроме того, программа должна иметь функцию ввода одномерного массива и функцию вывода.\n",
        "2.Написать функцию перемножения матриц А размером nхm и В размером mхl. Элементы результирующей \n"
        "матрицы получить с помощью следующей формулы. Массивы должны быть динамическими. \n",
        "3.Написать функции вычисления суммы элементов каждой строки матрицы А размером 6х6,\n"
        " определения наибольшего значения этих сумм.(ФОРМУЛА)\n",
        "4.Дана действительная матрица размера 6х9. Найти среднее ариф-метическое наибольшего и наименьшего\n"
        " значений ее элементов. Программа должна быть составлена с использованием функций. \n",
        "5.В квадратной матрице размера mxn найти значение наибольшего по модулю элемента матрицы, а также \n"
        "определить индексы этого элемента. Предполагается, что такой элемент - единственный.\n"
        " Программа должна быть составлена с использованием функций. \n",
        "6.В данной действительной  квадратной матрице  порядка N найти сумму элементов строки, в которой расположен элемент с наименьшим зна-чением.\n"
        " Предполагается, что такой элемент единственный. Программа должна быть составлена с использованием функций. \n",
        "7.  В одномерном массиве, состоящем из n вещественных чисел, вы-числить:\n"
        "а) количество элементов массива, меньших С;\n"
        "б) сумму положительных элементов, расположенных после первого положительного элемента.\n"
        "Преобразовать массив таким образом, чтобы сначала располагались все элементы, целая часть которых лежит в интервале[a, b], а потом – все остальные.\n"
        "Программа должна быть составлена с использованием функций.\n",
    };
    for (string task : tasksLab2_3) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab2_3Task1(tasksLab2_3);
    }
    else if (tasknumber == "2") {
        SolutionLab2_3Task2(tasksLab2_3);
    }
    else if (tasknumber == "3") {
        SolutionLab2_3Task3(tasksLab2_3);
    }
    else if (tasknumber == "4") {
        SolutionLab2_3Task4(tasksLab2_3);
    }
    else if (tasknumber == "5") {
        SolutionLab2_3Task5(tasksLab2_3);
    }
    else if (tasknumber == "6") {
        SolutionLab2_3Task6(tasksLab2_3);

    }
    else if (tasknumber == "7") {
        SolutionLab2_3Task7(tasksLab2_3);
    }

}
void SolutionLab2_4() {
    system("cls");
    array<string, 6> tasksLab2_4{
        "Выберите номер Задания: \n",
        "1.Напишите программу,  которая использует шаблон функции max-imum для поиска максимального из трех целых чисел,\n"
        " трех чисел с плавающей запятой и трех символов.\n",
        "2.Напишите программу,  которая использует шаблон функции по  имени min для определения наименьшего из трех аргументов.\n"
        " Проверьте про-грамму, используя пары целых чисел, символов и чисел с плавающей запя-той.\n",
        "3.Определите, содержат ли следующие фрагменты программы ошибки.  Для каждой ошибки укажите, как она может быть исправлена. \n"
        "За¬мечание: в некоторых фрагментах ошибки могут отсутствовать.\n"
        "4.Ряд Фибонначи состоит из чисел, каждое из которых является сум-мой двух предыдущих\n"
        "(1, 1, 2, 3, 5, 8, 13, …). Найти n-ный элемент ряда, ис-пользуя рекурсию."
        "5.  Наибольший общий делитель (НОД) двух целых чисел х и у — это  наибольшее целое, на которое без остатка делится каждое из двух  чисел.\n"
        " Напишите рекурсивную функцию nod, которая возвращает  наибольший общий делитель чисел х и у. НОД для х и у опреде¬ляется рекурсивно следующим образом:\n"
        " если у равно 0, то nod(x, у)  возвращает х; в противном случае nod(x, у) равняется nod(y, х % у), где %  — это операция вычисления остатка.\n"
    };
    for (string task : tasksLab2_4) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab2_4Task1(tasksLab2_4);
    }
    else if (tasknumber == "2") {
        SolutionLab2_4Task2(tasksLab2_4);
    }
    else if (tasknumber == "3") {
        SolutionLab2_4Task3(tasksLab2_4);
    }
    else if (tasknumber == "4") {
        SolutionLab2_4Task4(tasksLab2_4);
    }
    else if (tasknumber == "5") {
        SolutionLab2_4Task5(tasksLab2_4);
    }

}
void SolutionLab2_5() {
    system("cls");
    array<string, 4> tasksLab2_5{
                "Выберите номер Задания: \n",
                "1.Описать структуру с именем Student,  содержащую следующие по-ля: name, group, ses(успеваемость - массив из 5 элементов).\n"
                " Ввести с клавиа-туры данные в массив stud1, состоящий из 10 структур типа student. Записи упорядочить по алфавиту.\n"
                " Вывести на экран фамилии и номера групп для всех студентов, имеющих оценки 4 и 5, \n"
                "если таких нет, то вывести соответ-ствующее сообщение.  \n",
                "2.Описать структуру с именем Train,  содержащую следующие поля: nazn(название пункта назначения), num(номер поезда),\n"
                " time(время отправле-ния). Ввести с клавиатуры данные в массив rasp, состоящий из 6 структур ти-па Train. Записи упорядочить по номерам поездов.\n"
                " Вывести на экран инфор-мацию о поезде, номер которого введен с клавиатуры, если такого поезда нет, то вывести соответствующее сообщение.\n",
                "3.Описать структуру с именем worker,  содержащую следующие по-ля: name, pos(должность), year(год поступления на работу).\n"
                " Ввести с клавиа-туры данные в массив tabl, состоящий из 10 структур типа worker. Записи упорядочить по дате поступления на работу.\n"
                " Вывести на экран фамилии ра-ботников, чей стаж работы превышает значение, введенное с клавиатуры, если таких нет, то вывести соответствующее сообщение.\n",
    };
    for (string task : tasksLab2_5) {
        cout << task;
    }
    cin >> tasknumber;
    if (tasknumber == "1") {
        SolutionLab2_5Task1(tasksLab2_5);
    }
    else if (tasknumber == "2") {
        SolutionLab2_5Task2(tasksLab2_5);
    }
    else if (tasknumber == "3") {
        SolutionLab2_5Task3(tasksLab2_5);
    }

}
void SolutionLab2_6() {
    system("cls");
    array<string, 6> tasksLab2_6{
           "Выберите номер Задания: \n",
           "1.Записать в двумерный массив размера 8Х8 случайные вещественные числа, значения которых от 0 до 100.\n"
            " Вывести полученный массив на экран и запи-сать в файл в виде выровненной матрицы с двумя знаками после запятой.\n",
           "2.В файле есть сведения об автомобилях: марка автомобиля, номер и фамилия владельца.\n"
             "а) Вывести сведения о владельцах и номерах автомобилей каждой марки автомобиля.\n"
             "б) Подсчитать количество автомобилей каждой марки.\n",
           "3.Текст записан одной длинной строкой. Признаком красной строки служит символ $.\n"
             " Переформатировать текст в 60-символьные строки, форми-руя абзацы. Исходный текст должен быть взят из файла,\n"
             " название которого будет введено с клавиатуры, а результирующий текст должен быть выведен в файл «Result_file.txt».\n",
           "4. Текст, не содержащий  собственных имён и сокращений, набран полностью прописными буквами. \n"
             " Заменить все прописные буквы, кроме букв, стоящих после точки, строчными буквами. Исходный текст должен быть взят из файла,\n"
             " название которого будет введено с клавиатуры, а результирующий текст должен быть выведен в файл «Result_file.txt».\n",
           "5. За стоянку до трех часов парковочный гараж запрашивает плату ми-нимум $2.00. В случае стоянки более трех часов гараж дополнительно  за-прашивает\n"
             "$0.50 за каждый полный или неполный час сверх трех  ча-сов. Максимальная плата за сутки составляет $10.00. Допустим,  что никто не паркуется более,\n"
             "чем на сутки за раз. Напишите программу расчета и печати оплаты за парковку для каждого из трех\n"
             "клиентов, которые парковали свои автомобили вчера в этом гараже.Вы должны вводить длительность парковки для каждого клиента.Ваша  про - грамма должна\n"
             "печатать результаты в аккуратном табулированном  формате и должна рассчитывать и печатать общий вчерашний доход.\n"
             "Программа должна использовать функцию calculateCharges, чтобы оп¬ределять плату для каждого клиента.\n"
             "Результаты работы должны пред¬ставляться в сле - дующем формате : \n"
             "Автомобиль        Часы  Плата\n"
             "                 1    1.5  2.00\n"
             "                 2    4.0  2.50\n"
             "                  3    24.0  10.00\n"
             "             Итого     29.5  14.50\n",
    };

    for (string task : tasksLab2_6) {
        cout << task;
    }
    cin >> tasknumber;

    /*int N_task;
    cin >> N_task;

    switch (N_task)
    {
    case 1:

    }*/

    if (tasknumber == "1") {
        SolutionLab2_6Task1(tasksLab2_6);
    }
    else if (tasknumber == "2") {
        SolutionLab2_6Task2(tasksLab2_6);
    }
    else if (tasknumber == "3") {
        SolutionLab2_6Task3(tasksLab2_6);
    }
    else if (tasknumber == "4") {
        SolutionLab2_6Task4(tasksLab2_6);
    }
    else if (tasknumber == "5") {
        SolutionLab2_6Task5(tasksLab2_6);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    array<string, 12> labs =
    {
      "Выберите номер лабораторной работы:\n",
      "1. Часть 1, Лабораторная работа N1 Начало работы в среде «Microsoft Visual Studio 2010» \n",
      "2. Часть 1, Лабораторная работа N2 Ветвления, разветвляющиеся алгоритмы\n",
      "3. Часть 1, Лабораторная работа N3 Циклы, операторы циклов\n",
      "4. Часть 1, Лабораторная работа N4 Одномерные массивы \n",
      "5. Часть 1, Лабораторная работа N5 Двумерные массивы\n",
      "6. Часть 2, Лабораторная работа N1 Функции\n",
      "7. Часть 2, Лабораторная работа N2 Указатели\n",
      "8. Часть 2, Лабораторная работа N3 Массивы как параметры функций\n",
      "9. Часть 2, Лабораторная работа N4 перегрузка функций\n",
      "10. Часть 2, Лабораторная работа N5 структуры фунцкций\n",
      "11. Часть 2, Лабораторная работа N6 Файлы\n",
    };
    for (string lab : labs) {
        cout << lab;
    }
    int N_lab;
    cin >> N_lab;
V_lab: switch (N_lab)
{

case 1:
    SolutionLab_1();
    main();
    break;

case 2:
    SolutionLab_2();
    main();
    break;

case 3:
    SolutionLab_3();
    main();
    break;

case 4:
    SolutionLab_4();
    main();
    break;


case 5:
    SolutionLab_5();
    main();
    break;

case 6:
    SolutionLab2_1();
    main();
    break;

case 7:
    SolutionLab2_2();
    main();
    break;

case 8:
    SolutionLab2_3();
    main();
    break;

case 9:
    SolutionLab2_4();
    main();
    break;

case 10:
    SolutionLab2_5();
    main();
    break;

case 11:
    SolutionLab2_6();
    main();
    break;

default:
    cout << "\nError, invalid input. Please, repeat again.\n";
    cin >> N_lab;
    goto V_lab;
    break;
}
}
