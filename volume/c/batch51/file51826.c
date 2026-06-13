// fichero 51826 -- macros y constantes
#define LIMITE_51826 51926
#define FACTOR_51826 2

int aplicar_limite51826(int valor) {
    if (valor > LIMITE_51826) return LIMITE_51826;
    return valor * FACTOR_51826;
}
