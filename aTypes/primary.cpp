#include <iostream>

#include <cstdint>
#include <string>
#include <array>
#include <vector>
#include <map>
#include <tuple>
#include <variant>
#include <any>
#include <optional>

int main(){
    std::cout<<"Boolean"<<std::endl;
    bool boolean = true;
    bool booleanf = false;
    bool booleanN = 1;
    std::cout << std::boolalpha;
    std::cout << boolean << " Sizeof " << sizeof(boolean) << " Bytes" << std::endl;
    std::cout << booleanf << " Sizeof " << sizeof(booleanf) << " Bytes" << std::endl;
    std::cout << booleanN << " Sizeof " << sizeof(booleanN) << " Bytes" << std::endl;

    std::cout<<"Character types"<<std::endl;
    char char_one = 'w';
    char char_two = 89;
    wchar_t wchar = L'Ж';
//    char8_t c8 = u8'A';
    char16_t c16 = u'Ж';
    char32_t c32 = U'Ж';
    std::cout << char_one << " Sizeof " << sizeof char_one << " Bytes" << std::endl;
    std::cout << int(char_one) << " Sizeof " << sizeof(int(char_one)) << " Bytes" << std::endl;
    std::cout << char_two << " Sizeof " << sizeof char_two << " Bytes" << std::endl;
    std::cout << "wchar_t: " << wchar << " Sizeof " << sizeof(wchar) << " Bytes" << std::endl;
//    std::cout << "char8_t Sizeof " << sizeof(c8) << " Bytes" << std::endl;
    std::cout << c16<<" Sizeof " << sizeof(c16) << " Bytes" << std::endl;
    std::cout << c32<<" Sizeof " << sizeof(c32) << " Bytes" << std::endl;

    std::cout<<"Integer types"<<std::endl;
    short s = 1;
    int i = 2;
    long l = 3;
    long long ll = 4;
    std::cout << s <<" Sizeof " << sizeof(s) << " Bytes" << std::endl;
    std::cout << "int Sizeof " << sizeof(i) << " Bytes" << std::endl;
    std::cout << "long Sizeof " << sizeof(l) << " Bytes" << std::endl;
    std::cout << "long long Sizeof " << sizeof(ll) << " Bytes" << std::endl;

    std::cout<<"Fixed width integers"<<std::endl;
    int8_t i8 = 1;
    uint8_t u8 = 2;
    int16_t i16 = 3;
    uint16_t u16 = 4;
    int32_t i32 = 5;
    uint32_t u32 = 6;
    int64_t i64 = 7;
    uint64_t u64 = 8;
    std::cout << "int8_t Sizeof " << sizeof(i8) << " Bytes" << std::endl;
    std::cout << "uint8_t Sizeof " << sizeof(u8) << " Bytes" << std::endl;
    std::cout << "int16_t Sizeof " << sizeof(i16) << " Bytes" << std::endl;
    std::cout << "uint16_t Sizeof " << sizeof(u16) << " Bytes" << std::endl;
    std::cout << "int32_t Sizeof " << sizeof(i32) << " Bytes" << std::endl;
    std::cout << "uint32_t Sizeof " << sizeof(u32) << " Bytes" << std::endl;
    std::cout << "int64_t Sizeof " << sizeof(i64) << " Bytes" << std::endl;
    std::cout << "uint64_t Sizeof " << sizeof(u64) << " Bytes" << std::endl;

    std::cout<<"Floating point types"<<std::endl;
    float f = 1.1f;
    double d = 2.2;
    long double ld = 3.3;
    std::cout << "float Sizeof " << sizeof(f) << " Bytes" << std::endl;
    std::cout << "double Sizeof " << sizeof(d) << " Bytes" << std::endl;
    std::cout << "long double Sizeof " << sizeof(ld) << " Bytes" << std::endl;

    // String types
    std::string str = "Hello";
    std::wstring wstr = L"Привет";

    std::cout << str<<" std::string Sizeof " << sizeof(str) << " Bytes" << std::endl;
    std::wcout << wstr<<L"std::wstring Sizeof " << sizeof(wstr) << L" Bytes" << std::endl;

    // STL containers
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec = {1, 2, 3};
    std::map<int, std::string> m = {{1, "one"}, {2, "two"}};
    std::cout << "std::array Sizeof " << sizeof(arr) << " Bytes" << std::endl;
    std::cout << "std::vector Sizeof " << sizeof(vec) << " Bytes" << std::endl;
    std::cout << "std::map Sizeof " << sizeof(m) << " Bytes" << std::endl;

    // Modern types
    std::tuple<int, std::string> tup = {1, "a"};
    std::variant<int, float> var = 1.5f;
    std::any a = 42;
    std::optional<int> opt = 10;
    std::cout << "std::tuple Sizeof " << sizeof(tup) << " Bytes" << std::endl;
    std::cout << "std::variant Sizeof " << sizeof(var) << " Bytes" << std::endl;
    std::cout << "std::any Sizeof " << sizeof(a) << " Bytes" << std::endl;
    std::cout << "std::optional Sizeof " << sizeof(opt) << " Bytes" << std::endl;

    // Pointers and references
    int* ptr = &i;
    int& ref = i;
    std::cout << "Pointer Sizeof " << sizeof(ptr) << " Bytes" << std::endl;
    std::cout << "Reference Sizeof " << sizeof(ref) << " Bytes" << std::endl;

    return 0;
}