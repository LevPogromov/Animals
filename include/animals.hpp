// Copyright 2024 by Contributors
#pragma once
#ifndef INCLUDE_ANIMALS_HPP
#define INCLUDE_ANIMALS_HPP

#include <string.h>
#include <iostream>
#include <string>
class Animal {
 protected:
    float mass;
    char* sex;
    char* color;
    int age;

    explicit Animal(
      const float mass0 = 0.0,
      const char* sex0 = "Undefined",
      const char* color0 = "Undefined",
      const int age0 = 0);
    Animal(const Animal& other);
    Animal(Animal&& other) noexcept;
    virtual ~Animal();
    virtual const char* WhatDoesSay() = 0;

 public:
    float GetMass();
    char* GetSex();
    int GetAge();
    char* GetColor();

    void SetMass(const float& mass0);
    void SetSex(const char* sex0);
    void SetColor(const char* color0);
    void SetAge(const int& age0);
};
class Dog: public Animal{
 public:
     enum class Breed : int {
      Undefined, Boxer, Spitz,
      Rottweiler, Labrador, Pitbull, BullTerier, Alabai,
      Setter, Collie, Doberman};
      friend std::ostream& operator<<(std::ostream& os, Dog::Breed breed);
     explicit Dog(
      const float mass0 = 0.0,
      const char* sex0 = "Undefined",
      const char* color0 = "Undefined",
      const int age0 = 0,
      const char* name0 = "Undefined",
      const Breed race0 = Breed::Undefined);
    Dog(const Dog& other);
    Dog(Dog&& other) noexcept;
    ~Dog();
    Dog& operator=(const Dog& other);
    Dog& operator=(Dog&& other) noexcept;
    const char* WhatDoesSay() override;

    char* GetName();
    Breed GetRace();

    void SetName(const char* name0);
    void SetRace(const Breed& race0);

 private:
    char* name;
    Breed race;
};
class Fox: public Animal{
 public:
    enum class TypeFox: int {
    Undefined, Bengal_fox, Afghan_fox,
    South_African_fox, Corsac, Tibetian_fox};
    friend std::ostream& operator<<(std::ostream& os, Fox::TypeFox type);
    const char* WhatDoesSay() override;
    explicit Fox(
      float mass0 = 0.0,
      const char* sex0 = "Undefined",
      const char* color0 = "Undefined",
      int age0 = 0,
      const char* name0 = "Undefined",
      TypeFox type0 = TypeFox::Undefined);
    Fox(const Fox& other);
    Fox(Fox&& other) noexcept;
    ~Fox();

    char* GetName();
    TypeFox GetType();
    int GetNumberRabbitsEaten();

    void SetName(const char* name0);
    void SetType(const TypeFox type0);
    void SetNumber(int numberRabbitsEaten0);

    void Eat();
    Fox& operator=(const Fox& other);
    Fox& operator=(Fox&& other) noexcept;

 private:
    char* name;
    TypeFox type;
    int numberRabbitsEaten;
};

#endif  // INCLUDE_ANIMALS_HPP
