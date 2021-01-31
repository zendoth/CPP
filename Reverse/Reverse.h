#include <iostream>
using namespace std;
class Reverse{
    private:
    int myNum;        // Attribute (int variable)
    public:
    // Functions
    void set_num();
    int len(int num);
    string reverse(int length, int num);
    int getNum(){
        return myNum;
    }    
};
