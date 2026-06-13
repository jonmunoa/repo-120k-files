// fichero 43110 -- macros y constantes
#define LIMITE_43110 43210
#define FACTOR_43110 1

int aplicar_limite43110(int valor) {
    if (valor > LIMITE_43110) return LIMITE_43110;
    return valor * FACTOR_43110;
}
