// fichero 48074 -- macros y constantes -- MODIFICADO
#define LIMITE_48074 48274
#define FACTOR_48074 6

int aplicar_limite48074(int valor) {
    if (valor > LIMITE_48074) return LIMITE_48074;
    return valor * FACTOR_48074;
}
