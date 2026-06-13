// fichero 6258 -- macros y constantes
#define LIMITE_6258 6358
#define FACTOR_6258 4

int aplicar_limite6258(int valor) {
    if (valor > LIMITE_6258) return LIMITE_6258;
    return valor * FACTOR_6258;
}
