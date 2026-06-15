// fichero 36566 -- macros y constantes -- MODIFICADO
#define LIMITE_36566 36766
#define FACTOR_36566 3

int aplicar_limite36566(int valor) {
    if (valor > LIMITE_36566) return LIMITE_36566;
    return valor * FACTOR_36566;
}
