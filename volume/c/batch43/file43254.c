// fichero 43254 -- macros y constantes -- MODIFICADO
#define LIMITE_43254 43454
#define FACTOR_43254 6

int aplicar_limite43254(int valor) {
    if (valor > LIMITE_43254) return LIMITE_43254;
    return valor * FACTOR_43254;
}
