#include <iostream>
#include "sort.cpp"

int main()
{

    double tab[] = {12.34, 0.457, 0.452, 2.98, 1.76};
    int size = sizeof(tab)/sizeof(tab[0]);

    std::cout << "Tablica przed posortowaniem: ";
    for(int i=0; i<size; i++)
    std::cout<<tab[i]<< " ";


    merge_sort(tab,0,size-1);
    std::cout<<std::endl;
    std::cout<< "Tablica po sortowaniu merge sort: ";
    for(int i=0; i<size; i++)
        std::cout<<tab[i]<< " ";

    std::cout<<std::endl;
    int tab2[] = {12, 0, 3, 2, 13, 4, 7};

    int size2 = sizeof(tab2)/sizeof(tab2[0]);

    std::cout << "Tablica przed posortowaniem: ";
    for(int i=0; i<size2; i++)
        std::cout<<tab2[i]<< " ";

    selection_sort(tab2, 0, size2-1 );
    std::cout<<std::endl;
    std::cout << "Tablica po sortowaniu select sort: ";
    for(int i=0; i<size2; i++)
        std::cout<<tab2[i]<< " ";
        
    std::cout<<std::endl;

    return 0;

}
