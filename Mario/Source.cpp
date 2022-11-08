#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");

	int height, row, colum, spacE;
	char space = ' ';


	cout << "Пожалуйста, введите число от 1 до 8:" << endl;
	cin >> height;

	while
		(height < 1 || height > 8)
	{
		cout << "Введенный символ не является числом или < 1 и > 8, попробуйте еще раз!" << endl;
		cin >> height;
		
		
	}
	
	

	for (row = 0; row < height; row++)
	{
		
		for (spacE = 0; spacE < height - row - 1; spacE++)
		{
			cout << space;
		}
			
		for (colum = 0; colum <= row; colum++)
		{
			
			cout << "#";
			
		}

		cout << space; space;

		for (colum = 0; colum <= row; colum++)
		
			cout << "#";
		
		cout << "\n";
	}


	
	


	
	return 0;
		
	}
	
	


