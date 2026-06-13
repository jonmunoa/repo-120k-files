// fichero 258 -- macros y constantes
#define LIMITE_258 358
#define FACTOR_258 4

int aplicar_limite258(int valor) {
    if (valor > LIMITE_258) return LIMITE_258;
    return valor * FACTOR_258;
}
