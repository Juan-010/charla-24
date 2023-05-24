#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string _nombre;
    int _edad;
public:
    Persona()
    {
        _nombre = "";
        _edad = -1;
    }
    Persona(string nombre, int edad)
    {
        _nombre = nombre;
        _edad = edad;
    }
    virtual string str()
    {
        return _nombre + " - Edad: " + to_string(_edad);
    }
};

class Empleado : public Persona{
protected:
    string _trabajo;
public:
    Empleado()
    {
        _nombre = "";
        _edad = -1;
        _trabajo = "";
    }
    Empleado(string nombre, int edad, string trabajo)
    {
        _nombre = nombre;
        _edad = edad;
        _trabajo = trabajo;
    }
    virtual string str()
    {
        return _trabajo + " - " + _nombre + " - Edad: " + to_string(_edad);
    }
};

class Cocinero : public Empleado {
    int _zona;
public:
    Cocinero(string nombre, int edad, int zona)
    {
        _nombre = nombre;
        _edad = edad;
        _trabajo = "Cocinero";
        _zona = zona;
    }

    virtual string str()
    {
        return _trabajo + " - " + _nombre + " - Edad: " + to_string(_edad) + " - zona: " + to_string(_zona);
    }
};

class Mozo : public Empleado {
    int _mesas;
public:
    Mozo(string nombre, int edad, int mesas)
    {
        _nombre = nombre;
        _edad = edad;
        _trabajo = "Mozo";
        _mesas = mesas;
    }

    virtual string str()
    {
        return _trabajo + " - " + _nombre + " - Edad: " + to_string(_edad) + " - mesas: " + to_string(_mesas);
    }
};

int main()
{
    Persona juan("Juan Perez", 21);
    Empleado ricky("Ricardo Goma", 65, "Modelo");
    Empleado marcelo("Marcelo Tucan", 35, "Piloto");
    Cocinero rodolfo("Rodolfo Fiat", 95, 2);
    Mozo bender("Bender Simpson", 1928, 5);

    cout << juan.str() << endl;
    cout << ricky.str() << endl;
    cout << marcelo.str() << endl;
    cout << rodolfo.str() << endl;
    cout << bender.str() << endl;
}