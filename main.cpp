#include <iostream>

int main(int argc,char* argv[]) {
    std::cout << "Hello! \n";
    if(argc == 1){
        std::cout << "Please enter arguments";
        return 0;
    }
    if(argc >= 2){
        std::cout << "You passed " << argc-1<< " argument(s), here they are!:\n" ;

        for( int i= 1; i < argc; i++ ) {
            std::cout <<"\nargv[" << i << "]"<<": " <<argv[i]<<"\n";
        }

    }
    return 0;
}
