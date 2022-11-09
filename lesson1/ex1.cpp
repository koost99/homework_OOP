#include <iostream>
#include <cmath>

using namespace std;

class Power
{
private:
    float a = 2;
    float b = 2;

public:
    void set(char x, float dat) {
        switch (x)
        {
        case('a'):
            a = dat;
            break;
        case('b'):
            b = dat;
            break;
        default:
            cout << "not" << endl;
            break;
        }
    }
   
    void calculate() {
        cout << pow(a, b) << endl;
    }

};

void main()
{
    setlocale(LC_ALL, "Ru");
    Power abc;
    cout << "введите название переменной (в данной программе a или b). "<< endl <<"или введите 0 в качестве имя переменной для выхода из программы" << endl << endl;
    char a;
    float b;
    while (true)
    {
        cout << "Введите имя переменной, которую хотите изменить или 0" << endl;
        cin >> a;
        if (a == 48)  break; 
        cout << "Введите число" << endl;
        cin >> b;
        abc.set(a, b);
        abc.calculate();
    } 
    
        
    
}
