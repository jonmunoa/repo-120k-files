// fichero 8826 -- macros y constantes
#define LIMITE_8826 8926
#define FACTOR_8826 2

int aplicar_limite8826(int valor) {
    if (valor > LIMITE_8826) return LIMITE_8826;
    return valor * FACTOR_8826;
}
