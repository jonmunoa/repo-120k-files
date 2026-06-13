// fichero 23258 -- macros y constantes
#define LIMITE_23258 23358
#define FACTOR_23258 4

int aplicar_limite23258(int valor) {
    if (valor > LIMITE_23258) return LIMITE_23258;
    return valor * FACTOR_23258;
}
