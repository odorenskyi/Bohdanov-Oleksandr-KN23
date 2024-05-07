#include <iostream>
#include "ModulesBogdanov.h"

void task_8_1();
void task_8_2(int a, int b);

using namespace std;

int main()
{
    int x, y, z, a, b;
    system("chcp 65001 & cls");
    cout << "¬вед≥ть значенн€ x:";
    cin >> x;
    cout << "¬вед≥ть значенн€ y:";
    cin >> y;
    cout << "¬вед≥ть значенн€ z:";
    cin >> z;
    cout << "¬вед≥ть значенн€ a:";
    cin >> a;
    cout << "¬вед≥ть значенн€ b:";
    cin >> b;
    cout << endl;
    task_8_1();
    task_8_2(a,b);
    s_calculation(x, y, z);
    cout << "x у дес€тков≥й форм≥: " << x << endl;
    cout << "y у дес€тков≥й форм≥: " << y << endl;
    cout << "z у дес€тков≥й форм≥: " << z << endl;
    cout << "x у ш≥стнадц€тков≥й форм≥: " << hex << x << endl;
    cout << "y у ш≥стнадц€тков≥й форм≥: " << hex << y << endl;
    cout << "z у ш≥стнадц€тков≥й форм≥: " << hex << z << endl;
    return 0;
}
void task_8_1(){
    cout << " Ѕогданов ќлександр ©" << endl;
}
void task_8_2(int a, int b){
    bool result;
    cout << boolalpha;
    result = a + 1 == b + 2;
    cout << result << endl;
}
