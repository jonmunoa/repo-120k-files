// fichero 16258 -- macros y constantes
#define LIMITE_16258 16358
#define FACTOR_16258 4

int aplicar_limite16258(int valor) {
    if (valor > LIMITE_16258) return LIMITE_16258;
    return valor * FACTOR_16258;
}
