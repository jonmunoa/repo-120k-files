// fichero 48074 -- macros y constantes
#define LIMITE_48074 48174
#define FACTOR_48074 5

int aplicar_limite48074(int valor) {
    if (valor > LIMITE_48074) return LIMITE_48074;
    return valor * FACTOR_48074;
}
