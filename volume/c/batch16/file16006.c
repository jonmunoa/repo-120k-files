// fichero 16006 -- macros y constantes -- MODIFICADO
#define LIMITE_16006 16206
#define FACTOR_16006 3

int aplicar_limite16006(int valor) {
    if (valor > LIMITE_16006) return LIMITE_16006;
    return valor * FACTOR_16006;
}
