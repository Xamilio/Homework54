#include <iostream>
#include <string>
using namespace std;
class Passport {
private:
    string Full_name;
    string Birth_date;
    string Citizenship;
    string Passport_number;

public:
    Passport(string full_name, string birth_date, string citizenship, string passport_number)
    {
        Full_name = full_name;
        Birth_date = birth_date;
        Citizenship = citizenship;
        Passport_number = passport_number;
    }
    string display_info() const {

        return "Passport Information:\n Full Name: " + Full_name + "\n" + "Date of Birth: " + Birth_date + "\n" + "Citizenship: " + Citizenship + "\n" + "Passport Number: " + Passport_number;
    }

    string& get_full_name()  { 
        return Full_name;
    }
    string& get_birth_date() { 
        return Birth_date; 
    }
    string& get_citizenship() { 
        return Citizenship; 
    }
    string& get_passport_number() { 
        return Passport_number; 
    }
};

class ForeignPassport : public Passport {
private:
    string Passport_country;
    string Visa_info;

public:
    ForeignPassport(string full_name, string birth_date, string citizenship, string passport_number, string passport_country, string visa_info) : Passport(full_name, birth_date, citizenship, passport_number), Passport_country(passport_country), Visa_info(visa_info) 
    {

    }

    string display_info() const
    {
       return Passport::display_info() + "\n" + "Foreign Passport Information:\n" + "Passport Country: " + Passport_country + "\n" + "Visa Information: " + Visa_info;
    }

    string& get_passport_country()  { 
        return Passport_country;
    }
    string& get_visa_info()  {
        return Visa_info;
    }
};

int main() {
    ForeignPassport Foreign_passport("Novak Aleksandr", "2006-02-07", "Ukrainian", "AA5341234", "Ukraine", "Tourist Visa: USA");
    cout << Foreign_passport.display_info() << endl;
}