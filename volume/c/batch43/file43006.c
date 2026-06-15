// fichero 43006 -- macros y constantes -- MODIFICADO
#define LIMITE_43006 43206
#define FACTOR_43006 3

int aplicar_limite43006(int valor) {
    if (valor > LIMITE_43006) return LIMITE_43006;
    return valor * FACTOR_43006;
}
