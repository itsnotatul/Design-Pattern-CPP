#include<iostream>
#include "DogHandler.h"
#include "SquirellHandler.h"
#include "MonkeyHandler.h"

using namespace std;

void ClientCode(Handler& handler){
    vector<string> food = {"nut","bone","banana","apple"};
    for(auto& f:food){
        std::cout << "Client: Who wants a " << f << "?\n";
        const std::string result = handler.handle(f);
        if(!result.empty()){
            cout<<" "<<result<<endl;
        }else{
            std::cout << "  " << f << " was left untouched.\n";
        }
    }
}

int main(){
    MonkeyHandler* monkey = new MonkeyHandler();
    SquirellHandler *squirell = new SquirellHandler();
    DogHandler* dog = new DogHandler();

    monkey->setNext(squirell)->setNext(dog);

    std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
    ClientCode(*monkey);
    std::cout << "\n";
    std::cout << "Subchain: Squirrel > Dog\n\n";
    ClientCode(*squirell);

    delete monkey;
    delete squirell;
    delete dog;

}
