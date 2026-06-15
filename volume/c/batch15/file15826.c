// fichero 15826 -- macros y constantes -- MODIFICADO
#define LIMITE_15826 16026
#define FACTOR_15826 3

int aplicar_limite15826(int valor) {
    if (valor > LIMITE_15826) return LIMITE_15826;
    return valor * FACTOR_15826;
}
