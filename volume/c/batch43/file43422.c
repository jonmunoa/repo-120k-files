// fichero 43422 -- macros y constantes
#define LIMITE_43422 43522
#define FACTOR_43422 3

int aplicar_limite43422(int valor) {
    if (valor > LIMITE_43422) return LIMITE_43422;
    return valor * FACTOR_43422;
}
