// fichero 43598 -- macros y constantes -- MODIFICADO
#define LIMITE_43598 43798
#define FACTOR_43598 5

int aplicar_limite43598(int valor) {
    if (valor > LIMITE_43598) return LIMITE_43598;
    return valor * FACTOR_43598;
}
