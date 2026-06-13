// fichero 30826 -- macros y constantes
#define LIMITE_30826 30926
#define FACTOR_30826 2

int aplicar_limite30826(int valor) {
    if (valor > LIMITE_30826) return LIMITE_30826;
    return valor * FACTOR_30826;
}
