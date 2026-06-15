// fichero 43710 -- macros y constantes -- MODIFICADO
#define LIMITE_43710 43910
#define FACTOR_43710 2

int aplicar_limite43710(int valor) {
    if (valor > LIMITE_43710) return LIMITE_43710;
    return valor * FACTOR_43710;
}
