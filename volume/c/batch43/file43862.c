// fichero 43862 -- macros y constantes -- MODIFICADO
#define LIMITE_43862 44062
#define FACTOR_43862 4

int aplicar_limite43862(int valor) {
    if (valor > LIMITE_43862) return LIMITE_43862;
    return valor * FACTOR_43862;
}
