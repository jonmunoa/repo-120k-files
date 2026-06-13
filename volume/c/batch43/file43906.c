// fichero 43906 -- macros y constantes
#define LIMITE_43906 44006
#define FACTOR_43906 2

int aplicar_limite43906(int valor) {
    if (valor > LIMITE_43906) return LIMITE_43906;
    return valor * FACTOR_43906;
}
