// fichero 13826 -- macros y constantes
#define LIMITE_13826 13926
#define FACTOR_13826 2

int aplicar_limite13826(int valor) {
    if (valor > LIMITE_13826) return LIMITE_13826;
    return valor * FACTOR_13826;
}
