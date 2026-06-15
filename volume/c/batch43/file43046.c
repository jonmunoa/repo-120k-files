// fichero 43046 -- macros y constantes -- MODIFICADO
#define LIMITE_43046 43246
#define FACTOR_43046 3

int aplicar_limite43046(int valor) {
    if (valor > LIMITE_43046) return LIMITE_43046;
    return valor * FACTOR_43046;
}
