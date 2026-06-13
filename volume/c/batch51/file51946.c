// fichero 51946 -- macros y constantes
#define LIMITE_51946 52046
#define FACTOR_51946 2

int aplicar_limite51946(int valor) {
    if (valor > LIMITE_51946) return LIMITE_51946;
    return valor * FACTOR_51946;
}
