// fichero 36566 -- macros y constantes
#define LIMITE_36566 36666
#define FACTOR_36566 2

int aplicar_limite36566(int valor) {
    if (valor > LIMITE_36566) return LIMITE_36566;
    return valor * FACTOR_36566;
}
