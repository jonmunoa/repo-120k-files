// fichero 41826 -- macros y constantes
#define LIMITE_41826 41926
#define FACTOR_41826 2

int aplicar_limite41826(int valor) {
    if (valor > LIMITE_41826) return LIMITE_41826;
    return valor * FACTOR_41826;
}
