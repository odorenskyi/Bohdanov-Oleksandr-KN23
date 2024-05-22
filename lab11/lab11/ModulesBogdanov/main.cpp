#include "ModulesBogdanov.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

void addRecord(vector<Record>& registry) {
     Record newRecord;
    cout << "Введіть індекс: ";
    cin >> newRecord.index;
    cout << "Введіть область: ";
    cin >> newRecord.region;
    cout << "Введіть населений пункт: ";
    cin >> newRecord.locality;
    cout << "Введіть вулицю: ";
    cin.ignore();
    getline(cin, newRecord.street);

    registry.push_back(newRecord);
    cout << "Запис додано." << endl;
}

void deleteRecord(vector<Record>& registry) {
    cout << "Введіть перші п'ять цифр поштового коду для видалення: ";
    string deleteIndex;
    cin >> deleteIndex;

    auto it = remove_if(registry.begin(), registry.end(), [&](const Record& record) {
        return record.index.substr(0, 5) == deleteIndex;
    });

    if (it != registry.end()) {
        registry.erase(it, registry.end());
        cout << "Запис видалено." << endl;
    } else {
        cout << "Запис не знайдено." << endl;
    }
}
