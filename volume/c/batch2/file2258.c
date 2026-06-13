// fichero 2258 -- macros y constantes
#define LIMITE_2258 2358
#define FACTOR_2258 4

int aplicar_limite2258(int valor) {
    if (valor > LIMITE_2258) return LIMITE_2258;
    return valor * FACTOR_2258;
}
