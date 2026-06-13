// fichero 16826 -- macros y constantes
#define LIMITE_16826 16926
#define FACTOR_16826 2

int aplicar_limite16826(int valor) {
    if (valor > LIMITE_16826) return LIMITE_16826;
    return valor * FACTOR_16826;
}
