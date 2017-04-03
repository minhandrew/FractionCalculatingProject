#include "fraction.h"
 
int main()
{
	int n;
	std::cout << "Type the number of fraction you want: ";
	std::cin >> n;
	frc *f = new frc[n];
	frc tong, hieu, tich, thuong;
	tong.numerator = hieu.numerator = 0;
	tich.numerator = thuong.numerator = 1;
	tong.denominator = hieu.denominator = tich.denominator = thuong.denominator = 1;
	for (int i = 0; i < n; ++i) {
		std::cout << "Type fraction " << i + 1 << ": ";
		std::cin >> f[i];
		tong = tong + f[i];
		tich = tich * f[i];
		if (i == 0) {
			hieu = f[i];
			thuong = f[i];
		}
		else {
			hieu = hieu - f[i];
			thuong = thuong / f[i];
		}
	}
	std::cout << "Tong: " << tong << std::endl;
	std::cout << "Hieu: " << hieu << std::endl;
	std::cout << "Tich: " << tich << std::endl;
	std::cout << "Thuong: " << thuong << std::endl;
	delete[] f;
	return 0;
}