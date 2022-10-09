#include <iostream> // std::cout

int main() {
	int options = 0;
	float value = 0;
	float converted = 0;
	
	std::cout << " *** Currency Convertor*** " << "\n"
			  << "1.Candian dollars to US dollars.  \n" 
			  << "2.Mexican pesos to US dollars.    \n"
			  << "3.English pounds to US dollars.   \n"
			  << "4.Japanese yen to US dollars.     \n"
			  << "5.French francs to US dollars,    \n"
			  << " \n==> Choose Option: ";

			  std::cin >> options;

	std::cout << " \n==> Enter the amount: ";
			  std::cin >> value;	
	

	if (options == 1) {
		converted = value * (1/1.3743);
	} else if (options == 2) {
		converted = value * (1/20.0399);
	} else if (options == 3) {
		converted = value * 1.0779;
	} else if (options == 4) {
		converted = value * (1/144.6948);
	} else if (options == 5) {
		converted = value * (1/6.73429);
	} else {
		std::cout << "Wrong Menu Selection \n";
	}


	std::cout << "Entered Value: " << value << "\n";
	printf("US dollar equivalent: %.2f $\n", converted);

	return 0;
}
