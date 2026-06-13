// fichero 43514 -- macros y constantes
#define LIMITE_43514 43614
#define FACTOR_43514 5

int aplicar_limite43514(int valor) {
    if (valor > LIMITE_43514) return LIMITE_43514;
    return valor * FACTOR_43514;
}
