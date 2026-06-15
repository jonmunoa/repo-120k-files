// fichero 43454 -- macros y constantes -- MODIFICADO
#define LIMITE_43454 43654
#define FACTOR_43454 6

int aplicar_limite43454(int valor) {
    if (valor > LIMITE_43454) return LIMITE_43454;
    return valor * FACTOR_43454;
}
