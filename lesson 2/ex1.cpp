#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


class human {
private:
    string c_name;
    int c_age;
    int c_weight;
    string c_gender;
public:

    human(string name = "", int age = 0, int weight = 0, string gender = "") : c_name(name), c_age(age), c_weight(weight), c_gender(gender) {}
    void upage() { c_age++; };

    void set_name(string _name) {
        c_name = _name;
    }
    void set_age(int _a) {
        c_age = _a;
    }
    void set_weight(int _a) {
        c_weight = _a;
    }
    void set_gender(string _gender) {
        if (_gender == "female" || _gender == "male" || _gender == "мужской" || _gender == "женский") {
            if (_gender == "male" || _gender == "мужской") {
                c_gender = "male";
            }
            else c_gender = "female";
        }
        else { c_gender = "непонятный какой то"; }
    }

    string const get_name() { return c_name; }
    string const get_gender() { return c_gender; }
    int const get_age() { return c_age; }
    int const get_weight() { return c_weight; }

    ~human() {}

};



class student: public human{
private:
    string name_course;
    int year_study;
    static int scorer;

public:
    student(string curse = "proganie on c++", int year = 0) : name_course(curse), year_study(year) { scorer++; }
    
    string const get_namecourse() {return name_course;}
    int const get_year_study() { return year_study; }
    
    void set_name_course(string _name) {
        name_course = _name;
    }
    void set_year_study(int _year) {
        year_study = _year;
    }
    static int get_scorer() { return scorer; }
    ~student() { scorer--; }
};

int student::scorer = 0;


int main()
{
    setlocale(LC_ALL, "Ru");
    student man;
    man.set_name("Никита"); 
    man.set_gender("male"); 
    man.set_age(25); 
    man.set_weight(65);
    man.set_name_course("разработка на С++");
    man.set_year_study(2022);

    std::cout << man.get_name() << "\t" << man.get_gender() << "\t" << man.get_age() << "\t" << man.get_weight() << "\t" << man.get_namecourse() << "\t" << man.get_year_study() << endl;
    std::cout << man.get_scorer() << endl;


    student man1;
    man1.set_name("Алла");
    man1.set_gender("женский");
    man1.set_age(23);
    man1.set_weight(45);
    man1.set_name_course("разработка на java");
    man1.set_year_study(2022);

    std::cout << man1.get_name() << "\t" << man1.get_gender() << "\t" << man1.get_age() << "\t" << man1.get_weight() << "\t" << man1.get_namecourse() << "\t" << man1.get_year_study() << endl;
    std::cout << man.get_scorer() << endl;


    student man2;
    man2.set_name("Олег");
    man2.set_gender("male");
    man2.set_age(21);
    man2.set_weight(60);
    man2.set_name_course("тестировка");
    man2.set_year_study(2021);
    
    

    std::cout << man2.get_name() << "\t" << man2.get_gender() << "\t" << man2.get_age() << "\t" << man2.get_weight() << "\t" << man2.get_namecourse() << "\t" << man2.get_year_study() << endl;
    std::cout << man.get_scorer() << endl;
}

