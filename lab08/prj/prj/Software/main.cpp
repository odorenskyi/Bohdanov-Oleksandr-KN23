#include <iostream>
#include "ModulesBogdanov.h"

void task_8_1();
void task_8_2(int a, int b);

using namespace std;

int main()
{
    int x, y, z, a, b;
    system("chcp 65001 & cls");
    cout << "������ �������� x:";
    cin >> x;
    cout << "������ �������� y:";
    cin >> y;
    cout << "������ �������� z:";
    cin >> z;
    cout << "������ �������� a:";
    cin >> a;
    cout << "������ �������� b:";
    cin >> b;
    cout << endl;
    task_8_1();
    task_8_2(a,b);
    s_calculation(x, y, z);
    cout << "x � ��������� ����: " << x << endl;
    cout << "y � ��������� ����: " << y << endl;
    cout << "z � ��������� ����: " << z << endl;
    cout << "x � �������������� ����: " << hex << x << endl;
    cout << "y � �������������� ����: " << hex << y << endl;
    cout << "z � �������������� ����: " << hex << z << endl;
    return 0;
}
void task_8_1(){
    cout << " �������� ��������� �" << endl;
}
void task_8_2(int a, int b){
    bool result;
    cout << boolalpha;
    result = a + 1 == b + 2;
    cout << result << endl;
}
