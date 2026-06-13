// fichero 6826 -- macros y constantes
#define LIMITE_6826 6926
#define FACTOR_6826 2

int aplicar_limite6826(int valor) {
    if (valor > LIMITE_6826) return LIMITE_6826;
    return valor * FACTOR_6826;
}
