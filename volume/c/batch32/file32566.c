// fichero 32566 -- macros y constantes
#define LIMITE_32566 32666
#define FACTOR_32566 2

int aplicar_limite32566(int valor) {
    if (valor > LIMITE_32566) return LIMITE_32566;
    return valor * FACTOR_32566;
}
