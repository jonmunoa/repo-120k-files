// fichero 43070 -- macros y constantes -- MODIFICADO
#define LIMITE_43070 43270
#define FACTOR_43070 2

int aplicar_limite43070(int valor) {
    if (valor > LIMITE_43070) return LIMITE_43070;
    return valor * FACTOR_43070;
}
