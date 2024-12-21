#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat {
    private:
        unsigned int _grade;
        const std::string _name;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        ~Bureaucrat();
        std::string getName();
        int getGrade();
        void increment();
        void decrement();
        class GradeTooHighException: public std::exception{
            const char* what() const noexcept;
        };
        class GradeTooLowException: public std::exception{
            const char* what() const noexcept;
        };

};

#endif