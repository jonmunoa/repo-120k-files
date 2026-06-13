// fichero 30678 -- macros y constantes
#define LIMITE_30678 30778
#define FACTOR_30678 4

int aplicar_limite30678(int valor) {
    if (valor > LIMITE_30678) return LIMITE_30678;
    return valor * FACTOR_30678;
}
