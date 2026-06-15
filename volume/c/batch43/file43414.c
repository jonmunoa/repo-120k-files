// fichero 43414 -- macros y constantes -- MODIFICADO
#define LIMITE_43414 43614
#define FACTOR_43414 6

int aplicar_limite43414(int valor) {
    if (valor > LIMITE_43414) return LIMITE_43414;
    return valor * FACTOR_43414;
}
