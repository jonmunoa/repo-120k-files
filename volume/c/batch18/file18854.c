// fichero 18854 -- macros y constantes
#define LIMITE_18854 18954
#define FACTOR_18854 5

int aplicar_limite18854(int valor) {
    if (valor > LIMITE_18854) return LIMITE_18854;
    return valor * FACTOR_18854;
}
