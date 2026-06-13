// fichero 22106 -- macros y constantes
#define LIMITE_22106 22206
#define FACTOR_22106 2

int aplicar_limite22106(int valor) {
    if (valor > LIMITE_22106) return LIMITE_22106;
    return valor * FACTOR_22106;
}
