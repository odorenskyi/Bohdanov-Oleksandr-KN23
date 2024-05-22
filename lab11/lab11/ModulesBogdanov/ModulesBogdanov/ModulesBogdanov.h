#ifndef MODULESBOGDANOV_H
#define MODULESBOGDANOV_H

#include <string>
#include <unordered_map>

struct PostOfficeRecord {
    std::string region;
    std::string district;
    std::string settlement;
    std::string vpu; // ���, �� ���������
};

class PostOfficeDirectory {
public:
    PostOfficeDirectory(const std::string& filename);

    // ����� ��� ��������� ������ ������
    void addRecord(int index, const PostOfficeRecord& record);

    // ����� ��� ��������� ������
    bool removeRecord(int index);

    // ����� ��� ��������� ������ �� ��������
    PostOfficeRecord getRecord(int index) const;

private:
    std::unordered_map<int, PostOfficeRecord> records;
    std::string filename;

    // ��������� ����� ��� ������������ ������ � �����
    void loadFromFile();

    // ��������� ����� ��� ���������� ������ � ����
    void saveToFile() const;
};

#endif // MODULESBOGDANOV_H
