#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class PogonaVitticeps {

    string animalclass;
    string suborder;
    string family;
    int bodylength;

public:

    void SetAnimalClass(string animalclass) {
        this->animalclass = animalclass;
    }
    string GetSetAnimalClass() const {
        return animalclass;
    }

    void SetSuborder(string suborder) {
        this->suborder = suborder;
    }
    string GetSuborder() const {
        return suborder;
    }

    void SetFamily(string family) {
        this->family = family;
    }
    string GetFamily() const {
        return family;
    }

    void SetBodyLength(int bodylength) {
        if (bodylength < 5 || bodylength > 70) throw "ERROR!";
        this->bodylength = bodylength;
    }
    int GetBodyLength() {
        return bodylength;
    }

    void Swim(string temperature) {
        cout << "Heat the bath to " << temperature << "\n";
    }

    void Eat(string insect) {
        cout << "Catch the " << insect << "\n";
    }

    void Gestures(string head_bob) {
        cout << "Violent bob " << head_bob << "\n";
    }

};

class Hospital {

    string name;
    string location;
    int availablebeds;
    double rating;

public:

    void SetName(string name) {
        this->name = name;
    }
    string GetName() const {
        return name;
    }

    void SetLocation(string location) {
        this->location = location;
    }
    string GetLocation() const {
        return location;
    }

    void SetBeds(int availablebeds) {
        if (availablebeds < 0 || availablebeds > 11) throw "ERROR!";
        this->availablebeds = availablebeds;
    }
    int GetBeds() {
        return availablebeds;
    }

    void SetRating(double rating) {
        if (rating < 0 || rating > 5) throw "ERROR!";
        this->rating = rating;
    }
    double GetRating() {
        return rating;
    }

    void DoctorsAppointment(string doctor) {
        cout << "Choose a doctor: " << doctor << "\n";
    }

    void Examinations(string exam) {
        cout << "Choose an examination: " << exam << "\n";
    }

    void Registry(string reg) {
        cout << "Call the reception: " << reg << "\n";
        Sleep(1000);
        cout << "...subscriber is temporary unavailable, please call later...\n";
        Sleep(1000);
    }
};

class Date {

    int day;
    int month;
    int year;

public:

    void SetDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
        if (day < 0 || day > 31 && month < 0 || month > 12 && year < 2000 || year > 2030) throw "ERROR!";
        cout << day << "." << month << "." << year << "\n";
    }
    int GetDate() {
        return day, month, year;
    }
};

class Hand {

    string bones;
    string muscles;
    string nerves;
    string vessels;
    int numfingers;

public:

    void SetBone(string bones) {
        this->bones = bones;
    }
    string GetBone() const {
        return bones;
    }

    void SetMuscles(string muscles) {
        this->muscles = muscles;
    }
    string GetMuscles() const {
        return muscles;
    }

    void SetNerves(string nerves) {
        this->nerves = nerves;
    }
    string GetNerves() const {
        return nerves;
    }

    void SetVessels(string vessels) {
        this->vessels = vessels;
    }
    string GSetVessels() const {
        return vessels;
    }

    void SetFinger(int numfingers) {
        if (numfingers < 0 || numfingers > 5) throw "ERROR!";
        this->numfingers = numfingers;
    }
    int GetFinger() const {
        return numfingers;
    }

    void Grab(string things) {
        cout << "I want grab " << things << "\n";
    }

    void Beat(string things) {
        cout << "I want beat " << things << "\n";
    }

    void Work(string things) {
        cout << "I work with " << things << "\n";
    }
};

class Book {

    string name;
    int pages;
    double weight;

public:

    void SetBookName(string name) {
        this->name = name;
    }
    string GetBookName() {
        return name;
    }

    void SetPages(int pages) {
        if (pages < 0 || pages > 1500) throw "ERROR!";
        this->pages = pages;
    }
    int GetPages() {
        return pages;
    }

    void SetWeight(double weight) {
        if (weight < 0 || weight > 500) throw "ERROR!";
        this->weight = weight;
    }
    double GetWeight() {
        return weight;
    }

    void AboutBook() {
        cout << "Book " << name << " contains " << pages << " pages. " << "\n";
        cout << "Book takes " << weight << " mb." << "\n";
    }
};

int main() {

    PogonaVitticeps lizard;

    lizard.SetAnimalClass("Reptilia");
    lizard.SetSuborder("Iguania");
    lizard.SetFamily("Agamidae");
    lizard.SetBodyLength(25);
    lizard.Swim("30-35 °C");
    lizard.Eat("zoophobus");
    lizard.Gestures("used by males just before mating");

    Hospital h;

    h.SetName("Rayoflight");
    h.SetLocation("Ukraine");
    h.SetBeds(10);
    h.SetRating(4.5);
    h.DoctorsAppointment("Pilulkin");
    h.Examinations("X-ray of the cervical spine");
    h.Registry("+380955289873");

    Date date;
    date.SetDate(7, 4, 2024);

    Hand hnd;

    hnd.SetBone("Carpals, Metacarpals, Phalanges");
    hnd.SetMuscles("Thenar group, Hypothenar group, Metacarpal group");
    hnd.SetNerves("Median nerve, Radial nerve, Ulnar nerve");
    hnd.SetVessels("Arteries and Veins");
    hnd.SetFinger(5);
    hnd.Grab("nose");
    hnd.Beat("nose");
    hnd.Work("nose");

    Book book;

    book.SetBookName("War and Peace");
    book.SetPages(1300);
    book.SetWeight(6.4);
    book.AboutBook();

    return 0;
}