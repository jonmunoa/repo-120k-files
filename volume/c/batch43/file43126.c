// fichero 43126 -- macros y constantes -- MODIFICADO
#define LIMITE_43126 43326
#define FACTOR_43126 3

int aplicar_limite43126(int valor) {
    if (valor > LIMITE_43126) return LIMITE_43126;
    return valor * FACTOR_43126;
}
