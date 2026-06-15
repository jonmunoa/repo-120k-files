// fichero 16826 -- macros y constantes -- MODIFICADO
#define LIMITE_16826 17026
#define FACTOR_16826 3

int aplicar_limite16826(int valor) {
    if (valor > LIMITE_16826) return LIMITE_16826;
    return valor * FACTOR_16826;
}
