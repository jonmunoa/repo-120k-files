// fichero 28258 -- macros y constantes
#define LIMITE_28258 28358
#define FACTOR_28258 4

int aplicar_limite28258(int valor) {
    if (valor > LIMITE_28258) return LIMITE_28258;
    return valor * FACTOR_28258;
}
