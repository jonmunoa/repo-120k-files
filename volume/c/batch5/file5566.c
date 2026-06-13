// fichero 5566 -- macros y constantes
#define LIMITE_5566 5666
#define FACTOR_5566 2

int aplicar_limite5566(int valor) {
    if (valor > LIMITE_5566) return LIMITE_5566;
    return valor * FACTOR_5566;
}
