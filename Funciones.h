#include <iostream>
#include <iomanip>
using namespace std;
typedef char ch;
//Declaramos las funciones
void menu_principal(ch arr[][9]);
void mapas(ch arr1[][9],int option);
void print(ch arr2[][9]);
void change(ch arr3[][9],int fila1,int columna1 ,int fila2 ,int columna2);
void obtener_datos(ch arr4[][9],int des);
void check(ch arr5[][9], int f1 ,int c1, int f2 , int c2);
bool end(ch arr6[][9]);
