// fichero 43014 -- macros y constantes
#define LIMITE_43014 43114
#define FACTOR_43014 5

int aplicar_limite43014(int valor) {
    if (valor > LIMITE_43014) return LIMITE_43014;
    return valor * FACTOR_43014;
}
