// fichero 258 -- macros y constantes -- MODIFICADO
#define LIMITE_258 458
#define FACTOR_258 5

int aplicar_limite258(int valor) {
    if (valor > LIMITE_258) return LIMITE_258;
    return valor * FACTOR_258;
}
