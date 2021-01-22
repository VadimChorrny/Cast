#include <iostream>
#include <string>
using namespace std;

__interface Idrivable
{
    void start();
    void stop();
    void upSpeed(const size_t& speed);
    void downSpeed(const size_t& speed);
    void print() const;
};

class Car : public Idrivable
{

public:
    Car(const size_t& MAX_SPEED, const string& brand)
    {
        setBrand(brand);
        setMaxSpeed(MAX_SPEED);
    }
    void setBrand(const string& brand)
    {
        if (!brand.empty())
            this->brand = brand;
        else
            cerr << "Error with brand!" << endl;
    }
    void setMaxSpeed(const size_t& speed)
    {
        if (speed < MAX_SPEED)
            this->speed = speed;
        else
            cerr << "Error with max-speed!" << endl;
    }
    void start() override
    {
        speed = 10;
        engine = true;
        cout << "Car engine : " << engine << "\n" << "Current speed : " << speed << "\n";
    }
    void stop() override
    {
        speed = 0;
        engine = false;
        cout << "~~~~~~Car stopped!~~~~~~" << "\n" << "Car engine : " << engine << "\n" << "Current speed : " << speed << endl;
    }
    void upSpeed(const size_t& speed) override
    {
        if (speed < MAX_SPEED)
            this->speed += speed;
    }
    void downSpeed(const size_t& speed)
    {
        if (speed > 0 && speed < MAX_SPEED)
            this->speed -= speed;
    }
  
    // add print
    void print() const override
    {
        cout << "___CAR PRINT WORKED___" << endl;
        cout << "Brand car : " << brand << endl;
        cout << "Max speed car : " << MAX_SPEED << endl;
        cout << "Speed : " << speed << endl;
        cout << "Engine : " << engine << endl;
    }

private:
     
    size_t speed;
    size_t MAX_SPEED = 150;
    string brand;
    bool engine;
};

class Horse : public Idrivable
{
public:
    Horse(const string& name, const string breed, const size_t& MAX_SPEED)
    {
        setNameHourse(name);
        setBreed(breed);
        setMaxSpeed(MAX_SPEED);
    }

    void setMaxSpeed(const size_t& speed)
    {
        if (speed < MAX_SPEED)
            this->speed = speed;
        else
            cerr << "Error with max-speed" << endl;
    }
    void setNameHourse(const string& name)
    {
        if (!name.empty())
            this->nameHourse = name;
        else
            cerr << "Error with name hourse!!!" << endl;
    }
    void setBreed(const string& breed)
    {
        if (!breed.empty())
            this->breed = breed;
        else
            cerr << "Error with breed!!!" << endl;
    }
    
    void start() override
    {
        speed = 3;
        engine = true;
        cout << "Hourse started : " << engine << "\n" << "Current speed : " << speed << endl;
    }
    void stop() override
    {
        speed = 0;
        engine = false;
        cout << "_____Hourse stoped_____" << endl;
        cout << "Hourse engine : " << engine << "\n" << "Current speed : " << speed << endl;
    }
    void upSpeed(const size_t& speed) override
    {
        if (speed < MAX_SPEED)
            this->speed += speed;
    }
    void downSpeed(const size_t& speed) override
    {
        if (speed > 0 && speed < MAX_SPEED)
            this->speed -= speed;
    }

    void print() const override
    {
        cout << "___HOURSE PRINT___" << endl;
        cout << "Name hourse : " << nameHourse << endl;
        cout << "Breed hourse : " << breed << endl;
        cout << "Speed : " << speed << endl;
        cout << "Max speed : " << MAX_SPEED << endl;
        cout << "Engine : " << engine << endl;
    }

private:

    size_t speed;
    size_t MAX_SPEED = 30;
    string nameHourse;
    string breed;
    bool engine;
};

class Driver
{
public:
    Driver(const string& name, Idrivable* vehicle) 
    {
        setName(name);
        setVehicle(vehicle);
    }

    void setName(const string& name)
    {
        if (!name.empty())
            this->name = name;
        else
            cerr << "Error with name driver!!!" << endl;
    }
    void setVehicle(Idrivable* drivable)
    {
        this->vehicle = drivable;
    }
    void testDriver(const size_t& speed)
    {
        int action = 0;
        cout << "1. Start vehicle" << endl;
        cout << "2. Stop vehicle" << endl;
        cout << "3. upSpeed vehicle" << endl;
        cout << "4. downSpeed vehicle" << endl;

        cout << "Enter action\t";
        cin >> action;
        if (action == 1)
            vehicle->start();
        else if (action == 2)
            vehicle->stop();
        else if (action == 3 && speed != 0)
            vehicle->upSpeed(speed);
        else if (action == 4 && speed != 0)
            vehicle->downSpeed(speed);
        vehicle->print();
    }

private:
    Idrivable* vehicle;
    string name;
};


int main()
{
    Car car(50, "Rolls-Royce");
    Driver driver("Vadim", &car);
    driver.testDriver(50);
}