// fichero 30518 -- macros y constantes
#define LIMITE_30518 30618
#define FACTOR_30518 4

int aplicar_limite30518(int valor) {
    if (valor > LIMITE_30518) return LIMITE_30518;
    return valor * FACTOR_30518;
}
