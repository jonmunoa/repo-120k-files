// fichero 25946 -- macros y constantes
#define LIMITE_25946 26046
#define FACTOR_25946 2

int aplicar_limite25946(int valor) {
    if (valor > LIMITE_25946) return LIMITE_25946;
    return valor * FACTOR_25946;
}
