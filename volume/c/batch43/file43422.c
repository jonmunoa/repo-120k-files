// fichero 43422 -- macros y constantes -- MODIFICADO
#define LIMITE_43422 43622
#define FACTOR_43422 4

int aplicar_limite43422(int valor) {
    if (valor > LIMITE_43422) return LIMITE_43422;
    return valor * FACTOR_43422;
}
