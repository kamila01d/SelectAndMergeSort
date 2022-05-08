#include <iostream>
template<typename T>
void merge(T array[], int l, int m, int r) {

    int size_tmp1 = m - l + 1;
    int size_tmp2 = r - m;


    T *tmp1 = new T[size_tmp1];
    T *tmp2 = new T[size_tmp2];

    for (int i = 0; i < size_tmp1; i++)
        tmp1[i] = array[l + i];
    for (int j = 0; j < size_tmp2; j++)
        tmp2[j] = array[m + 1 + j];

    int curr1 = 0;
    int curr2 = 0;
    int k = l;


    while (curr1 < size_tmp1 && curr2 < size_tmp2) {
        if (tmp1[curr1] > tmp2[curr2]) {
            array[k] = tmp2[curr2];
            curr2++;
        } else {
            array[k] = tmp1[curr1];
            curr1++;
        }
        k++;

    }

    while (curr1 < size_tmp1) {
        array[k] = tmp1[curr1];
        curr1++;
        k++;
    }

    while (curr2 < size_tmp2) {
        array[k] = tmp2[curr2];
        curr2++;
        k++;

    }
    delete [] tmp1;
    delete [] tmp2;
}
template<typename T>
void merge_sort(T tab[], int l, int r)
{
    if(l<r){
        int m = l + (r - l) / 2;
        merge_sort(tab, l, m);
        merge_sort(tab, m + 1, r);
        merge(tab, l, m, r);
    }

}
template<typename T>
void selection_sort(T tab[], int l, int r)
{
    int i;
    int min;

    for( i=l; i<=r; i++ )
    {
        min = i;

        for(int j= i+1; j<=r; j++)
            if(tab[min]> tab[j])
                min = j;

        std::swap(tab[min], tab[i]);




    }
}
