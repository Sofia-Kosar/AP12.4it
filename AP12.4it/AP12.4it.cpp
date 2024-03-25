#include <iostream>

using namespace std;

typedef int Info;
struct Elem
{
    Elem* link;
    Info info;
};

void LAdd(Elem*& L, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    if (L != NULL)
    {
        Elem* T = L;
        while (T->link != L)
            T = T->link;
        T->link = tmp;
    }
    else
        L = tmp;
    tmp->link = L;
}

void LPrint(Elem* L)
{
    Elem* first = L;
    cout << L->info << "  ";
    while (L->link != first)
    {
        L = L->link;
        cout << L->info << "  ";
    }
    cout << endl;
}

int LCount(Elem* L, Info x)
{
    Elem* first = L; int k = 0; //1
    if (first->info == x)       //2
        k++;                    //3
    while (L->link != first)    //4
    {
        L = L->link;            //5
        if (L->info == x)       //6
            k++;                //7
    }
    return k;                   //8
}

int main()
{
    Elem* L = NULL; int imax, value, value1;
    cout << "Enter the amount of values : ";
    cin >> imax;
    for (int i = 0; i < imax; i++)
    {
        cout << "Enter the value : ";
        cin >> value;
        LAdd(L, value);
    }
    LPrint(L);
    cout << "Enter the value of selected elements : ";
    cin >> value1;
    cout << "The amount of elements with value of " << value1 << " : " << LCount(L, value1) << endl;
}
