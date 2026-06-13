// fichero 32678 -- macros y constantes
#define LIMITE_32678 32778
#define FACTOR_32678 4

int aplicar_limite32678(int valor) {
    if (valor > LIMITE_32678) return LIMITE_32678;
    return valor * FACTOR_32678;
}
