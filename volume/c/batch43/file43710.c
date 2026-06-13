// fichero 43710 -- macros y constantes
#define LIMITE_43710 43810
#define FACTOR_43710 1

int aplicar_limite43710(int valor) {
    if (valor > LIMITE_43710) return LIMITE_43710;
    return valor * FACTOR_43710;
}
