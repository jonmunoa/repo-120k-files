// fichero 43034 -- macros y constantes
#define LIMITE_43034 43134
#define FACTOR_43034 5

int aplicar_limite43034(int valor) {
    if (valor > LIMITE_43034) return LIMITE_43034;
    return valor * FACTOR_43034;
}
