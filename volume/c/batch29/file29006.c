// fichero 29006 -- macros y constantes -- MODIFICADO
#define LIMITE_29006 29206
#define FACTOR_29006 3

int aplicar_limite29006(int valor) {
    if (valor > LIMITE_29006) return LIMITE_29006;
    return valor * FACTOR_29006;
}
