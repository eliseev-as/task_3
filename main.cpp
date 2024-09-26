#include <iostream>

bool isPalindrome(const std::string &str) {
    std::stack<char> s; // создаем стек символов
    const int n = str.length(); // вычисляем длину строки

    for (int i = 0; i < n / 2; i++) {
        // проходим по первой половине строки
        s.push(str[i]); // добавляем символ в стек
    }

    const int start = (n + 1) / 2; // определяем начало второй половины строки

    for (int i = start; i < n; i++) {
        // проходим по второй половине строки
        if (str[i] != s.top()) {
            // если символ не равен верхнему элементу стека
            return false; // строка не является палиндромом
        }
        s.pop(); // удаляем верхний элемент стека
    }

    return true; // строка является палиндромом
}

int main() {
    std::string str; // создаем переменную для хранения строки
    std::cout << "Введите строку: ";
    std::getline(std::cin, str); // считываем строку
    std::cout << str << " is a palindrome: " << std::boolalpha << isPalindrome(str) << '\n';
    // выводим результат проверки на палиндромность с помощью функции isPalindrome
    // std::boolalpha используется для вывода bool-значений в виде текста (true/false)

    return 0;
}
