#include <iostream>
#include <cmath>
#include <string>
#include <list>
#include <vector>
#include <ctime>
#include <algorithm>

struct Person
{
    std::string name;
    uint16_t age;

    friend std::ostream& operator<<(std::ostream& out, const Person& person);
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person(" << person.name << ", " << person.age << ')';
    return out;
}

int main()
{   
    std::vector<Person> persons{ {"Marcel", 22},{"Marian", 19}, {"Aurel", 20}, {"Mihai", 21} };
    std::sort(persons.begin(), persons.end(), [](const Person& a, const Person& b) -> bool
        {
            return a.age > b.age;
        });

        std::cout << "The vector of persons sorted by age in a descending ordered:\n";
    for (const auto& personObj : persons)
    {
        std::cout << personObj << '\n';
    }
    std::cout << '\n';

    return 0;
}