// fichero 17826 -- macros y constantes -- MODIFICADO
#define LIMITE_17826 18026
#define FACTOR_17826 3

int aplicar_limite17826(int valor) {
    if (valor > LIMITE_17826) return LIMITE_17826;
    return valor * FACTOR_17826;
}
