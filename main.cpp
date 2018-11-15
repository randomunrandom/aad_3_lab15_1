/*
 * created by Danil Kireev, PFUR NFI-201, 8.11.18, 09:00
 */
#include <iostream>
using namespace std;

/*
 *  №1
 *
 */

int main() {
    cout << "программа находит искомый элемент в упорядосенном двумерном масиве" << endl;
    int m = 4, n = 4, i = 0, j = n-1, inp, res_x=-1, res_y=-1, steps = 0;
    int arr[m][n] = {{15, 20, 40, 85},
                     {20, 35, 80, 95},
                     {30, 55, 95, 105},
                     {40, 80, 100,20}};
    cout << "введите искомый элемент: ";
    cin >> inp;
    while((i < m) and (j >= 0)) {
        steps++;
        if (arr[i][j] == inp) {
            res_x = i;
            res_y = j;
            break;
        } else if (arr[i][j] > inp) {
            j--;
        } else {
            i++;
        }
    }
    if(res_x != -1) {
        cout << "положение: " << res_x << ", " << res_y << ", необходимое количество шагов: " << steps << endl;
    }
    else cout << "элемент не найден" << endl;
    return 0;
}