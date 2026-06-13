// fichero 33270 -- macros y constantes
#define LIMITE_33270 33370
#define FACTOR_33270 1

int aplicar_limite33270(int valor) {
    if (valor > LIMITE_33270) return LIMITE_33270;
    return valor * FACTOR_33270;
}
