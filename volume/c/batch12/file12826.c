// fichero 12826 -- macros y constantes -- MODIFICADO
#define LIMITE_12826 13026
#define FACTOR_12826 3

int aplicar_limite12826(int valor) {
    if (valor > LIMITE_12826) return LIMITE_12826;
    return valor * FACTOR_12826;
}
