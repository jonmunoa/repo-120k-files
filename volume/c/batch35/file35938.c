// fichero 35938 -- macros y constantes
#define LIMITE_35938 36038
#define FACTOR_35938 4

int aplicar_limite35938(int valor) {
    if (valor > LIMITE_35938) return LIMITE_35938;
    return valor * FACTOR_35938;
}
