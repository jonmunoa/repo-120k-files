// fichero 43486 -- macros y constantes
#define LIMITE_43486 43586
#define FACTOR_43486 2

int aplicar_limite43486(int valor) {
    if (valor > LIMITE_43486) return LIMITE_43486;
    return valor * FACTOR_43486;
}
