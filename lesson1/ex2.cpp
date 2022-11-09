#include <stdio.h>
#include <iostream>

class RGBA
{
private:
	uint8_t m_green{ 0 };
	uint8_t m_red{ 0 };
	uint8_t m_blue{ 0 };
	uint8_t m_alpha{ 255 };
public:
	
	void set() {
		char cname;
		int buff;
		printf("введите первый латинский символ названия цвета а затем значение его канала\n");
		scanf_s("%c",&cname,1);
		scanf_s("%d",&buff);
		if (buff > 0 && buff<255) {
			switch (cname)
			{
			case('r'):
				m_red = (uint8_t)buff;
				break;
			case('g'):
				m_green = (uint8_t)buff;
				break;
			case('b'):
				m_blue = (uint8_t)buff;
				break;
			case('a'):
				m_alpha = (uint8_t)buff;
				break;
			default:
				printf("вы ввели неверную букву цвета (варианты в данной программе: r g b a\n");
				break;
			}
		}
		else printf("некорректное значение канала. он может принимать значения от 0 до 255\n");

	}

	void print() {
		printf("красный - %i \n",m_red);
		printf("зеленый - %i \n", m_green); 
		printf("синий - %i \n", m_blue); 
		printf("прозрачность - %i \n\n", m_alpha);

	}
};






int main() {
	setlocale(LC_ALL, "Ru");
	RGBA screen;
	int a=1;
	while (a != 0) {
		printf("введите номер функции, которую хотите выполнить\n(1 - изменить значение канала, 2 - просмотреть значения каналов)\nдля выхода из программы нажмите 0\n");
		std::cin >> a;
		switch (a)
		{
			case(1):
				screen.set();
				break;
			case(2):
				screen.print();
				break;
		default:
			printf("введите что то из предложенного\n");
			break;
		}
	}
	
	return 0;
}

