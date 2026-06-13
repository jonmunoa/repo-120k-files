// fichero 36258 -- macros y constantes
#define LIMITE_36258 36358
#define FACTOR_36258 4

int aplicar_limite36258(int valor) {
    if (valor > LIMITE_36258) return LIMITE_36258;
    return valor * FACTOR_36258;
}
