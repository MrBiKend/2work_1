#include <iostream>

// Класс дороги
class Road {
private:
  int length; // Длина дороги в метрах
  int lanes; // Количество полос на дороге

public:
  // Конструктор без параметров
  Road() {
    length = 0;
    lanes = 0;
  }

  // Метод для установки значений полей
  void setValues(int roadLength, int roadLanes) {
    length = roadLength;
    lanes = roadLanes;
  }

  // Метод для вывода значений полей
  void printValues() {
    std::cout << "Длина дороги: " << length << " метров" << std::endl;
    std::cout << "Количество полос: " << lanes << std::endl;
  }
};

int main() {
  // Создаем объект дороги с использованием конструктора без параметров
  Road road1;
  std::cout << "Значения полей после создания объекта:" << std::endl;
  road1.printValues();

  // Присваиваем значения полям
  road1.setValues(1000, 2);

  // Выводим значения полей после присваивания
  std::cout << "Значения полей после присваивания:" << std::endl;
  road1.printValues();

  return 0;
}
