// fichero 2258 -- macros y constantes -- MODIFICADO
#define LIMITE_2258 2458
#define FACTOR_2258 5

int aplicar_limite2258(int valor) {
    if (valor > LIMITE_2258) return LIMITE_2258;
    return valor * FACTOR_2258;
}
