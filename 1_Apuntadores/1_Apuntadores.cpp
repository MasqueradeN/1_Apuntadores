#include <iostream>

using namespace std;
void PruebaDeArgumentos(int argc, char** argv)
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
        cout << "Bruhbruvbruv. See ya nerds! xdxd\n";
    }
}

void Promedio(int argc, char** argv)
{
    int* x = new int;//(int*)malloc(sizeof(int));
    *x = 99;

    cout << "sizeof int " << sizeof(int) << "\n";
    cout << " x " << *x << "\n";

    *x = 'k';

    cout << "sizeof int " << sizeof(int) << "\n";
    cout << " x " << *x << " en " << x << "\n";

    *(x + 1) = 18;

    cout << "sizeof int " << sizeof(int) << "\n";
    cout << " x+1 " << *(x + 1) << " en " << x + 1 << "\n";

    int* y = new int[214748369];
    char continuar;
    bool puedeContinuar = true;
    memset(y, 0, sizeof(int));

    int* acumulador = new int;
    *acumulador = 0;
    float div;
    div = 0;


    for (int i = 0; i < 214748369; i++)
    {
        if (puedeContinuar)
        {
            div += 1;
            cout << "Introduce los valores para el promedio\n";
            cin >> y[i];
            cout << " y[ " << i << " ] = " << y[i] << "\n";
            *acumulador += y[i];
        }
        if (puedeContinuar || puedeContinuar == false)
        {
            cout << "Quieres continuar? Presiona S/N: ";
            cin >> continuar;
        }
        if (continuar == 'S' || continuar == 's')
        {
            puedeContinuar = true;
            continue;
        }
        else  if (continuar == 'N' || continuar == 'n')
        {
            break;
        }
        else
        {
            cout << "Letra erronea\n";
            i -= 1;
            puedeContinuar = false;
        }
    }
    float promedio = *acumulador / div;
    cout << " Promedio = " << promedio << "\n";
}

int main(int argc, char** argv)
{
    void (*proceso)(int, char**) = nullptr;

    cout << "Funciones disponibles: \n";
    cout << "   1. Prubea de argumentos. \n";
    cout << "   2. Promedio. \n";
    cout << "Ingresa el numero de la funcion deseada: ";
    int seleccion;
    cin >> seleccion;

    if (seleccion == 1)
    {
        proceso = &PruebaDeArgumentos;
        (*proceso)(argc, argv);
    }
    else if (seleccion == 2)
    {
        proceso = &Promedio;
        (*proceso)(argc, argv);
    }
    else
    {
        cout << "You trash kid xdxdxdxd\n";
        main(argc, argv);
    }

    return 0;
}
