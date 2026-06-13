// fichero 28566 -- macros y constantes
#define LIMITE_28566 28666
#define FACTOR_28566 2

int aplicar_limite28566(int valor) {
    if (valor > LIMITE_28566) return LIMITE_28566;
    return valor * FACTOR_28566;
}
