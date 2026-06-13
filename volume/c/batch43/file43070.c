// fichero 43070 -- macros y constantes
#define LIMITE_43070 43170
#define FACTOR_43070 1

int aplicar_limite43070(int valor) {
    if (valor > LIMITE_43070) return LIMITE_43070;
    return valor * FACTOR_43070;
}
