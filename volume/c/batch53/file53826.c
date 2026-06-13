// fichero 53826 -- macros y constantes
#define LIMITE_53826 53926
#define FACTOR_53826 2

int aplicar_limite53826(int valor) {
    if (valor > LIMITE_53826) return LIMITE_53826;
    return valor * FACTOR_53826;
}
