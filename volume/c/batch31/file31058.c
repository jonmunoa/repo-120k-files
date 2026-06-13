// fichero 31058 -- macros y constantes
#define LIMITE_31058 31158
#define FACTOR_31058 4

int aplicar_limite31058(int valor) {
    if (valor > LIMITE_31058) return LIMITE_31058;
    return valor * FACTOR_31058;
}
