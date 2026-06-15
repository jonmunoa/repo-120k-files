// fichero 43514 -- macros y constantes -- MODIFICADO
#define LIMITE_43514 43714
#define FACTOR_43514 6

int aplicar_limite43514(int valor) {
    if (valor > LIMITE_43514) return LIMITE_43514;
    return valor * FACTOR_43514;
}
