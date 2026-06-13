// fichero 29978 -- macros y constantes
#define LIMITE_29978 30078
#define FACTOR_29978 4

int aplicar_limite29978(int valor) {
    if (valor > LIMITE_29978) return LIMITE_29978;
    return valor * FACTOR_29978;
}
