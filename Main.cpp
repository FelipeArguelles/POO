int main() {
    int out =0;
    ch mapa[9][9] = {};
    menu_principal(mapa);
    if(mapa[0][0] == ' ') {
        while(!end(mapa) && out < 1)
            obtener_datos(mapa , out);

        if(out < 1) {
            int i = 0;
            for (int a = 0; a < 9; a++) {
                for (int b = 0; b < 9; b++) {
                    if (mapa[a][b] == 'O')
                        i = i + 1;
                }
            }
            if (i > 1)
                cout << "No tienes mas movimientos posibles,FIN DEL JUEGO";
            else
                cout << "FELICIDADES";
        }
        else
            cout << endl << "Puedes jugar nuevamente.";
    }
    else
        cout << endl << "Gracias por jugar.";
    return 0;
