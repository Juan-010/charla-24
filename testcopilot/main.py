class Persona:
    def __init__(self):
        self._nombre = ""
        self._edad = -1

    def __init__(self, nombre, edad):
        self._nombre = nombre
        self._edad = edad

    def str(self):
        return self._nombre + " - Edad: " + str(self._edad)

class Empleado(Persona):
    def __init__(self):
        self._trabajo = ""

    def __init__(self, nombre, edad, trabajo):
        self._nombre = nombre
        self._edad = edad
        self._trabajo = trabajo

    def str(self):
        return self._trabajo + " - " + self._nombre + " - Edad: " + str(self._edad)

class Cocinero(Empleado):
    def __init__(self, nombre, edad, zona):
        self._nombre = nombre
        self._edad = edad
        self._trabajo = "Cocinero"
        self._zona = zona

    def str(self):
        return self._trabajo + " - " + self._nombre + " - Edad: " + str(self._edad) + " - zona: " + str(self._zona)

class Mozo(Empleado):
    def __init__(self, nombre, edad, mesas):
        self._nombre = nombre
        self._edad = edad
        self._trabajo = "Mozo"
        self._mesas = mesas

    def str(self):
        return self._trabajo + " - " + self._nombre + " - Edad: " + str(self._edad) + " - mesas: " + str(self._mesas)

juan = Persona("Juan Perez", 21)
ricky = Empleado("Ricardo Goma", 65, "Modelo")
marcelo = Empleado("Marcelo Tucan", 35, "Piloto")
rodolfo = Cocinero("Rodolfo Fiat", 95, 2)
bender = Mozo("Bender Simpson", 1928, 5)

print(juan.str())
print(ricky.str())
print(marcelo.str())
print(rodolfo.str())
print(bender.str())