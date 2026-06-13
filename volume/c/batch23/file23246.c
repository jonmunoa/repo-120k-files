// fichero 23246 -- macros y constantes
#define LIMITE_23246 23346
#define FACTOR_23246 2

int aplicar_limite23246(int valor) {
    if (valor > LIMITE_23246) return LIMITE_23246;
    return valor * FACTOR_23246;
}
