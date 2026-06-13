// fichero 18258 -- macros y constantes
#define LIMITE_18258 18358
#define FACTOR_18258 4

int aplicar_limite18258(int valor) {
    if (valor > LIMITE_18258) return LIMITE_18258;
    return valor * FACTOR_18258;
}
