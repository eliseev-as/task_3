#include <iostream>

bool isPalindrome(const std::string &str) {
    std::stack<char> s; // ᮧ���� �⥪ ᨬ�����
    const int n = str.length(); // ����塞 ����� ��ப�

    for (int i = 0; i < n / 2; i++) {
        // ��室�� �� ��ࢮ� �������� ��ப�
        s.push(str[i]); // ������塞 ᨬ��� � �⥪
    }

    const int start = (n + 1) / 2; // ��।��塞 ��砫� ��ன �������� ��ப�

    for (int i = start; i < n; i++) {
        // ��室�� �� ��ன �������� ��ப�
        if (str[i] != s.top()) {
            // �᫨ ᨬ��� �� ࠢ�� ���孥�� ������ �⥪�
            return false; // ��ப� �� ���� ������஬��
        }
        s.pop(); // 㤠�塞 ���孨� ����� �⥪�
    }

    return true; // ��ப� ���� ������஬��
}

int main() {
    std::string str; // ᮧ���� ��६����� ��� �࠭���� ��ப�
    std::cout << "������ ��ப�: ";
    std::getline(std::cin, str); // ���뢠�� ��ப�
    std::cout << str << " is a palindrome: " << std::boolalpha << isPalindrome(str) << '\n';
    // �뢮��� १���� �஢�ન �� ������஬����� � ������� �㭪樨 isPalindrome
    // std::boolalpha �ᯮ������ ��� �뢮�� bool-���祭�� � ���� ⥪�� (true/false)

    return 0;
}
