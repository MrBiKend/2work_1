#include <iostream>

// Класс Дорога
class Road {
private:
    int length; // Длина дороги в метрах
    int lanes; // Количество полос на дороге

public:
    // Конструктор с параметрами по умолчанию
    Road(int roadLength = 0, int roadLanes = 0) : length(roadLength), lanes(roadLanes) {}

    // Метод для установки значений полей
    void setValues(int roadLength, int roadLanes) {
        length = roadLength;
        lanes = roadLanes;
    }

    // Метод для вывода значений полей
    void printValues() const {
        std::cout << "Длина дороги: " << length << " метров" << std::endl;
        std::cout << "Количество полос: " << lanes << std::endl;
    }
};

int main() {
    // Создаем объект дороги с использованием конструктора с параметрами по умолчанию
    Road road1;
    std::cout << "Значения полей после создания объекта:" << std::endl;
    road1.printValues();

    // Присваиваем значения полям с помощью метода setValues()
    road1.setValues(1000, 2);

    // Выводим значения полей с помощью метода printValues()
    std::cout << "Значения полей после присваивания:" << std::endl;
    road1.printValues();

    return 0;
}
