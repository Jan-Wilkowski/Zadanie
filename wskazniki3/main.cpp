#include <iostream>

using namespace std;

int main()
{

    string pyramid_brick;
    int zmienna = 10;
    for(int i=0;i<61;i++){
        pyramid_brick = pyramid_brick + "#";
        cout << pyramid_brick << endl;
    }

    return 0;
}
