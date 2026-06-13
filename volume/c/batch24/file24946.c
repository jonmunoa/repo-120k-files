// fichero 24946 -- macros y constantes
#define LIMITE_24946 25046
#define FACTOR_24946 2

int aplicar_limite24946(int valor) {
    if (valor > LIMITE_24946) return LIMITE_24946;
    return valor * FACTOR_24946;
}
