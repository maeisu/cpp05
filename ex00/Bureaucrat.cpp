
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException;
    }
    if (grade > 150) {
        throw Bureaucrat::GradeTooLowException;
    }
    this->_grade = grade;
}
Bureaucrat::Bureaucrat() {

}
Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}

void Bureaucrat::increment()
{
    try {

    } catch (std::exception & e) {

    }   
}

void Bureaucrat::decrement()
{
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    return nullptr;
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
    return nullptr;
}
