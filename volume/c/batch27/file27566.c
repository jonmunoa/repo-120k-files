// fichero 27566 -- macros y constantes -- MODIFICADO
#define LIMITE_27566 27766
#define FACTOR_27566 3

int aplicar_limite27566(int valor) {
    if (valor > LIMITE_27566) return LIMITE_27566;
    return valor * FACTOR_27566;
}
