#include <iostream>
int64_t getSoulNum (int64_t num);

int64_t getSoulNum (int64_t num) {
	int64_t _num = num;
	int64_t _s;
	do {
		_s=0;
		for (int64_t m = _num; m > 0; m/=10) {
			_s += m % 10;
		}
		_num = _s;
	} while (_s >= 10);
	return _s;
}


int main(int argc, char const* argv[])
{
	int64_t num;

	if (argc >= 2) {
		std::cout << getSoulNum (atoi(argv[1])) << std::endl;
		return 0;
	}

	while (std::cin >> num) {
		std::cout << getSoulNum (num) << std::endl;
	}
	return 0;
}

