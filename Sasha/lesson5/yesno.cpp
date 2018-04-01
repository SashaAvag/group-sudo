#include <string>
#include <cstdlib>
#include <ctime>
 int MyGlobalYes=0;
 int MyGlobalNo=0;

 void harc (std::string harcc) {
 	std::cout<<harcc;
	std::string pat;
	std::cin >>pat;
	if (pat == "yes") {
 		MyGlobalYes++;
	}
    if (pat == "no") {
        MyGlobalNo++;
    }
}

 int main () {
 	harc("Do you like programming?:");
    harc("Do you like computer games?:");
    harc("Do you like Instigate MObile? :");
    harc("Do you like the workers of Instigate Mobile? :");
    harc("Do you like lessons of Mesrop?:");
    harc("Really?:");
    std::cout<<"Numbers of Yes : "<<MyGlobalYes<<std::endl;
    std::cout<<"Numbers of No : "<<MyGlobalNo<<std::endl;
    return 0;
 }


