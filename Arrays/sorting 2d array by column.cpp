#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

void display_matrix(int**, int, int);
void gen_matrix(int**, int, int);
void gen_matrix_sum(int**, int**, int, int);
void sort_matrix(int**, int**, int, int);

int main()
{
    srand(time(0));
    int m=5, n=3;

    int** my_matrix = (int**)malloc(m*sizeof(int*));
    for (int i=0; i<m; i++) my_matrix[i] = (int*)malloc(n*sizeof(int));
    gen_matrix(my_matrix, m, n);
    display_matrix(my_matrix, m, n);
    cout << endl;

    int** my_matrix_sum = (int**)malloc(m*sizeof(int*));
    for (int i=0; i<m; i++) my_matrix_sum[i] = (int*)malloc((n+1)*sizeof(int));
    gen_matrix_sum(my_matrix_sum, my_matrix, m, n);
    display_matrix(my_matrix_sum, m, n+1);
    cout << endl;

    int** my_matrix_sorted = (int**)malloc(m*sizeof(int*));
    cout << 1 << endl;
    for (int i=0; i<m; i++) my_matrix_sorted[i] = (int*)malloc((n+1)*sizeof(int));
    cout << 2 << endl;
    sort_matrix(my_matrix_sorted, my_matrix_sum, m, n);
    cout << 3 << endl;
    display_matrix(my_matrix_sorted, m, n+1);
    cout << 4 << endl;
    cout << endl;
}

void display_matrix(int** my_matrix, int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout << setw(2) << my_matrix[i][j] << " ";
        cout << endl;
    }
}

void gen_matrix(int** M, int m, int n)
{
    int random_limit = 10;

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            M[i][j] = rand()%random_limit + 1;
}

void gen_matrix_sum(int** M, int** my_matrix, int m, int n)
{
    int aux[m];

    for (int i=0; i<m; i++)
        aux[i] = 0;

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
        {
            M[i][j] = my_matrix[i][j];
            aux[i] += M[i][j];
        }

    for (int i=0; i<m; i++)
        M[i][n] = aux[i];
}

void sort_matrix(int** my_matrix_sorted, int** my_matrix, int m, int n)
{
    int v_sum_values[m];

    for (int i=0; i<m; i++)
        v_sum_values[i] = my_matrix[i][n];

    int v[n];
    int maxV = v_sum_values[0];
    int index;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (v_sum_values[j]>maxV)
            {
                maxV = v_sum_values[j];
                index = j;
            }
        }
        v_sum_values[index] = -1;
        v[i] = index;
        maxV = v_sum_values[i];
    }

    for (int i=0; i<m; i++)
        for (int j=0; j<n+1; j++)
            my_matrix_sorted[i][j] = my_matrix[v[i]][j];
}
