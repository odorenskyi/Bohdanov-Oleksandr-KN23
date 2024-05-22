#include "ModulesBogdanov.h"
#include <fstream>
#include <iostream>

PostOfficeDirectory::PostOfficeDirectory(const std::string& filename) : filename(filename) {
    loadFromFile();
}

void PostOfficeDirectory::addRecord(int index, const PostOfficeRecord& record) {
    records[index] = record;
    saveToFile();
}

bool PostOfficeDirectory::removeRecord(int index) {
    if (records.erase(index) > 0) {
        saveToFile();
        return true;
    }
    return false;
}

PostOfficeRecord PostOfficeDirectory::getRecord(int index) const {
    auto it = records.find(index);
    if (it != records.end()) {
        return it->second;
    } else {
        return {"", "", "", ""}; // Повертаємо порожній запис, якщо індекс не знайдено
    }
}

void PostOfficeDirectory::loadFromFile() {
    std::ifstream file(filename);
    if (file.is_open()) {
        int index;
        PostOfficeRecord record;
        while (file >> index >> record.region >> record.district >> record.settlement >> record.vpu) {
            records[index] = record;
        }
        file.close();
    }
}

void PostOfficeDirectory::saveToFile() const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& entry : records) {
            file << entry.first << " " << entry.second.region << " " << entry.second.district << " "
                 << entry.second.settlement << " " << entry.second.vpu << std::endl;
        }
        file.close();
    }
}
