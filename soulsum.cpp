#include <iostream>
char const* version_string = "v1.5";
int64_t getSoulNum (int64_t num);

int64_t getSoulNum (int64_t num) {
    int result = num % 9;
    return result == 0 ? 9 : result;
}

int main(int argc, char const* argv[])
{
    int64_t num;

    if (argc >= 2) {
        if (strcmp("--version", argv[1]) == 0) {
            std::cout << version_string << std::endl;
        } else {
            std::cout << getSoulNum (atoi(argv[1])) << std::endl;
        }
        return 0;
    }

    while (std::cin >> num) {
        std::cout << getSoulNum (num) << std::endl;
    }
    return 0;
}
