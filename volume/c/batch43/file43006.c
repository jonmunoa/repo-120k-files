// fichero 43006 -- macros y constantes
#define LIMITE_43006 43106
#define FACTOR_43006 2

int aplicar_limite43006(int valor) {
    if (valor > LIMITE_43006) return LIMITE_43006;
    return valor * FACTOR_43006;
}
