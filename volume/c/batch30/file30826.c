// fichero 30826 -- macros y constantes -- MODIFICADO
#define LIMITE_30826 31026
#define FACTOR_30826 3

int aplicar_limite30826(int valor) {
    if (valor > LIMITE_30826) return LIMITE_30826;
    return valor * FACTOR_30826;
}
