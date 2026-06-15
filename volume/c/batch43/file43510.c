// fichero 43510 -- macros y constantes -- MODIFICADO
#define LIMITE_43510 43710
#define FACTOR_43510 2

int aplicar_limite43510(int valor) {
    if (valor > LIMITE_43510) return LIMITE_43510;
    return valor * FACTOR_43510;
}
