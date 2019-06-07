void menu_principal(ch arr[][9]){
    int opcion;
    cout<<endl;
    cout<<"Menu - Juego Senku"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"1. Estilo frances"<<endl;
    cout<<"2. Estilo diamante"<<endl;
    cout<<"3. Estilo ingles"<<endl;
    cout<<"4. Estilo aleman"<<endl;
    cout<<"5. Estilo asimetrico"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<endl;

    do {
        cout << " Selecciona un mapa para jugar, todos son divertidos:";
        cin >> opcion;
    }while (opcion < 0 || opcion > 5);
    if(opcion) {
        mapas(arr, opcion);
        print(arr);
    }
}

void mapas(ch arr1[][9],int option){

    ch frances[9][9] =   {{' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ','O','O','O','O','O',' ',' '},
                          {' ','O','O','O','+','O','O','O',' '},
                          {' ','O','O','O','O','O','O','O',' '},
                          {' ','O','O','O','O','O','O','O',' '},
                          {' ',' ','O','O','O','O','O',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' '}};

    ch diamante[9][9] =  {{' ',' ',' ',' ','O',' ',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ','O','O','O','O','O',' ',' '},
                          {' ','O','O','O','O','O','O','O',' '},
                          {'O','O','O','O','+','O','O','O','O'},
                          {' ','O','O','O','O','O','O','O',' '},
                          {' ',' ','O','O','O','O','O',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ',' ','O',' ',' ',' ',' '}};

    ch ingles[9][9] =    {{' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ','O','O','O','O','O','O','O',' '},
                          {' ','O','O','O','+','O','O','O',' '},
                          {' ','O','O','O','O','O','O','O',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' '}};
   
    ch aleman[9][9] =    {{' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {'O','O','O','O','O','O','O','O','O'},
                          {'O','O','O','O','+','O','O','O','O'},
                          {'O','O','O','O','O','O','O','O','O'},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '},
                          {' ',' ',' ','O','O','O',' ',' ',' '}};
    
    ch asimetrico[9][9] = {{' ',' ',' ','O','O','O',' ',' ',' '},
                           {' ',' ',' ','O','O','O',' ',' ',' '},
                           {' ',' ',' ','O','O','O',' ',' ',' '},
                           {' ','O','O','O','O','O','O','O','O'},
                           {' ','O','O','O','+','O','O','O','O'},
                           {' ','O','O','O','O','O','O','O','O'},
                           {' ',' ',' ','O','O','O',' ',' ',' '},
                           {' ',' ',' ','O','O','O',' ',' ',' '},
                           {' ',' ',' ',' ',' ',' ',' ',' ',' '}};

    

    for(int f = 0; f < 9 ; f++){
        for(int c = 0; c < 9 ; c++){
            if(option == 1)
                arr1[f][c] = frances[f][c];
            else{
                if(option == 2)
                    arr1[f][c] = diamante[f][c];
                else if(option == 3)
                    arr1[f][c] = ingles[f][c];
                else if(option == 4)
                    arr1[f][c] = aleman[f][c];
                else if(option == 5)
                    arr1[f][c] = asimetrico[f][c];
            }
        }
    }
}

void print(ch arr2[][9]){
    cout << endl;
    for (int j = 0; j < 9; j++)
        cout << setw(4) << j + 1;
    cout << endl;
    for(int fila = 0; fila < 9 ; fila++) {
        int x = fila +1;
        cout << x <<setw(3);
        for (int columna = 0; columna < 9; columna++) {
            if(arr2[fila][columna]== 'O' || arr2[fila][columna]== '+') {
                if ((arr2[fila][columna+1] == 'O' || arr2[fila][columna+1] == '+') && columna < 8)
                    cout << arr2[fila][columna] << " - ";
                else
                    cout << arr2[fila][columna] << "   ";
            }
            else
                cout << arr2[fila][columna] << "   ";
        }
        cout << endl;
        for(int i = 0; i<9 ;i++){
            if(arr2[fila][i] == 'O' || arr2[fila][i] == '+') {
                if (arr2[fila + 1][i] == 'O' || arr2[fila + 1][i] == '+')
                    cout << setw(4) << '|';
                else
                    cout << setw(4) << ' ';
            }
            else
                cout << setw(4) << " ";
        }
        cout << endl;
    }
}
                                      

void obtener_datos(ch arr4[][9], int des){
    int fil1 , col1 , fil2 , col2;
    cout << "Ingrese las coordenadas de la ficha que desee mover( (FILA)  (COLUMNA) ):";
    cin >> fil1 >> col1;
    cout << "Ingrese la posicion a donde desee mover la ficha ( (FILA) (COLUMNA) ):";
    cin >> fil2 >> col2;
    if(!fil1 || !col1 || !fil2 || !col2 || (fil1 == 0 && fil2 == 0 && col1 == 0 && col2 == 0))
        des = des + 1;
    else {
        fil1 = fil1 - 1;
        fil2 = fil2 - 1;
        col1 = col1 - 1;
        col2 = col2 - 1;
        check(arr4, fil1, col1, fil2, col2);
    }
}

void check(ch arr5[][9],int f1 ,int c1, int f2 , int c2) {
    int distf = f2 - f1;
    int distc = c2 - c1;
    if (distc == 0 && distf == 0)
        cout << "El movimiento deseado no es valido." << endl;
    else {
        if (distc == 1 || distf == 1 || distc == -1 || distf == -1)
            cout << "El movimiento deseado no es valido,intentalo nuevamente."<< endl;
        else {
            if (distc > 2 || distc < -2 || distf < -2 || distf > 2)
                cout << "El movimiento deseado no es valido,intentalo nuevamente."<< endl;
            else {
                if ((distc == 2 || distc == -2) && (distf == 2 || distf == -2))
                    cout << "El movimiento deseado no es valido,intentalo nuevamente."<< endl;
                else {
                    if (arr5[f1][c1] != 'O' || arr5[f2][c2] != '+')
                        cout << "El movimiento deseado no es valido,intentalo nuevamente."<< endl;
                    else
                        change(arr5, f1, c1, f2, c2);
                }
            }
        }
    }
}

void change(ch arr3[][9],int fila1,int columna1 ,int fila2 ,int columna2){
    ch random;
    random = arr3[fila2][columna2];
    arr3[fila2][columna2] = arr3[fila1][columna1];
    arr3[fila1][columna1] = random;
    int x;
    int y;
    if(fila1 < fila2)
        x = fila2 -1;
    else {
        if (fila1 == fila2)
            x = fila2 + 0;
        else
            x = fila2 + 1;
    }
    if(columna1 < columna2)
        y = columna2 -1;
    else {
        if (columna1 == columna2)
            y = columna2 + 0;
        else
            y = columna2 + 1;
    }
    arr3[x][y]= random;
    print(arr3);
}


bool end(ch arr6[][9]){
    int end=0;
    for(int i = 0; i < 9;i++){
        for(int j = 0; j < 9; j++){
            if(arr6[i][j] == 'O') {
                if ((arr6[i+2][j]=='+'&&arr6[i+1][j]=='O')||(arr6[i-2][j] =='+'&&arr6[i-1][j]=='O') ||(arr6[i][j+2]=='+'&&arr6[i][j+1]=='O') || (arr6[i][j-2]=='+'&&arr6[i][j-1]=='O'))
                    end = end+1;
                else
                    end = end + 0;
            }
        }
    }
    if(end > 0)
        return false;
    else
        return true;
}
