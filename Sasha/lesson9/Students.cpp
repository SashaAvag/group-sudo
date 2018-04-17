#include <iostream>
#include <string>

struct student {
    std::string firstname;
    std::string lastname;
    int age;
    std::string gender;
    bool status_student;
};
    
    void foo (student object) {
        std::cout<< "First name: " << object.firstname << std::endl;
        std::cout<< "Second name: " << object.lastname << std::endl; 
        std::cout<< "Age: " << object.age << std::endl;
        std::cout<< "Gender: " << object.gender << std::endl;
        std::cout<< "Status: student or not: " << object.status_student << std::endl;
    } 
 int main() { 
    bool f = false;
    student anun[14];
    anun[0] = {"Nona", "Musaelyan", 19, "female", true};
    anun[1] = {"Sasha", "Avagyan", 19, "male", true};
    anun[2] = {"Mariam", "Karapetyan", 21, "female", true};
    anun[3] = {"Edgar", "Grigoryan", 16, "male", false};
    anun[4] = {"Nvard", "Harutyunyan", 19, "female", true};
    anun[5] = {"Tigran", "Hovhannisyan", 21, "male", true};
    anun[6] = {"Michael", "Musaelyan", 17, "male", true};
    anun[7] = {"Ani", "Hakobyan", 19, "female", true};
    anun[8] = {"Arthur", "Gasparyan", 24, "male", false};
    anun[9] = {"Armen", "Abrahamyan", 24, "male", false};
    anun[10] = {"Arpine", "Harutyunyan", 23, "female", false};
    anun[11] = {"Lilit", "Melkumyan", 19, "female", true};
    anun[12] = {"Hrach", "Gevorgyan", 21, "male", true};
    anun[13] = {"Smbat", "Hayryan", 24, "male", false};
   
    std::cout << "Welcome ITC! Let's write any name from the following list." <<std::endl;
    std::cout<< "This is the list of all students: Michael, Smbat, Tigran, Nvard, Mariam, Edgar, Nona, Sasha, Lilit, Hrach, Arpine, Armen, Ani, Arthur. " << std::endl;   
    std::string name;
    std::cout<< "Enter name of student for more information: " << std::endl;
    std::cin >> name;
  
    for (int i = 0; i < 14;i++) {
        if (anun[i].firstname == name) {
            f = true;
            foo (anun[i]);
            break;
        }
      }
      if (!f) {
          std::cout << "We have no worker with that name!" <<std::endl;
          }
    return 0;
 }

