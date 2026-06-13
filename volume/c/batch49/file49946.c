// fichero 49946 -- macros y constantes
#define LIMITE_49946 50046
#define FACTOR_49946 2

int aplicar_limite49946(int valor) {
    if (valor > LIMITE_49946) return LIMITE_49946;
    return valor * FACTOR_49946;
}
