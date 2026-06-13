// fichero 14 -- macros y constantes
#define LIMITE_14 114
#define FACTOR_14 5

int aplicar_limite14(int valor) {
    if (valor > LIMITE_14) return LIMITE_14;
    return valor * FACTOR_14;
}
