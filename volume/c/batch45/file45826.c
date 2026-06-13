// fichero 45826 -- macros y constantes
#define LIMITE_45826 45926
#define FACTOR_45826 2

int aplicar_limite45826(int valor) {
    if (valor > LIMITE_45826) return LIMITE_45826;
    return valor * FACTOR_45826;
}
