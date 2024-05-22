#ifndef MODULESBOGDANOV_H
#define MODULESBOGDANOV_H

#include <string>
#include <unordered_map>

struct PostOfficeRecord {
    std::string region;
    std::string district;
    std::string settlement;
    std::string vpu; // ВПЗ, що обслуговує
};

class PostOfficeDirectory {
public:
    PostOfficeDirectory(const std::string& filename);

    // Метод для додавання нового запису
    void addRecord(int index, const PostOfficeRecord& record);

    // Метод для вилучення запису
    bool removeRecord(int index);

    // Метод для отримання запису за індексом
    PostOfficeRecord getRecord(int index) const;

private:
    std::unordered_map<int, PostOfficeRecord> records;
    std::string filename;

    // Допоміжний метод для завантаження записів з файлу
    void loadFromFile();

    // Допоміжний метод для збереження записів у файл
    void saveToFile() const;
};

#endif // MODULESBOGDANOV_H
