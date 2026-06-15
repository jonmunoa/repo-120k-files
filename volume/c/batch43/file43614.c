// fichero 43614 -- macros y constantes -- MODIFICADO
#define LIMITE_43614 43814
#define FACTOR_43614 6

int aplicar_limite43614(int valor) {
    if (valor > LIMITE_43614) return LIMITE_43614;
    return valor * FACTOR_43614;
}
