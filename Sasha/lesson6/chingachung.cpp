#include <iostream>

int main () {
    int a,b;
    std::cout <<"Player 1: Yntreq qar=(1), mkrat=(2) kam tuxt=(3): ";
    std::cin >>a;
    std::cout <<"Player 2: Yntreq qar=(1), mkrat=(2) kam tuxt:=(3) ";
    std::cin >>b;
    switch (a) {
        case 1:
            switch (b) {
                case 1:
                    std::cout<<"Equal, nobody wins"<<std::endl;
                    break;
                case 2:
                    std::cout<<"player1 is winner"<<std::endl;
                    break;
                case 3:
                    std::cout<<"Player2 is winner"<<std::endl;
                    break;
                default:
                    std::cout<<"You failed :Try again!";
                    break;
            }
        break;
        case 2:
            switch (b) {
                case 2:
                    std::cout<<"Equal, nobody wins"<<std::endl;
                    break;
                case 3:
                    std::cout<<"player1 is winner"<<std::endl;
                    break;
                case 1:
                    std::cout<<"Player2 is winner"<<std::endl;
                    break;
                default:
                    std::cout<<"You failed :Try again!"<<std::endl;
                    break;    
            }
            break;
        case 3:
            switch (b) {
                case 3:
                    std::cout<<"Equal, nobody wins"<<std::endl;
                    break;
                case 1:
                    std::cout<<"player1 is winner"<<std::endl;
                    break;
                case 2:
                    std::cout<<"Player2 is winner"<<std::endl;
                    break;
                default:
                    std::cout<<"You failed :Try again!"<<std::endl;
                    break;    
            }
            break;
        default:
            std::cout<<"You failed :Try again!'"<<std::endl;
    }
    return 0;
}
