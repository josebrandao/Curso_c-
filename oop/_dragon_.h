#include <iostream>
#include <string>
class Dragon : public Monster{

      public:
          //codigo aqui
          bool Assustar(int grau) {
	using namespace std;
                       cout << "Soprar fogo!!!";
                       return true;
           }
};
