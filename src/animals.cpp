// Copyright 2024 by Contributors
#include "../include/animals.hpp"
Animal::Animal(const float mass0, const char* sex0,
 const char* color0, const int age0) {
    mass = mass0;
    age = age0;
    color = new char[strlen(color0) + 1];
    snprintf(color, strlen(color0) + 1, "%s", color0);
    sex = new char[strlen(sex0) + 1];
    snprintf(sex, strlen(sex0) + 1, "%s", sex0);
}
Animal::Animal(const Animal& other) {
    mass = other.mass;
    age = other.age;
    sex = new char[strlen(other.sex) + 1];
    snprintf(sex, strlen(other.sex) + 1, "%s", other.sex);
    color = new char[strlen(other.color) + 1];
    snprintf(color, strlen(other.color) + 1, "%s", other.color);
}
Animal::Animal(Animal&& other) noexcept {
    mass = std::move(other.mass);
    age = std::move(other.age);
    sex = std::move(other.sex);
    color = std::move(other.color);
    other.mass = 0;
    other.age = 0;
    other.sex = nullptr;
    other.color = nullptr;
}
float Animal::GetMass() {
    return mass;
}
int Animal::GetAge() {
    return age;
}
char* Animal::GetColor() {
    return color;
}
char* Animal::GetSex() {
    return sex;
}

Animal::~Animal() {
    delete[] sex;
    delete[] color;
}

void Animal::SetMass(const float& mass0) {
    mass = mass0;
}
void Animal::SetAge(const int& age0) {
    age = age0;
}
void Animal::SetColor(const char* color0) {
    delete[] color;
    color = new char[strlen(color0)+1];
    snprintf(color, strlen(color0)+1, "%s", color0);
}
void Animal::SetSex(const char* sex0) {
    delete[] sex;
    sex = new char[strlen(sex0)+1];
    snprintf(sex, strlen(sex0)+1, "%s", sex0);
}

const char* Dog::WhatDoesSay() {
    return "woof";
}
Dog::Dog(const float mass0, const char* sex0, const char* color0,
 const int age0, const char* name0, const Breed race0):
  Animal(mass0, sex0, color0, age0) {
    name = new char[strlen(name0)+1];
    snprintf(name, strlen(name0)+1, "%s", name0);
    race = race0;
}
Dog::Dog(const Dog& other): Animal(other) {
    race = other.race;
    name = new char[strlen(other.name)+1];
    snprintf(name, strlen(other.name)+1, "%s", other.name);
}
Dog::Dog(Dog&&other) noexcept: Animal(std::move(other)) {
    name = std::move(other.name);
    race = std::move(other.race);
    other.race = Breed::Undefined;
    other.name = nullptr;
}
Dog::~Dog() {
    delete[] name;
}
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        SetAge(other.age);
        SetMass(other.mass);
        SetColor(other.color);
        SetName(other.name);
        SetRace(other.race);
    }
    return *this;
}
Dog& Dog::operator=(Dog&& other) noexcept {
    if (this != &other) {
        SetAge(other.age);
        SetMass(other.mass);
        SetColor(other.color);
        SetName(other.name);
        SetRace(other.race);
        other.age = 0;
        other.mass = 0;
        other.color = nullptr;
        other.name = nullptr;
        other.race = Breed::Undefined;
    }
    return *this;
}
char* Dog::GetName() {
    return name;
}
Dog::Breed Dog::GetRace() {
    return race;
}
void Dog::SetName(const char* name0) {
    if (name != nullptr) {
        delete[] name;
    }
    name = new char[strlen(name0)+1];
    snprintf(name, strlen(name0)+1, "%s", name0);
}
void Dog::SetRace(const Dog::Breed& race0) {
    race = race0;
}

Fox::Fox(const float mass0, const char* sex0, const char* color0,
 int age0, const char* name0, TypeFox type0):
  Animal(mass0, sex0, color0, age0) {
    numberRabbitsEaten = 0;
    type = type0;
    name = new char[strlen(name0)+1];
    snprintf(name, strlen(name0)+1, "%s", name0);
}
Fox::Fox(const Fox& other):Animal(other) {
    type = other.type;
    numberRabbitsEaten = other.numberRabbitsEaten;
    name = new char[strlen(other.name)+1];
    snprintf(name, strlen(other.name)+1, "%s", other.name);
}
Fox::Fox(Fox&& other) noexcept: Animal(std::move(other)) {
    type = std::move(other.type);
    name = std::move(other.name);
    numberRabbitsEaten = std::move(other.numberRabbitsEaten);
    other.numberRabbitsEaten = 0;
    other.name = nullptr;
    other.type = TypeFox::Undefined;
}
Fox& Fox::operator=(const Fox& other) {
    if (this != &other) {
        SetAge(other.age);
        SetMass(other.mass);
        SetColor(other.color);
        SetName(other.name);
        SetType(other.type);
        SetNumber(other.numberRabbitsEaten);
    }
    return *this;
}
Fox& Fox::operator=(Fox&& other) noexcept {
    if (this != &other) {
        SetAge(other.age);
        SetMass(other.mass);
        SetColor(other.color);
        SetName(other.name);
        SetType(other.type);
        SetNumber(other.numberRabbitsEaten);
        other.age = 0;
        other.mass = 0;
        other.color = nullptr;
        other.name = nullptr;
        other.type = TypeFox::Undefined;
    }
    return *this;
}
Fox::~Fox() {
    delete[] name;
}
char* Fox::GetName() {
    return name;
}
Fox::TypeFox Fox::GetType() {
    return type;
}
int Fox::GetNumberRabbitsEaten() {
    return numberRabbitsEaten;
}
void Fox::SetName(const char* name0) {
    if (name != nullptr) {
        delete[] name;
    }
    name = new char[strlen(name0)+1];
    snprintf(name, strlen(name0)+1, "%s", name0);
}
void Fox::SetType(TypeFox type0) {
    type = type0;
}
void Fox::SetNumber(int numberRabbitsEaten0) {
    numberRabbitsEaten = numberRabbitsEaten0;
}
void Fox::Eat() {
    numberRabbitsEaten++;
}
const char* Fox::WhatDoesSay() {
    switch (type) {
        case TypeFox::Bengal_fox:
            return "Ring-ding-ding-ding-dingeringeding!";
        case TypeFox::Afghan_fox:
            return "Wa-pa-pa-pa-pa-pa-pow!";
        case TypeFox::South_African_fox:
            return "Hatee-hatee-hatee-ho!";
        case TypeFox::Corsac:
            return "Joff-tchoff-tchoffo-tchoffo-tchoff!";
        case TypeFox::Tibetian_fox:
            return "Fraka-kaka-kaka-kaka-kow!";
        default:
            return "Undefined";
    }
}
std::ostream& operator<<(std::ostream& os, Fox::TypeFox type) {
    switch (type) {
        case Fox::TypeFox::Bengal_fox:
            os << "Bengal fox";
            break;
        case Fox::TypeFox::Afghan_fox:
            os << "Afghan fox";
            break;
        case Fox::TypeFox::South_African_fox:
            os << "South African fox";
            break;
        case Fox::TypeFox::Corsac:
            os << "Corsac";
            break;
        case Fox::TypeFox::Tibetian_fox:
            os << "Tibetian fox";
            break;
        default:
            os << "Undefined";
            break;
    }
    return os;
}
std::ostream& operator<<(std::ostream& os, Dog::Breed race) {
    switch (race) {
        case Dog::Breed::Boxer:
            os << "Boxer";
            break;
        case Dog::Breed::Spitz:
            os << "Spitz";
            break;
        case Dog::Breed::Rottweiler:
            os << "Rottweiler";
            break;
        case Dog::Breed::Labrador:
            os << "Labrador";
            break;
        case Dog::Breed::Pitbull:
            os << "Putbull";
            break;
        case Dog::Breed::BullTerier:
            os << "Bullterier";
            break;
        case Dog::Breed::Alabai:
            os << "Alabai";
            break;
        case Dog::Breed::Setter:
            os << "Setter";
            break;
        case Dog::Breed::Collie:
            os << "Collie";
            break;
        case Dog::Breed::Doberman:
            os << "Doberman";
            break;
        default:
            os << "Undefined";
            break;
    }
    return os;
}
