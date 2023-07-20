#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << "Da numero de argumentos brou: \n";
    cin >> argc;
    cout << "Y el primer argumento cual es huh? \n";
    cin >> *argv;
    if (argc > 0)
    {
        for (int i = 0; i < argc; i++)
        {
            cout << "Lesgo " << argv[i] << "\n";
            int j = 0;
            int value = 0;
            cout << " ";
            do
            {
                value = (int)argv[i][j];
                cout << " " << argv[i][j] << " = " << value << " 0x" << hex << value << ", yeeaah beibi xd\n ";
                j++;
            } while (argv[i][j] != 0);

            cout << "\n";
        }
    }
    else
    {
        cout << "Brubruvbruv. See ya nerds! xdxd\n";
    }
    return 0;
}
