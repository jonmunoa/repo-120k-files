// fichero 33258 -- macros y constantes
#define LIMITE_33258 33358
#define FACTOR_33258 4

int aplicar_limite33258(int valor) {
    if (valor > LIMITE_33258) return LIMITE_33258;
    return valor * FACTOR_33258;
}
