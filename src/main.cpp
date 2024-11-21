using namespace std;
#include "../include/animals.hpp"
int main(){
    //Dogs
    //Initialization constructor 
    cout << "Dog 1:" << endl;
    Dog dog1(12.3, "Female", "Black", 8, "Dory", Dog::Breed::Labrador);
    cout << "Mass : " << dog1.GetMass() << endl;
    cout << "Sex : " << dog1.GetSex() << endl;
    cout << "Color : " << dog1.GetColor() << endl;
    cout << "Age : " << dog1.GetAge() << endl;
    cout << "Name : " << dog1.GetName() << endl;
    cout << "Race : " << dog1.GetRace() << endl;
    cout << "First dog says : " << dog1.WhatDoesSay() << endl << endl;
    //Copy constructor
    Dog dog2(dog1);
    cout << "Dog 2:" << endl;
    cout << "Mass : " << dog2.GetMass() << endl;
    cout << "Sex : " << dog2.GetSex() << endl;
    cout << "Color : " << dog2.GetColor() << endl;
    cout << "Age : " << dog2.GetAge() << endl;
    cout << "Name : " << dog2.GetName() << endl;
    cout << "Race : " << dog2.GetRace() << endl;
    cout << "Second dog says : " << dog2.WhatDoesSay() << endl << endl;
    //Move constructor
    Dog dog3(move(dog2));
    cout << "Dog 3:" << endl;
    cout << "Mass : " << dog3.GetMass() << endl;
    cout << "Sex : " << dog3.GetSex() << endl;
    cout << "Color : " << dog3.GetColor() << endl;
    cout << "Age : " << dog3.GetAge() << endl;
    cout << "Name : " << dog3.GetName() << endl;
    cout << "Race : " << dog3.GetRace() << endl;
    cout << "Third dog says : " << dog3.WhatDoesSay() << endl;
    cout << "Check delete(for example age) : " << dog2.GetAge() << endl << endl;
    //copy operator
    Dog dog4 = dog3;
    cout << "Dog 4:" << endl;
    cout << "Mass : " << dog4.GetMass() << endl;
    cout << "Sex : " << dog4.GetSex() << endl;
    cout << "Color : " << dog4.GetColor() << endl;
    cout << "Age : " << dog4.GetAge() << endl;
    cout << "Name : " << dog4.GetName() << endl;
    cout << "Race : " << dog4.GetRace() << endl;
    cout << "Fourth dog says : " << dog4.WhatDoesSay() << endl << endl;
    //move operator
    Dog dog5 = move(dog1);
    cout << "Dog 5:" << endl;
    cout << "Mass : " << dog5.GetMass() << endl;
    cout << "Sex : " << dog5.GetSex() << endl;
    cout << "Color : " << dog5.GetColor() << endl;
    cout << "Age : " << dog5.GetAge() << endl;
    cout << "Name : " << dog5.GetName() << endl;
    cout << "Race : " << dog5.GetRace() << endl;
    cout << "Fifth dog says : " << dog5.WhatDoesSay() << endl;
    cout << "Check delete(for example age) : " << dog1.GetAge() << endl << endl;
    //Setters
    dog1.SetMass(23.5);
    dog1.SetSex("Male");
    dog1.SetColor("White");
    dog1.SetAge(5);
    dog1.SetName("Rex");
    dog1.SetRace(Dog::Breed::Boxer);
    cout << "New dog 1" << endl;
    cout << "Mass : " << dog1.GetMass() << endl;
    cout << "Sex : " << dog1.GetSex() << endl;
    cout << "Color : " << dog1.GetColor() << endl;
    cout << "Age : " << dog1.GetAge() << endl;
    cout << "Name : " << dog1.GetName() << endl;
    cout << "Race : " << dog1.GetRace() << endl << endl; 
    //Foxes
    //Initialization constructor
    Fox fox1(7.8, "Female", "Orange", 3, "Betty", Fox::TypeFox::Afghan_fox);
    cout << "Fox 1" << endl;
    cout << "Mass : " << fox1.GetMass() << endl;
    cout << "Sex : " << fox1.GetSex() << endl;
    cout << "Color : " << fox1.GetColor() << endl;
    cout << "Age : " << fox1.GetAge() << endl;
    cout << "Name : " << fox1.GetName() << endl;
    cout << "Race : " << fox1.GetType() << endl;
    cout << "First fox says : " << fox1.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox1.GetNumberRabbitsEaten() << endl << endl;
    //Copy constructor
    Fox fox2(fox1);
    cout << "Fox 2" << endl;
    cout << "Mass : " << fox2.GetMass() << endl;
    cout << "Sex : " << fox2.GetSex() << endl;
    cout << "Color : " << fox2.GetColor() << endl;
    cout << "Age : " << fox2.GetAge() << endl;
    cout << "Name : " << fox2.GetName() << endl;
    cout << "Race : " << fox2.GetType() << endl;
    cout << "Second fox says : " << fox2.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox2.GetNumberRabbitsEaten() << endl << endl;
    //Move constructor
    Fox fox3(move(fox2));
    cout << "Fox 3" << endl;
    cout << "Mass : " << fox3.GetMass() << endl;
    cout << "Sex : " << fox3.GetSex() << endl;
    cout << "Color : " << fox3.GetColor() << endl;
    cout << "Age : " << fox3.GetAge() << endl;
    cout << "Name : " << fox3.GetName() << endl;
    cout << "Race : " << fox3.GetType() << endl;
    cout << "Third fox says : " << fox3.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox3.GetNumberRabbitsEaten() << endl;
    cout << "Check delete(for example age) : " << fox2.GetAge() << endl << endl;
    //Copy operator
    Fox fox4 = fox3;
    cout << "Fox 4" << endl;
    cout << "Mass : " << fox4.GetMass() << endl;
    cout << "Sex : " << fox4.GetSex() << endl;
    cout << "Color : " << fox4.GetColor() << endl;
    cout << "Age : " << fox4.GetAge() << endl;
    cout << "Name : " << fox4.GetName() << endl;
    cout << "Race : " << fox4.GetType() << endl;
    cout << "Fourth fox says : " << fox4.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox4.GetNumberRabbitsEaten() << endl << endl;
    //Move operator
    Fox fox5 = move(fox4);
    cout << "Fox 5" << endl;
    cout << "Mass : " << fox5.GetMass() << endl;
    cout << "Sex : " << fox5.GetSex() << endl;
    cout << "Color : " << fox5.GetColor() << endl;
    cout << "Age : " << fox5.GetAge() << endl;
    cout << "Name : " << fox5.GetName() << endl;
    cout << "Race : " << fox5.GetType() << endl;
    cout << "Fifth fox says : " << fox5.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox5.GetNumberRabbitsEaten() << endl;
    cout << "Check delete(for example age) : " << fox4.GetAge() << endl << endl;
    //Setters
    fox1.SetAge(5);
    fox1.SetColor("Grey");
    fox1.SetSex("Male");
    fox1.SetMass(33.3);
    fox1.SetType(Fox::TypeFox::Tibetian_fox);
    fox1.SetName("Dunya");
    cout << "Fox 1" << endl;
    cout << "Mass : " << fox1.GetMass() << endl;
    cout << "Sex : " << fox1.GetSex() << endl;
    cout << "Color : " << fox1.GetColor() << endl;
    cout << "Age : " << fox1.GetAge() << endl;
    cout << "Name : " << fox1.GetName() << endl;
    cout << "Race : " << fox1.GetType() << endl;
    cout << "First fox says : " << fox1.WhatDoesSay() << endl;
    cout << "Number rabbits eaten : " << fox1.GetNumberRabbitsEaten() << endl << endl;
    //function eat
    fox1.Eat();
    cout << "Number rabbits eaten : " << fox1.GetNumberRabbitsEaten() << endl;
    return 0;
}