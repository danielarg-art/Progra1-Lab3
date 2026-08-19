
#include <iostream>

int main()
{
    Crear
        Usuario.h

#pragma once
#pragma once
#include <string>

        class Usuario
    {
    private:
        std::string nombre;
        std::string apellidos;
        std::string fechaNacimiento;
        std::string direccion;
        std::string correo;

    public:
        Usuario(std::string nombre,
            std::string apellidos,
            std::string fechaNacimiento,
            std::string direccion,
            std::string correo);

        std::string getNombre() const;
        std::string getApellidos() const;
        std::string getFechaNacimiento() const;
        std::string getDireccion() const;
        std::string getCorreo() const;

        void setNombre(std::string nuevoNombre);
        void setApellidos(std::string nuevosApellidos);
        void setFechaNacimiento(std::string nuevaFecha);
        void setDireccion(std::string nuevaDireccion);
        void setCorreo(std::string nuevoCorreo);

        virtual void acceder() const;
    };
    Crear Usuario.cpp
#include "../Usuario.h"
#include <iostream>

        Usuario::Usuario(std::string nombre,
            std::string apellidos,
            std::string fechaNacimiento,
            std::string direccion,
            std::string correo)
    {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->fechaNacimiento = fechaNacimiento;
        this->direccion = direccion;
        this->correo = correo;
    }

    std::string Usuario::getNombre() const
    {
        return nombre;
    }

    std::string Usuario::getApellidos() const
    {
        return apellidos;
    }

    std::string Usuario::getFechaNacimiento() const
    {
        return fechaNacimiento;
    }

    std::string Usuario::getDireccion() const
    {
        return direccion;
    }

    std::string Usuario::getCorreo() const
    {
        return correo;
    }

    void Usuario::setNombre(std::string nuevoNombre)
    {
        if (!nuevoNombre.empty())
        {
            nombre = nuevoNombre;
        }
    }

    void Usuario::setApellidos(std::string nuevosApellidos)
    {
        if (!nuevosApellidos.empty())
        {
            apellidos = nuevosApellidos;
        }
    }

    void Usuario::setFechaNacimiento(std::string nuevaFecha)
    {
        if (!nuevaFecha.empty())
        {
            fechaNacimiento = nuevaFecha;
        }
    }

    void Usuario::setDireccion(std::string nuevaDireccion)
    {
        if (!nuevaDireccion.empty())
        {
            direccion = nuevaDireccion;
        }
    }

    void Usuario::setCorreo(std::string nuevoCorreo)
    {
        if (!nuevoCorreo.empty())
        {
            correo = nuevoCorreo;
        }
    }

    void Usuario::acceder() const
    {
        std::cout << "Usuario accede con permisos genericos.\n";
    }
}
