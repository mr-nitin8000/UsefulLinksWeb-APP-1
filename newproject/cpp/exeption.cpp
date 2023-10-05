// Exception handling
#include <iostream>
using namespace std;
void prog1(double a, double b)
{
    cout << "Divide By Zero problem\n"
         << endl;
    try
    {
        if (b != 0)
        {
            cout << "RESULT: " << a / b << endl;
        }
        else
        {
            throw b;
        }
    }
    catch (double e)
    {
        cout << "EXCEPTION CATCH: " << e << endl;
    }
    cout << "END OF THE PROGRAM!!!\n";
}
main()
{
    prog1(8.9, 7.5);
    prog1(4.65, 0.0);
}
