#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


int main()
{
	try
	{
		Bureaucrat i("SAIF", 4);
		Bureaucrat j("FRATELLO", 150);
		RobotomyRequestForm Robot("ROBOT");
		PresidentialPardonForm meta("PRESIDENT");
		Bureaucrat k("FRATELLO", 1);
		ShrubberyCreationForm	sh("TREE_");
		i.incr();
		std::cout << i;
		sh.beSigned(k);
		sh.execute(k);
		Robot.beSigned(i);
		Robot.execute(i);
		meta.beSigned(i);
		meta.execute(i);
	}
	catch(std::exception& exep)
	{
		std::cout << "Bureau " << exep.what() << std::endl;
	}
	return 0;
}